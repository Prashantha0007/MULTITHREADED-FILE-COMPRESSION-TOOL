#include <iostream>
#include <sstream>
#include <thread>
#include <vector>
#include <string>
using namespace std;

// ---------- Compression Function ----------
string compressChunk(const string& input) {
    string result;
    int n = input.length();
    for (int i = 0; i < n;) {
        char current = input[i];
        int count = 1;
        while (i + count < n && input[i + count] == current)
            count++;
        result += current + to_string(count);
        i += count;
    }
    return result;
}

// ---------- Decompression Function ----------
string decompressString(const string& input) {
    string result;
    for (size_t i = 0; i < input.length(); ) {
        char ch = input[i++];
        string countStr;
        while (i < input.length() && isdigit(input[i])) {
            countStr += input[i++];
        }
        int count = stoi(countStr);
        result.append(count, ch);
    }
    return result;
}

// ---------- Multithreaded Compression ----------
void compressString(const string& data, int threadCount) {
    int length = data.size();
    int chunkSize = length / threadCount;

    vector<string> compressedParts(threadCount);
    vector<thread> threads;

    for (int i = 0; i < threadCount; ++i) {
        int start = i * chunkSize;
        int end = (i == threadCount - 1) ? length : (i + 1) * chunkSize;

        threads.emplace_back([=, &compressedParts]() {
            compressedParts[i] = compressChunk(data.substr(start, end - start));
        });
    }

    for (auto& t : threads)
        t.join();

    // Join all compressed parts
    string finalResult;
    for (const auto& part : compressedParts)
        finalResult += part;

    cout << "\nOriginal String: " << data << endl;
    cout << "Compressed String: " << finalResult << endl;
}

// ---------- Main Program ----------
int main() {
    int choice;
    cout << "1. Compress a string\n";
    cout << "2. Decompress a string\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();  // Clear newline from buffer

    if (choice == 1) {
        string inputData;
        int threadCount;

        cout << "Enter the string to compress: ";
        getline(cin, inputData);

        cout << "Enter number of threads to use: ";
        cin >> threadCount;

        if (threadCount <= 0 || threadCount > inputData.size()) {
            cout << "Invalid thread count. Using 1 thread instead.\n";
            threadCount = 1;
        }

        compressString(inputData, threadCount);

    } else if (choice == 2) {
        string compressedInput;

        cout << "Enter the compressed string to decompress: ";
        getline(cin, compressedInput);  // Note: this may need another cin.ignore() if input fails

        string result = decompressString(compressedInput);
        cout << "\nDecompressed String: " << result << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
