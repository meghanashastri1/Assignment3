# Assignment3

1. IDENTIFYING INFORMATION
a. Full Name: Meghana Shastri
b. Student ID: 2317343
c. Chapman Email: shastri@chapman.edu
d. Course Number and Section: CPSC 350 section 2
e. Assignment or Excercise Number: Assignment 3

2. A LIST OF ALL SOURCE FILED SUBMITTED FOR THIS ASSIGNMENT
a. a.out
b. GenStack.h
c. main.cpp
d. correct.txt
e. incorrect.txt
f. README.txt

3. A DESCRIPTION OF ANY KNOWN COMPILE OR RUNTIME ERRORS, CODE LIMITATIONS, OR DEVATIONS FROM ASSIGNMENT SPECIFICATIONS (IF APPLICABLE)
a. there was always an error whenever I used StackFull/StackEmpty exception, even when I made my own exception class, so I decided to use cout instead
b. Error shows up for isEmpty(): there are no arguments to ‘isEmpty’ that depend on a template parameter, so a declaration of ‘isEmpty’ must be available
c. error: no ‘bool GenStack<E>::isEmpty()’ member function declared in class ‘GenStack<E>’
 bool GenStack<E>::isEmpty()
d. In conclusion: I thought the stack was working but I didn't test it consistently while adding code to main.cpp, and was not able to fix errors in time

4. A LIST OF ALL REFERENCES USED TO COMPLETE THE ASSIGNMENT, INCLUDING PEERS (IF APPLICABLE)
a. https://www.techiedelight.com/stack-implementation-using-templates/ (referenced how to do a c++ implementation of a generic stack class)
b. https://www.geeksforgeeks.org/cpp-program-read-file-word-word/   (referenced for how to iterate over a line in a file)
c. Data Structures and Algorithms in C++ Second edition (referenced for how to define a GenStack class that supports a generic type)
g. SI Matthew Raymond - helped with calculating a nucleotide and bigram in the input file
i. Lisa Pham - helped with delimMatch method for checking delimiter pairs and whether the top of the stack is the closing symbol that corresponds with the opening symbol that was pushed into the stack.
k. Peter Chen - helped with how to count delimiters in a line in a file (for loop to get char c)


5. INSTRUCTIONS FOR RUNNING THE ASSIGNMENT
a. g++ Assignment3.cpp
b. ./a.out Assignment3.cpp
