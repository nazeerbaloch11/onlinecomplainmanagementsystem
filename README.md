# onlinecomplainmanagementsystem
This is a basic C++ console-based project that allows users to manage complaints using file handling. The program provides options to create, view, update, and delete complaint records stored in a text file.

---

Features

1. Create Complaint
   - User can enter complaint ID, name, and complaint text.
   - The complaint is stored in complaints.txt in CSV format.

2. View Complaints
   - Displays all complaints saved in the file.

3. Update Complaint
   - User provides a complaint ID.
   - If found, they can update the name and complaint text.
   - Data is updated by rewriting the file using a temporary file.

4. Delete Complaint
   - User provides a complaint ID.
   - If found, the complaint is removed from the file.

---

File Format

Complaints are stored in complaints.txt in this format:


ID,Name,Complaint


Example:


101,John Doe,Internet not working
102,Jane Smith,Power outage


---

How to Run

1. Compile the program using a C++ compiler (like g++).
2. Run the executable file.
3. Choose options from the menu to manage complaints.

---

Requirements

- C++ Compiler (e.g., g++)
 Basic understanding of file handling and arrays
