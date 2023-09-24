# Library_Management_System
This project is for school assignment, I work on Library management system, where librarian as admin can:
- Manage on book info like insert, delete, update, search, sort
- Mange on student info like register, remove, update, search, sort
- Manage on library transaction like issuing book to student, and return book back to library

This project is made using Linked List data structure and Linked List operation.  
To reduce code redundancy and promote code reusability, I devide a function to many small functions and use function pointer to call and reuse such small function in many part of my code.  
All data is saved into local sqlite3 database which is create on host machine upon running the program.  
