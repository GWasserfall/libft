## 1 Naming conventions
**Mandatory part**
* A structure name must begin with s_.
* A typedef name must begin with t_.
* A union name must begin with u_.
* An enum name must begin with e_.
* A global name must begin with g_.
* The names of variables and functions must be composed exclusively of lowercase letters, numbers and '_' (Unix Case).
* The names of files and directories must be composed exclusively of lowercase, numbers and '_' (Unix Case).
* The file must be compilable.
* Characters that are not part of the standard ASCII table are not allowed.

**Suggested part**
* Objects (variables, functions, macros, types, files or directories) must have the most explicit or mnemonic names. Only 'counters' can be named as you wish.
* Abbreviations are tolerated to the extent that they significantly reduce the size of the name without losing meaning. Parts of composite names will be separated by '_'.
* All identifiers (functions, macros, types, variables, etc.) must be in English.
* Any use of global variable must be justified.

## 2 Formatting
**Mandatory part**
* All your files will have to start with the standard header of 42 from the first line. This header is available by default in emacs and vim editors on dumps.
* You must indent your code with tabs the size of 4 spaces. This is not equivalent to 4 space, they are tabs.
* Each function must make a maximum of 25 lines without counting the braces of the block of the function.
* Each line can not be more than 80 columns, including comments. Warning : a tabulation does not count for a column but for the n spaces it represent.
* One instruction per line.
* A blank line must not contain spaces or tabs.
* A line should never end in spaces or tabs.
* When you encounter an opening or closing brace or an end of structure of control, you have to go back to the line.
* Each comma or semi-colon must be followed by a space if we are not at the end of the line.
* Each operator (binary or ternary) and operands must be separated by a space and only one.
* Each keyword of C must be followed by a space, except for the keywords of type (like int, char, float, etc.) as well as sizeof.
* Each variable declaration must be indented on the same column.
* Pointer stars must be pasted to the name of the variable.
* One variable declaration per line.
* You can not declare and initialize on the same line, except for global variables and static variables.
* The declarations must be at the beginning of the function and must be separated from the implementation by an empty line.
* No empty lines should be present in the middle of the declarations or the implementation.
* Multiple assignment is prohibited.
* You can return to the line during the same instruction or structure of control, but you must add an indentation by parenthesis or operator stations. Operators must be at the beginning of the line.

## 3 Function parameters
**Mandatory part**
* A function takes up to 4 named parameters.
* A function that does not take argument must explicitly be prototyped with the word void as argument.

## 4 Functions
**Mandatory part**
* Prototype function parameters must be named.
* Each function definition must be separated by a blank line from the next.
* You can only declare up to 5 variables per block.
* The return of a function must be in parentheses.

**Suggested part**
* Your function identifiers must be aligned in one file. This applies to C headers.

## 5 Typedef, struct, enum and union
**Mandatory part**
* You must put a tab when you declare a struct, enum, or union.
* When declaring a variable of type struct, enum or union, you do not put a space in the type.
* You must use a tab between the two parameters of a typedef.
* When you declare a struct, union or enum with a typedef, all the rules apply and you must align the name of the typedef with the name of the struct, union or enum.
* You can not declare a structure in a .c file.

## 6 Headers
**Mandatory part**
* Only inclusions of headers (system or not), declarations, defines, prototypes and macros are allowed in the headers files.
* All includes of .h must be at the beginning of the file (.c or .h).
* Headers will be protected against double inclusion. If the file is ft_foo.h, the sample macro is FT_FOO_H.
* Prototypes of functions must be exclusively in .h files.
* An inclusion of header (.h) that is not used is prohibited.

**Suggested part**
* Any inclusion of header must be justified in both .c and .h.

## 7 Macros and Preprocessor
**Mandatory part**
* The preprocessor constants (#define) that you create should not be used only to associate literal and constant values, and nothing else.
* The #define written in order to circumvent the norm and / or obfuscate code prohibited by the standard are prohibited. This point must be verifiable by humans.
* You can use the macros in the standard libraries, if this last is allowed in the targeted project.
* Multiline #define is prohibited.
* Only macro names are in uppercase
* You must indent the characters that follow a #if, #ifdef or #ifndef

## 8 Prohibited things!
**Mandatory part**
* You are not allowed to use:
  - for
  - do ... while
  - switch
  - box
  - goto
  - Ternary operators '?' Nested
  - Variable Length Arrays (VLAs)

## 9 Comments
**Mandatory part**
* Comments can be found in all source files.
* There should be no comments in the function body.
* Comments are started and ended with a single line. All lines intermediaries line up on them, and start with '**'.
* Comment fields starting with // are forbidden.

**Suggested part**
* Your comments must be in English and useful.
* Comments can not justify a bastard function.

## 10 The files
**Mandatory part**
* You can not #include a .c file.
* You can not have more than 5 function definitions in a .c file.

## 11 Makefile
**Mandatory part**
* The **$(NAME)**, **clean**, **fclean**, **re** and **all** rules are required.
* The project is considered non-functional if the Makefile relinks.
* In the case of a multibinary project, in addition to the previous rules, you must have a rule **all** compiling the two binaries as well as a rule specific to each binary compiled.
* In the case of a project using a function library (for example a libft), your makefile must automatically compile this library.
* The sources needed to compile your program must be explicitly mentioned in your Makefile.