# Student Record Management System in C

## 📌 Project Overview

The **Student Record Management System** is a mini project developed using C programming. It is designed to manage student information efficiently using a Linked List data structure and File Handling concepts.

This application allows users to add, delete, modify, display, sort, reverse, and save student records. It also loads previously saved records automatically when the application starts.

## 🎯 Objectives

- To understand the implementation of Linked Lists in C.
- To perform CRUD operations on student records.
- To implement file handling for permanent data storage.
- To improve programming and problem-solving skills.
- To develop a menu-driven application using C.

## ⚙️ Technologies Used

- Programming Language: C
- Data Structure: Singly Linked List
- File Handling: File Operations
- Compiler: GCC
- Platform: Linux / Windows

## ✨ Features

| Option | Functionality |
|---|---|
| A/a | Add a new student record |
| D/d | Delete a student record |
| S/s | Display all student records |
| M/m | Modify a student record |
| V/v | Save student records to a file |
| E/e | Exit the application |
| T/t | Sort student records |
| L/l | Delete all student records |
| R/r | Reverse the student list |

## 📂 Project Structure

```text
Student_Record_Management_System/
│
├── main.c
├── add_record.c
├── delete_record.c
├── modify_record.c
├── show_list.c
├── save_file.c
├── student.dat
└── README.md
```

*Note: The file names above are examples. Update them according to your actual project files.*

## 🔧 Concepts Implemented

1. Structures
2. Pointers
3. Dynamic Memory Allocation
4. Singly Linked Lists
5. Functions
6. File Handling
7. Searching and Sorting
8. Menu-driven Programming

## 🚀 How to Compile and Run

### Step 1: Clone the Repository

```bash
git clone YOUR_GITHUB_REPOSITORY_URL
```

### Step 2: Navigate to the Project Folder

```bash
cd Student_Record_Management_System
```

### Step 3: Compile the Program

If all C files are in the same directory:

```bash
gcc *.c -o student
```

### Step 4: Run the Application

On Linux:

```bash
./student
```

On Windows:

```bash
student.exe
```

## 💾 File Handling

The application uses a file named `student.dat` to store student records permanently.

- When the user selects Save, student records are stored in the file.
- When the application starts, previously saved records are loaded automatically if the file exists.
- If the file does not exist, the application starts with an empty student list.

## 📚 Learning Outcomes

- Practical knowledge of C programming.
- Understanding of linked list operations.
- Experience with dynamic memory allocation.
- Knowledge of file handling and data persistence.
- Improved logical thinking and problem-solving abilities.

## 🔮 Future Enhancements

- Add a graphical user interface.
- Implement student search functionality.
- Add login authentication.
- Generate student reports.
- Improve data validation and error handling.

## 👩‍💻 Author

**Lavanya**

## 📄 License

This project is developed for educational purposes as part of C Programming practice.
