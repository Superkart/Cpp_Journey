This repository contains my learning and practice of C++ programming. It includes basic syntax, modern C++ features, data structures, algorithms, and small projects. It also documents the setup steps for a C++ development environment on Windows using MSYS2, MinGW-w64, and Visual Studio Code.

Goals
Learn C++ syntax and best practices

Practice modern C++ (C++11 and later)

Work on data structures and algorithms

Build small C++ projects

Environment Setup
This project uses MSYS2 with MinGW-w64 and Visual Studio Code on Windows.

Prerequisites
Windows 10 or 11

MSYS2: https://www.msys2.org/

Visual Studio Code: https://code.visualstudio.com/

Setup Steps
Install MSYS2 from https://www.msys2.org/ and run the installer.

Open MSYS2 terminal and update:

pacman -Syu
Close and reopen the terminal if asked, then run:

pacman -Su
Install MinGW-w64 (GCC and G++):

pacman -S mingw-w64-x86_64-gcc
Add C:\msys64\mingw64\bin to your system PATH.

Install Visual Studio Code and the C/C++ extension by Microsoft.

Verify g++ works by running:

g++ --version
Repository Structure
Each folder contains practice files for a specific topic.

cpp-journey/
01_basics/
02_oop/
03_stl/
04_dsa/
05_projects/
README.md
.gitignore
How to Build and Run
To compile and run a C++ file:

g++ filename.cpp -o filename
./filename



