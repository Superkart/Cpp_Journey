# C++ Journey

**Documenting my journey of learning and practicing C++ programming from basics to advanced concepts**

---

## Overview

This repository serves as a comprehensive documentation of my C++ learning journey, covering fundamental concepts, object-oriented programming, data structures, algorithms, and practical implementations. The code is organized systematically following the Abdul Bari C++ course structure, demonstrating progression from basic syntax to advanced algorithmic problem-solving.

---

## About Me

I'm a passionate software developer and lifelong learner with a diverse skill set spanning game development, web technologies, and data science. 

**Game Development**:  My journey began with Unity 3D, where I've built everything from 2D platformers and AR experiences to immersive VR applications for scientific visualization.  I'm proficient in C# and have developed complete game systems including AI, physics, and player mechanics.

**Web Development**: Beyond gaming, I've ventured into modern web development using React, Astro, TypeScript, and backend frameworks like Spring Boot.  I've built full-stack applications including e-commerce platforms and interactive dashboards.

**Data Science**:  I'm equally comfortable with data analysis and scientific computing, having worked with Python, pandas, and Jupyter notebooks for projects ranging from data provenance tracking to statistical analysis.

**Current Focus**: I'm deepening my knowledge of C++ fundamentals, data structures, and algorithms while maintaining an active learning mindset across multiple programming paradigms.  This repository represents my commitment to mastering low-level programming concepts and efficient algorithm implementation.

Whether it's creating interactive 3D experiences, developing web applications, or analyzing complex datasets, I bring creativity, technical rigor, and a continuous drive to learn and build impactful solutions.

---

## Learning Goals

- Master C++ syntax and modern best practices (C++11 and beyond)
- Develop strong understanding of memory management and pointers
- Implement fundamental data structures from scratch
- Practice algorithmic problem-solving with recursion and optimization
- Build proficiency in object-oriented programming principles
- Understand template programming and generic code design
- Explore STL containers and algorithms

---

## Repository Structure

```
Cpp_Journey/
├── AbdulBari_Cpp_Course/
│   ├── EssentialCppConcepts/
│   │   ├── structures.cpp
│   │   ├── structureAsParameter.cpp
│   │   ├── pointerToStructure.cpp
│   │   ├── classes.cpp
│   │   ├── templateClasses.cpp
│   │   ├── reference.cpp
│   │   └── arrayAsParameter.cpp
│   ├── Recursion/
│   │   ├── tailHead.cpp
│   │   ├── staticGlobal.cpp
│   │   ├── treeRecursion.cpp
│   │   ├── indirectRecursion.cpp
│   │   ├── nestedRecursion.cpp
│   │   ├── sumOfNNaturalNos.cpp
│   │   ├── powerOfNumberRecursion.cpp
│   │   ├── taylorSeries.cpp
│   │   ├── fibonacciREcursion.cpp
│   │   └── combinationsRecursion.cpp
│   └── DataStructures/
│       ├── Arrays/
│       │   ├── staticDynamicArrays.cpp
│       │   ├── 2dArray.cpp
│       │   ├── arrayADT.cpp
│       │   ├── arrayADT. h
│       │   ├── increaseArraySize.cpp
│       │   └── linearSearch.cpp
│       ├── Sets/
│       │   └── set.cpp
│       └── Hashmap/
│           └── hashmap.cpp
├── . vscode/
│   └── tasks.json
├── . gitignore
├── LICENSE
└── README.md
```

---

## Topics Covered

### 1. Essential C++ Concepts

**Structures and Memory Management**
- Structure declaration and initialization
- Pass by value vs pass by reference for structures
- Pointer to structure and dynamic memory allocation
- Memory layout and padding considerations

**Object-Oriented Programming**
- Class design with encapsulation (private/public members)
- Constructors (default and parameterized)
- Destructors and resource cleanup
- Getter and setter methods
- Member function implementation

**Template Programming**
- Template class design for generic programming
- Type parameterization with `template<class T>`
- Template function specialization
- Arithmetic operations with templates

**References and Pointers**
- Reference variables and aliasing
- Pointer arithmetic and array manipulation
- Dynamic memory allocation with `new` and `delete`
- Returning pointers from functions
- Memory leak prevention

### 2. Recursion

**Recursion Types**
- **Tail Recursion**: Operations before recursive call
- **Head Recursion**: Operations after recursive call
- **Tree Recursion**: Multiple recursive calls per invocation
- **Indirect Recursion**:  Mutual recursion between functions
- **Nested Recursion**:  Recursive call as parameter to another recursive call

**Optimization Techniques**
- Static variables in recursion
- Memoization for dynamic programming (Fibonacci implementation)
- Iterative alternatives to recursion
- Time and space complexity analysis

**Mathematical Problems**
- Sum of N natural numbers (recursive and iterative)
- Power calculation with optimization (O(log n) approach)
- Taylor series expansion (three different implementations)
- Fibonacci sequence (iterative, recursive, memoized)
- Combination (nCr) calculation with Pascal's triangle

### 3. Data Structures

**Arrays**
- Static vs dynamic array allocation
- 1D and 2D array implementation
- Array as Abstract Data Type (ADT)
- Array operations:  Insert, Delete, Append, Display
- Dynamic array resizing technique
- Linear search implementation

**STL Containers**
- **Set**: Insertion, deletion, iteration
- Custom utility functions (RemoveSetElement, StringToSet)
- Iterator usage and find operations
- **Map/HashMap**: Key-value pair operations
- Ordered (map) vs unordered (unordered_map) containers
- Auto keyword for type inference

---

## Technical Highlights

### Memory Management Expertise
- Dynamic memory allocation with `new` and `delete`
- Array resizing without memory leaks
- Proper cleanup with destructors
- Pointer manipulation for efficient memory usage

### Algorithm Optimization
- Comparison of recursive vs iterative approaches
- Time complexity analysis (O(n), O(log n), O(2^n))
- Space complexity considerations
- Memoization for exponential to linear improvement

### Modern C++ Features
- Auto keyword for type inference
- Range-based for loops
- Template metaprogramming
- STL container usage
- Reference parameters for efficiency

### Code Quality
- Consistent naming conventions
- Modular function design
- Header file organization
- Input validation and error handling
- Clean code with proper indentation

---

## Development Environment

### Prerequisites
- **Operating System**: Windows 10/11
- **Compiler**: MinGW-w64 GCC/G++ (via MSYS2)
- **Editor**: Visual Studio Code
- **C++ Standard**: C++11 or later

### Setup Instructions

**1. Install MSYS2**
- Download from [https://www.msys2.org/](https://www.msys2.org/)
- Run the installer and follow instructions

**2. Update MSYS2 Packages**
```bash
pacman -Syu
```
Close and reopen terminal if prompted, then run:
```bash
pacman -Su
```

**3. Install MinGW-w64 Toolchain**
```bash
pacman -S mingw-w64-x86_64-gcc
```

**4. Configure System PATH**
- Add `C:\msys64\mingw64\bin` to your system PATH environment variable

**5. Install Visual Studio Code**
- Download from [https://code.visualstudio.com/](https://code.visualstudio.com/)
- Install the **C/C++ extension** by Microsoft

**6. Verify Installation**
```bash
g++ --version
```

---

## How to Build and Run

### Command Line Compilation

**Compile a single file:**
```bash
g++ filename.cpp -o filename
```

**Run the executable:**
```bash
./filename        # Linux/macOS
./filename.exe    # Windows
```

**Compile with debugging symbols:**
```bash
g++ -g filename.cpp -o filename
```

**Compile with C++11 standard:**
```bash
g++ -std=c++11 filename.cpp -o filename
```

### Visual Studio Code Integration

This repository includes a preconfigured `.vscode/tasks.json` file for seamless compilation. 

**Steps:**
1. Open this repository folder in VS Code
2. Open the `.cpp` file you want to build
3. Press `Ctrl+Shift+B` to build
4. The executable is created in the same folder
5. Run in the integrated terminal: 
   ```bash
   ./filename. exe
   ```

**Features:**
- Automatically builds the currently active `.cpp` file
- Creates executable with the same name as source file
- Includes debugging information for GDB compatibility

---

## Code Examples

### Array ADT Implementation
Demonstrates custom array data structure with dynamic sizing: 
```cpp
struct Array {
    int* A;      // Dynamic array pointer
    int size;    // Maximum capacity
    int length;  // Current number of elements
};

void Insert(int value, int index, Array &arr);
int Delete(int index, Array &arr);
void Append(int value, Array &arr);
```

### Fibonacci with Memoization
Optimizes recursive Fibonacci from O(2^n) to O(n):
```cpp
int F[10];  // Memoization array

int FibonacciMemoization(int n) {
    if(n <= 1) {
        F[n] = n;
        return n;
    }
    if(F[n-2] == -1)
        F[n-2] = FibonacciMemoization(n-2);
    if(F[n-1] == -1)
        F[n-1] = FibonacciMemoization(n-1);
    return F[n-2] + F[n-1];
}
```

### Template Class for Generic Arithmetic
Type-safe operations with templates:
```cpp
template<class T>
class Arithmetic {
private:
    T a, b;
public:
    Arithmetic(T a, T b);
    T Add() { return a + b; }
    T Subtract() { return a - b; }
};
```

---

## Key Learnings

### Fundamental Concepts Mastered
- **Memory Management**: Stack vs heap allocation, preventing memory leaks
- **Pointers**: Address manipulation, pointer arithmetic, function pointers
- **References**: Efficient parameter passing, avoiding copies
- **Dynamic Allocation**: Runtime memory management with `new`/`delete`

### Data Structures Implemented
- Custom array ADT with dynamic resizing
- Understanding of STL containers (set, map, unordered_map)
- 2D array allocation in heap memory
- Array-based algorithm implementations

### Algorithm Design Patterns
- Recursive problem decomposition
- Iterative optimization of recursive solutions
- Memoization for dynamic programming
- Time and space complexity trade-offs

### Object-Oriented Principles
- Encapsulation with private/public access modifiers
- Constructor and destructor lifecycle management
- Template-based generic programming
- Class design for reusability

---

## Learning Resources

**Primary Course**: Abdul Bari C++ Programming Course
- Structured curriculum from basics to advanced topics
- Emphasis on data structures and algorithms
- Practical coding exercises and implementations

**Compiler Documentation**:  
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [MinGW-w64 Project](https://www.mingw-w64.org/)

**C++ References**:
- [cppreference.com](https://en.cppreference.com/)
- [ISO C++ Standards](https://isocpp.org/)

---

## Future Plans

### Short-term Goals
- Complete remaining data structure implementations (linked lists, stacks, queues)
- Practice more algorithm problems (sorting, searching)
- Implement binary tree and graph algorithms
- Learn about advanced recursion patterns

### Long-term Goals
- Master C++ STL (Standard Template Library) comprehensively
- Study design patterns in C++
- Explore modern C++ features (C++17, C++20)
- Build small projects combining multiple concepts
- Contribute to open-source C++ projects
- Prepare for competitive programming challenges

---

## Progress Tracking

### Completed Topics
- Essential C++ concepts (structures, classes, templates)
- Comprehensive recursion study (9+ different patterns)
- Array data structures and basic operations
- STL containers (set, map)
- Memory management fundamentals

### In Progress
- Advanced data structures (linked lists, trees)
- Sorting and searching algorithms
- Graph algorithms

### Planned
- Dynamic programming problems
- Greedy algorithms
- Object-oriented design patterns
- C++ Standard Template Library mastery

---

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## Contact

**Developer**:  Superkart

- GitHub: [@Superkart](https://github.com/Superkart)
- Repository: [Cpp_Journey](https://github.com/Superkart/Cpp_Journey)

---

## Acknowledgments

- **Abdul Bari** for the comprehensive C++ course structure and problem sets
- **MSYS2 Project** for providing the MinGW-w64 toolchain
- **Microsoft** for Visual Studio Code and C++ extension
- **C++ Community** for extensive documentation and learning resources

---

**Continuously Learning | Building Strong Foundations | Mastering C++**
