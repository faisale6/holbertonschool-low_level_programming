Simple Calculator README.md
Description:
A working calculator built in C programming as part of the Holbertoon school projects

The project uses a menu-driven interface to perform basic arithmetic operations.

Features:
- Additon
- Subraction
- Multiplication
- Division
- Menu driven interactions from 0 - 4 choices
- Exit option
- Basic input validation

Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

-Wall - Enables common compiler warnings
-Wextra - Enables additional warnings
-Werror - Treats warnings as errors
-pedantic - Checks compilance with selected C standard
-std=gnu89 - Uses the GNU C89 language selected
-o - Specifies the executable's file


Run the program after execution
./calculator

Menu:
Simple calculator
1) Add
2) Subtract
3) Multiply
4) Divide
0) Quit
Choice:

Numeric Behaviour
- Menu options are integers
- Arithmetic operations use float variables
- Calculations support decimals
- Results displayed using the %g format specifier, to remove unnecessary trailing 0s.

The menu of the calculator checks whether the menu selection is a valid integer and whether it falls within the supported range.

Limitations
- Calculator only support basic equations
- Does not support advanced complex math functions.
- Decimals calculations use float point which may have rounding errors