# CPP Module 04 - Subtype Polymorphism, Abstract Classes & Interfaces

This repository contains four exercises demonstrating key Object-Oriented Programming concepts in C++98. Each exercise builds upon the previous ones to explore polymorphism, inheritance, abstract classes, and interfaces.

## Table of Contents
- Exercise 00: Polymorphism
- Exercise 01: Brain Class
- Exercise 02: Abstract Classes
- Exercise 03: Interface & Recap
- Compilation Instructions

## Exercise 00: Polymorphism

A basic implementation of polymorphism using an `Animal` base class with derived `Cat` and `Dog` classes. This exercise also includes a `WrongAnimal` and `WrongCat` to demonstrate the importance of virtual functions.

**Key Concepts:**
- Virtual functions
- Runtime polymorphism
- Virtual destructors
- Method overriding

## Exercise 01: Brain Class

Extends the first exercise by adding a `Brain` class containing an array of "ideas". This exercise demonstrates deep copying and proper memory management.

**Key Concepts:**
- Dynamic memory allocation
- Deep vs. shallow copying
- Memory leaks prevention
- Copy constructors and assignment operators

## Exercise 02: Abstract Classes

Modifies the `Animal` class by making it abstract, preventing direct instantiation. This enforces that only concrete derived classes can be created.

**Key Concepts:**
- Pure virtual functions
- Abstract base classes
- Concrete implementations
- Interface design patterns

## Exercise 03: Interface & Recap

Implements a material creation system using interfaces and abstract classes. This exercise combines all previous concepts into a more complex design.

**Key Components:**
- `AMateria`: Abstract base class for materials
- `Ice` & `Cure`: Concrete material implementations
- `ICharacter`: Character interface
- `Character`: Concrete character class
- `IMateriaSource` & `MateriaSource`: Material creation system

## Compilation Instructions

Each exercise has its own Makefile. To compile any exercise:

```bash
cd exXX
make
```

Run the executable:
```bash
./executableName
```

Clean object files:
```bash
make clean
```

Clean object files and executable:
```bash
make fclean
```

Rebuild:
```bash
make re
```

All code is compiled with the following flags:
```
-Wall -Wextra -Werror -std=c++98 -pedantic -Wshadow
```