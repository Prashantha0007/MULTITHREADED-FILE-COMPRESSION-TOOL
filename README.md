# MULTITHREADED-FILE-COMPRESSION

COMPANY : CODTECH IT SOLUTION

NAME : PRASHANT KUMAR SINGH

INTERN ID : CT04DF551

DOMAIN : C++ PROGRAMMING

DURATION : 4 WEEKS

MENTOR : NEELA SANTHOSH

Task Overview:

📦 Run-Length Encoding (RLE) File Compressor & Decompressor
This C++ program implements a simple, efficient, and file-based Run-Length Encoding (RLE) compression and decompression system. It allows users to compress text files using the RLE algorithm and decompress them back to their original form with accuracy.

🚀 Features
✅ Implements Run-Length Encoding algorithm (4a instead of aaaa) to reduce file size.

📂 Works with files: reads from input.txt, writes to compressed.txt and decompressed.txt.

❌ Handles errors gracefully, such as incorrect formats during decompression.

🧠 Designed to be beginner-friendly and easy to understand.

🔁 Reversible: Lossless compression with no data loss during decompression.

📌 What is Run-Length Encoding?
Run-Length Encoding (RLE) is a simple form of lossless data compression where sequences of the same character (runs) are stored as a single character followed by its count.

For example:

makefile
Copy
Edit
Original:     aaaaabbbbccddddd
Compressed:   5a4b2c5d
It is most effective when the input data has lots of repeating characters.

🧾 How It Works
🔹 Compression (compressRLE)
The program reads text content from input.txt.

It iterates through the string and counts how many times each character is repeated consecutively.

It then writes the count followed by the character (e.g., 4a) into compressed.txt.

🔹 Decompression (decompressRLE)
The program reads the encoded string from compressed.txt.

It parses the numeric value (count) and then appends the corresponding character that many times to rebuild the original string.

The result is saved to decompressed.txt.

🧑‍💻 How to Use
Make sure you have a file named input.txt in the same directory as the program.

Run the program.

Choose 'c' to compress or 'd' to decompress.

After execution:

Compressed output will be saved to compressed.txt.

Decompressed output will be saved to decompressed.txt.

🧪 Example
Input (input.txt):

nginx
Copy
Edit
aaabbbccccddddd
Compressed Output (compressed.txt):

Copy
Edit
3a3b4c5d
Decompressed Output (decompressed.txt):

nginx
Copy
Edit
aaabbbccccddddd
🧱 File Structure
css
Copy
Edit
📁 Project Directory
├── input.txt
├── compressed.txt
├── decompressed.txt
└── rle_compression.cpp
⚠️ Limitations
Best suited for text files with lots of repeating characters.

Inefficient for text with little to no repetition (may increase file size).

Assumes input format correctness during decompression.

📌 Future Improvements
Add support for binary file compression.

Implement GUI or CLI options for file selection.

Display compression ratio and file sizes.

Optional: Add multithreading for large file handling.

📜 License
This project is open-source and free to use for educational or personal projects. Attribution appreciated but not required.

OUTPUT

![Image](https://github.com/user-attachments/assets/ff6aa040-fa05-478f-8f5f-890fd616c51b)

![Image](https://github.com/user-attachments/assets/6d11f86c-6b9c-412d-9fdf-78e518649dbf)
![Image](https://github.com/user-attachments/assets/22d422f3-c1f1-4af5-b48a-00dd08dbd6b5)
![Image](https://github.com/user-attachments/assets/6024c7f7-5d40-4377-a2c8-e6d249496496)
