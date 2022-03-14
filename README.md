
# get_next_line
*Reading a line from a fd is way too tedious*

### Table of Contents
* **About the project**
* * [Introduction](#introduction)
* * [Capabilities](#capabilities)
* * [Return Values](#return-values)
* **Usage**
* * [Requirements](#requirements)
* * [Instructions](#instructions)
* [**Goals**](#goals)
* [**Skills**](#skills)

## About the project

In this project we must create a function that returns one line from the specified fd every time it is called, followed by a newline if the line has one. This project introduces the idea of static variables, which will be very useful for future projects.

### Table of Contents

* [Usage](#usage)
* [Goals](#goals)
* [Skills](3skills)

### Capabilities

The function to implement is called  `get_next_line`, and will have the following prototype:
```c
char *get_next_line(int fd);
```

### Return Values

This function only has two possible return values:

| Return Value | Description |
| -- | -- |
| char * | The string containing a line read by the function |
| (null) | Either an error occurred or reached EOF (End Of File) |

## Usage

### Requirements

The function is written in C language and thus needs the  **`gcc`  compiler**  and some standard  **C libraries**  to run.

### Instructions

**Cloning the repositories**

```shell
git clone https://github.com/Neress-dono/Tronc-Commun_42.git 
cd Tronc-Commun_42/get_next_line
make
```

## Goals:

-	Unix logic

## Skills:

- Rigor  
- Unix  
- Algorithms & AI

### [Go back](https://github.com/Neress-dono/common-core_42)
