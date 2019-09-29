#### 2.1 Fill in the blanks in each of the following.

:::info
a) Every C++ program begins execution at the function _______.
b) A _______ begins the body of every function and a _______ ends the body.
c) Every C++ statement ends with a(n) _______ .
d) The escape sequence \n represents the _______ character, which causes the cursor to
position to the beginning of the next line on the screen.
e) The _______ statement is used to make decisions.


**Ans: 
a)main b)left brace, "{" right brace "}" c)semicolon ; d)newline e**)if

:::

:::info
#### 2.2 State whether each of the following is true or false. If false, explain why. Assume the statement

using std::cout; is used.
a) Comments cause the computer to print the text after the // on the screen when the program
is executed.
b) The escape sequence \n, when output with cout and the stream insertion operator,
causes the cursor to position to the beginning of the next line on the screen.
c) All variables must be declared before they’re used.
d) All variables must be given a type when they’re declared.
e) C++ considers the variables number and NuMbEr to be identical.
f) Declarations can appear almost anywhere in the body of a C++ function.
g) The modulus operator (%) can be used only with integer operands.
h) The arithmetic operators *, /, %, + and – all have the same level of precedence.
i) A C++ program that prints three lines of output must contain three statements using
cout and the stream insertion operator.

**Ans: 
a)False  b)True c)True d)True e)False f)True g)False h)False i)False  i) => One statement with cout and multiple \n escape sequences can print several lines.**
:::

#### 2.3 Write a single C++ statement to accomplish each of the following (assume that using declarations have not been used):
:::info
a) Declare the variables c, thisIsAVariable, q76354 and number to be of type int.
b) Prompt the user to enter an integer. End your prompting message with a colon (:) followed
by a space and leave the cursor positioned after the space.
c) Read an integer from the user at the keyboard and store it in integer variable age.
d) If the variable number is not equal to 7, print "The variable number is not equal to 7".
e) Print the message "This is a C++ program" on one line.
f) Print the message "This is a C++ program" on two lines. End the first line with C++.
g) Print the message "This is a C++ program" with each word on a separate line.
h) Print the message "This is a C++ program". Separate each word from the next by a tab.
:::

### 2.4 Write a statement (or comment) to accomplish each of the following (assume that using declarations have been used for cin, cout and endl):
:::info
a) State that a program calculates the product of three integers.
b) Declare the variables x, y, z and result to be of type int (in separate statements).
c) Prompt the user to enter three integers.
d) Read three integers from the keyboard and store them in the variables x, y and z.
e) Compute the product of the three integers contained in variables x, y and z, and assign
the result to the variable result.
f) Print "The product is " followed by the value of the variable result.
g) Return a value from main indicating that the program terminated successfully.
:::

### 2.5 Using the statements you wrote in Exercise 2.4, write a complete program that calculates and displays the product of three integers. Add comments to the code where appropriate. [Note:
You’ll need to write the necessary using declarations.]

### 2.6 Identify and correct the errors in each of the following statements (assume that the statementusing std::cout; is used):
:::info
a) if ( c < 7 );
cout << "c is less than 7\n";
b) if ( c => 7 )
cout << "c is equal to or greater than 7\n";

Ans:
a) if statement 右邊有一個分號, 這樣一來下面那一行都會執行
b) => 應該改成 >=

:::