# MULTITHREADED-FILE-COMPRESSION

COMPANY : CODTECH IT SOLUTION

NAME : PRASHANT KUMAR SINGH

INTERN ID : CT04DF551

DOMAIN : C++ PROGRAMMING

DURATION : 4 WEEKS

MENTOR : NEELA SANTHOSH

Task Overview:
📌 Project Objective
The primary objective of this project is to design and develop a C++-based file compression and decompression tool that utilizes multithreading to improve performance. The tool applies Run-Length Encoding (RLE) to compress and decompress string-based data. It allows users to input data manually, compress it using multiple threads, and decompress it when needed — all through a command-line interface.

This task is part of an internship assignment aimed at understanding core C++ concepts such as string manipulation, file handling, thread management, and performance optimization using concurrency.

⚙️ Features Implemented
🔹 Run-Length Encoding (RLE): Implements a basic form of lossless data compression by replacing repeated characters with a single character followed by the count.

🔹 Multithreaded Compression: Divides the input string into multiple chunks based on user-defined threads and compresses each part in parallel using C++11 std::thread.

🔹 Decompression Support: Accurately reverses the compression process using a single-threaded logic that parses the encoded string back to its original form.

🔹 User-Friendly Input: Allows users to enter a custom string for compression and choose the number of threads dynamically.

🔹 Menu Interface: Presents a basic interface for users to choose between compression and decompression operations.

🔧 How It Works
Compression Flow:

User inputs a string and selects the number of threads.

The input string is divided into equal parts.

Each part is passed to a separate thread that performs RLE compression.

The compressed results from all threads are concatenated and displayed.

Decompression Flow:

User provides a compressed string (e.g., a3b2c4).

The program scans character-digit pairs, reconstructs the original string, and displays it.

🧠 Key Concepts Used
std::thread for parallel processing

Lambda functions and closures

string operations and substrings

Synchronization via join()

Basic input validation and edge case handling

💡 Use Case
This tool is particularly useful for learning purposes or for compressing repetitive character-based strings like logs, pattern-based datasets, or input files with repeated characters. While it's not as advanced as ZIP or GZIP, it provides a great introduction to custom compression logic with multithreading in C++.

🗃️ Files Included
main.cpp – Full code with menu-based user interface

No external file dependencies — works entirely via user input

✅ Learning Outcomes
By completing this task, I gained hands-on experience in:

Writing clean, modular C++ code

Implementing basic compression algorithms

Managing concurrency with multithreading

Building interactive CLI programs

Structuring real-world software projects

OUTPUT

![Image](https://github.com/user-attachments/assets/7c0aba4b-a612-433e-b33d-54854af199c6)
![Image](https://github.com/user-attachments/assets/2755366c-ad31-4066-bcf4-27eac4c81b26)
