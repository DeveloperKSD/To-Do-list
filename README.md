# 📝 To-Do List CLI App (C++)
A simple **command-line To-Do List** built with **C++ and file handling**. This app allows users to **add, delete, and view tasks**, storing them in a file (`tasks.txt`) for persistent storage.

---

## 🚀 Features
✔️ **Add Tasks** – Save tasks to `tasks.txt`  
✔️ **Delete Tasks** – Remove a specific task by number  
✔️ **View Tasks** – Display all tasks in a numbered list  
✔️ **Persistent Storage** – Tasks remain even after closing the program  
✔️ **User-Friendly Menu** – Simple navigation through options  

---

## 💡 Concepts Used
🔹 **File Handling** – Read/write tasks from a file using `ifstream` & `ofstream`  
🔹 **Vectors (`std::vector<string>`)** – Store and manipulate tasks dynamically  
🔹 **Loops (`for`, `while`)** – Iterate through task lists efficiently  
🔹 **Conditional Statements (`if-else`)** – Validate user input for better UX  

---

## 📜 How It Works
1️⃣ **Run the program**  
2️⃣ Choose an option:  
   - `1` ➝ Add a task  
   - `2` ➝ Delete a task  
   - `3` ➝ View tasks  
   - `4` ➝ Exit the program  
3️⃣ Tasks are stored in `tasks.txt` and persist between sessions  
4️⃣ Deleting a task rewrites the file **without the deleted task**  

---

## 🛠 Setup & Compilation
### **🔹 Clone the Repository**
```sh
git clone https://github.com/yourusername/todo-list-cpp.git
cd todo-list-cpp

g++ todo.cpp -o todo

