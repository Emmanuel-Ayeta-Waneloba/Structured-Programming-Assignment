## 01_Basic Output

**Source:**   Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.3(e)

**What the program does:** The program prints "This is a C program."

**Concepts Used:** printf

**How it works:** The programmer types what ever they want in the printf(""); and once they run, the statement is displayed in command prompt.


## 02_Input-Process-Output

**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.16, page 134.

**What the Program does:** reads two integers from the user then dis
plays their sum, product, difference, quotient and remainder. 

**Concepts Used:** printf,scanf, arithmetic(sum,product,diff,quotient,remainder)

**How it Works:**  The program prompts the user to enter 2 integers and then it performs calculations and displays the values for sum,product,diff,quotient and remainder.

## 03_Decision

**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.18, page 134

**What the Program Does:** The program compares a country's current seasonal rainfall against its recorded history, updates the all-time record if the current rainfall is higher, and displays the result to the user.


**Concepts Used:** printf,scanf,if,else

**How it works:** The program prompts the user for both the record-highest seasonal rainfall and the current year's rainfall for a country. It compares the two values, prints an appropriate status message, and updates the record rainfall variable with the new, higher value if the current year exceeds it.

## 04_BASIC LOOP

**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.12, page 225

**What the Program Does:** This program iterates through every integer from 1 to 100, tests each number to see if it is prime, and prints all identified prime numbers to the screen.

**Concepts Used:** for loops and if,printf

**How it works:** The C program loops through integers from 2 to 100, tests if each is prime by checking for divisors up to its square root, and prints each prime number on a new line.

## 05_LOOP WITH CALCULATION

**source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.11, page 225

**What does the Program do:**calculates and prints the
sum of all multiples of 7 from 1 to 100.

**Concepts Used:** while loop, if, printf

**How it Works:** The C program loops from 1 to 100, checks if each integer is divisible by 7 to print it and add it to a running total, and then displays the sum of all multiples of 7.

## 06_LOOP WITH USER INPUT

**source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.13, page 225

**What does the program do:** The C program takes an integer input from the user, loops from 1 up to that number, and calculates and prints the running sums of the numbers, their squares, and their cubes at each step.

**Concepts Used:** printf,scanf,while loop

**How it works:**The C program reads a user-entered integer, uses a while loop to count from 1 to that number, and sequentially accumulates and prints the running totals of $n$, $n^2$, and $n^3$ during each iteration.

## 07_LOOP WITH DECISION

**source**Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 3.22, page 178

**What does the program do:** Checks if a number is Prime

**Concepts Used:** if,else,loop,printf,scanf

**How it works:** The C program reads a user-entered integer, validates it, marks numbers less than or equal to 1 as non-prime, and uses a for loop to check for potential divisors up to num / 2 to determine and print whether the number is prime.

## 08_INTERACTIVE CONSOLE PROGRAM

**source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 3.22, page 178

**What does the program do:** The C program calculates and displays a salesperson's total weekly earnings based on their gross sales figures until the user enters -1 to terminate the program.

**Concepts Used:** printf,scanf, if, while, menu

**How it Works:** The C program uses a while loop to repeatedly prompt for and read a salesperson's sales figure, computes their salary using the formula `$200 + (0.09 \times \text{sales})$, displays the formatted total, and terminates when -1 is entered.
