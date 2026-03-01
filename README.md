🏦 Banking Management System (C Language)
---------------------------------------------------------

A menu-driven Banking Management System developed in C that simulates basic banking operations such as deposit, withdrawal, balance inquiry, and compound interest calculation.
This project demonstrates strong fundamentals in structured programming, pointer handling, and modular function design in C

---------------------------------------------------------
🚀 Project Highlights
---------------------------------------------------------

 📌 Menu-driven console application
 
 💰 Deposit & Withdraw operations
 
 📊 Real-time balance tracking
 
 📈 Compound interest calculation using math.h
 
 🧠 Pointer-based balance manipulation
 
 🔁 Continuous execution using loop control

 -----------------------------------------------------------
 🛠️ Technologies Used
 ---------------------------------------------------------

C Programming Language

Standard Libraries:
~~~
#include<stdio.h>

#include<stdlib.h>

#include<math.h>

#include<string.h>
~~~
-----------------------------------------------------------
 📂 Project Structure
 ---------------------------------------------------------

~~~
 Banking-System-C
│
├── banking_system.c
├── README.md
├── .gitignore
└── .gitattributes
~~~


 -----------------------------------------------------------
 📌 Features
 ---------------------------------------------------------
1️⃣ Deposit Money

Adds a specified amount to the account balance after validating input.

2️⃣ Withdraw Money

Withdraws money only if sufficient balance is available.

3️⃣ Calculate Compound Interest

Calculates future balance using the formula:
~~~
A = P × (1 + r/100)^t
~~~
Where:

P = Principal (current balance)

r = Annual interest rate

t = Time in years

4️⃣ Display Balance

Displays the current available balance.

5️⃣ Exit System

Gracefully terminates the application.

 -----------------------------------------------------------
 ▶️ How to Compile and Run
 -----------------------------------------------------------
🔹 Step 1: Compile
~~~
gcc banking_system.c -o banking_system -lm
~~~
Note: -lm is required to link the math library for the pow() function.

🔹 Step 2: Run
Linux / macOS:
~~~
./banking_system
~~~
Windows:
~~~
banking_system.exe
~~~
 -----------------------------------------------------------
 🖥️ Sample Output
 -----------------------------------------------------------
~~~
~~WELCOME TO BANKING SYSTEM~~
1. DEPOSIT
2. WITHDRAW
3. COMPOUND INTEREST
4. DISPLAY BALANCE
5. EXIT
 ~~~
 -----------------------------------------------------------
 🧠 Core Concepts Practiced
 -----------------------------------------------------------

Functions and modular programming

Pointers for dynamic value updates

Switch-case control structures

Input validation

Loop-based menu systems

Mathematical computations using pow()

--------------------------------------------------------
🎯 Learning Outcome
------------------------------------------------------

This project strengthens understanding of:

Structured programming in C

Financial logic implementation

Real-world system simulation

Memory handling using pointers


-------------------------------

🌍 Real-World Impact
----------------------------------------------
This Banking Management System simulates core operations used in real banking software, including deposits, withdrawals, balance validation, and compound interest calculation. It demonstrates fundamental financial logic and transaction handling similar to ATM and digital banking systems, building a strong foundation for developing scalable fintech and backend financial applications.

--------------------------------
⭐ If you found this project useful
-----------------------
Give this repository a ⭐ and support the project!
