# OOC (2nd Semester) – C++ OOP Mini Project (Bus Details)

This repository contains a small **C++ Object-Oriented Programming** exercise created for a 2nd semester OOC module at **Sri Lanka Institute of Information Technology (SLIIT)**.

The project demonstrates basic OOP concepts such as **classes, encapsulation, member functions, and object creation**, using a simple `Bus` class and a `main()` program that creates multiple `Bus` objects and prints their details.

---

## What’s inside

### Files
- `Bus.h` – `Bus` class declaration  
- `Bus.cpp` – `Bus` class implementation  
- `IT20244866.cpp` – `main()` program (creates buses and prints details)

### Expected behavior
When the program runs, it should print each bus’s:
- Bus ID
- Driver name
- Destination

---

## Requirements

Choose **one** option:

### Option A: Linux / macOS
- `g++` (or `clang++`) installed

### Option B: Windows
- Visual Studio (C++ Desktop Development workload) **or**
- MinGW-w64 / MSYS2 with `g++`

---

## Build & Run (Linux / macOS)

From the project folder (where the `.cpp` files are):

```bash
g++ -std=c++11 -Wall -Wextra -o bus_app IT20244866.cpp Bus.cpp
./bus_app
