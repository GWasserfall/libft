#!/usr/bin/python

funcs3 = [{
"name" 			: "ft_memalloc",
"prototype"		: "void * ft_memalloc(size_t size);",
"description"	: 'Allocates (with malloc(3)) and returns a "fresh" memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.',
"params"		: ["The size of the memory that needs to be allocated."],
"return"		: "The allocated memory area.",
"allowed" 		: ["malloc(3)"]
},
{
"name" 			: "ft_memdel",
"prototype" 	: "void ft_memdel(void **ap);",
"description" 	: "Description Takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL.",
"params" 		: ["#1 A pointers address that needs its memory freed and set to NULL."],
"return" 		: "None.",
"allowed" 		: ["free(3)."]
},
{
"name" 			: "ft_strnew",
"prototype" 	: "char * ft_strnew(size_t size);",
"description" 	: "Allocates (with malloc(3)) and returns a fresh string ending with \0. Each character of the string is initialized at \0. If the allocation fails the function returns NULL.",
"params" 		: ["#1 The size of the string to be allocated."],
"return" 		: "The string allocated and initialized to 0.",
"allowed" 		: ["malloc(3)"]
},
{
"name" 			: "ft_strdel",
"prototype" 	: "void ft_strdel(char **as);",
"description" 	: "Takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL.",
"params" : ["#1 The strings address that needs to be freed and its pointer set to NULL."],
"return"		: None,
"allowed"		: ["free(3)."]
},
{
"name" 			: "ft_strclr",
"prototype" 	: "void ft_strclr(char *s);",
"description" 	: "Description Sets every character of the string to the value \0.",
"params"		: ["#1 The string that needs to be cleared."],
"return"		: None,
"allowed"		: None
},
{
"name" 			: "ft_striter",
"prototype" 	: "void ft_striter(char *s, void (*f)(char *));",
"description" 	: "Applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary.",
"params" 		: ["#1 The string to iterate.",
 				   "#2 The function to apply to each character of s."],
"return"		: None,
"allowed"		: None
},
{
"name" 			: "ft_striteri",
"prototype" 	: "void ft_striteri(char *s, void (*f)(unsigned int, char *));",
"description" 	: "Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary.",
"params" 		: ["#1 The string to iterate.",
				   "#2 The function to apply to each character of s and its index."],
"return"		: None,
"allowed"		: None
},
{

"name" 			: "ft_strmap",
"prototype" 	: "char * ft_strmap(char const *s, char (*f)(char));",
"description" 	: 'Applies the function f to each character of the string given as argument to create a fresh new string (with malloc(3)) resulting from the successive applications of f.',
"params" 		: [ "#1 The string to map.",
		    	    "#2 The function to apply to each character of s."],
"return"		: 'The fresh string created from the successive applications off.',
"allowed"		: ["malloc(3)"]
},
{
"name" 			: "ft_strmapi",
"prototype" 	: "char * ft_strmapi(char const *s, char (*f)(unsigned int, char));",
"description" 	: 'Applies the function f to each character of the string passed as argument by giving its index as first argument to create a fresh new string (with malloc(3)) resulting from the successive applications of f.',
"params" 		: ["#1 The string to map.",
		 		   "#2 The function to apply to each character of s and its index."],
"return"		: "The fresh string created from the successive applications off.",
"allowed"		: ["malloc(3)"]
},
{
"name" 			: "ft_strequ",
"prototype" 	: "int ft_strequ(char const *s1, char const *s2);",
"description" 	: "Lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.",
"params" 		: ["#1 The first string to be compared.",
				   "#2 The second string to be compared"],
"return"		: "1 or 0 according to if the 2 strings are identical or not.",
"allowed"		: None
},
{
"name" 			: "ft_strnequ",
"prototype" 	: "int ft_strnequ(char const *s1, char const *s2, size_t n);",
"description" 	: "Lexicographical comparison between s1 and s2 up to n characters or until a \0 is reached. If the 2 strings are identical, the function returns 1, or 0 otherwise.",
"params" 		: ["#1 The first string to be compared.",
				   "#2 The second string to be compared.",
				   "#3 The maximum number of characters to be compared."],
"return"		: "1 or 0 according to if the 2 strings are identical or not.",
"allowed"		: None
},
{
"name" 			: "ft_strsub",
"prototype" 	: "char * ft_strsub(char const *s, unsigned int start, size_t len);",
"description" 	: "Allocates (with malloc(3)) and returns a fresh substring from the string given as argument. The substring begins at indexstart and is of size len. If start and len arent refering to a valid substring, the behavior is undefined. If the allocation fails, the function returns NULL.",
"params" 		: ["#1 The string from which create the substring.",
				   "#2 The start index of the substring.",
				   "#3 The size of the substring."],
"return"		: "The substring.",
"allowed"		: ["malloc(3)"]
},
{

"name" 			: "ft_strjoin",
"prototype" 	: "char * ft_strjoin(char const *s1, char const *s2);",
"description" 	: "Allocates (with malloc(3)) and returns a fresh string ending with \0, result of the concatenation of s1 and s2. If the allocation fails the function returns NULL.",
"params" 		: ["#1 The prefix string.",
				   "#2 The suffix string."],
"return"		: "The fresh string result of the concatenation of the 2 strings.",
"allowed"		: ["malloc(3)"]
},
{

"name" 			: "ft_strtrim",
"prototype" 	: "char * ft_strtrim(char const *s);",
"description" 	: "Allocates (with malloc(3)) and returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string. Will be considered as whitespaces the following characters  , \n and \t. If s has no whitespaces at the beginning or at the end, the function returns a copy of s. If the allocation fails the function returns NULL.",
"params" 		: ["] #1 The string to be trimed."],
"return"		: "The fresh trimmed string or a copy of s.",
"allowed"		: ["malloc(3)"]
},
{

"name" 			: "ft_strsplit",
"prototype" 	: "char ** ft_strsplit(char const *s, char c);",
"description" 	: 'Allocates (with malloc(3)) and returns an array of fresh strings (all ending with \0, including the array itself) obtained by spliting s using the character c as a delimiter. If the allocation fails the function returns NULL. Example : ft_strsplit("*hello*fellow***students*", *) returns the array ["hello", "fellow", "students"].',
"params" 		: ["#1 The string to split.",
				  "#2 The delimiter character."],
"return"		: "The array of fresh strings result of the split.",
"allowed"		: ["malloc(3)", "free(3)"]
},
{

"name" 			: "ft_itoa",
"prototype" 	: "char * ft_itoa(int n);",
"description" 	: "Allocate (with malloc(3)) and returns a 'fresh' string ending with \0 representing the integer n given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL.",
"params"		: ["#1 The integer to be transformed into a string."],
"return"		: "The string representing the integer passed as argument.",
"allowed"		: ["malloc(3)"]
},
{

"name" 			: "ft_putchar",
"prototype" 	: "void ft_putchar(char c);",
"description" 	: "Outputs the character c to the standard output.",
"params" 		: ["#1 The character to output."],
"return"		: None,
"allowed"		: ["write(2)."]
},
{

"name" 			: "ft_putstr",
"prototype" 	: "void ft_putstr(char const *s);",
"description" 	: 'Outputs the string s to the standard output.',
"params" 		: ["#1 The string to output."],
"return" 		: None,
"allowed" 		: ["write(2)."]
},
{

"name" 			: "ft_putendl",
"prototype" 	: "void ft_putendl(char const *s);",
"description" 	: "Outputs the string s to the standard output followed by a \n.",
"params" 		: ["#1 The string to output."],
"return"		: None,
"allowed"		: ["write(2)."]
},
{

"name" 			: "ft_putnbr",
"prototype" 	: "void ft_putnbr(int n);",
"description" 	: "Outputs the integer n to the standard output.",
"params" 		: ["#1 The integer to output."],
"return"		: None,
"allowed"		: ["write(2)."]
},
{

"name" 			: "ft_putchar_fd",
"prototype" 	: "void ft_putchar_fd(char c, int fd);",
"description" 	: "Outputs the char c to the file descriptor fd.",
"params" 		: ["#1 The character to output.",
 				   "#2 The file descriptor."],
"return"		: None,
"allowed"		: ["write(2)."]
},
{
"name" 			: "ft_putstr_fd",
"prototype" 	: "void ft_putstr_fd(char const *s, int fd);",
"description" 	: "Outputs the string s to the file descriptor fd.",
"params" 		: ["#1 The string to output.",
				   "#2 The file descriptor."],
"return"	 	: None,
"allowed"		: ["write(2)."]
},
{
"name" 			: "ft_putendl_fd",
"prototype" 	: "void ft_putendl_fd(char const *s, int fd);",
"description" 	: "Outputs the string s to the file descriptor fd followed by a \n.",
"params"  		: ["#1 The string to output.",
	 			   "#2 The file descriptor."],
"return" 		: None,
"allowed"		: ["write(2)."]
},
{
"name" 			: "ft_putnbr_fd",
"prototype" 	: "void ft_putnbr_fd(int n, int fd);",
"description" 	: "Outputs the integer n to the file descriptor fd.",
"params" 		: ["#1 The integer to print.",
				   "#2 The file descriptor."],
"return"		: None,
"allowed"		: ["write(2)."]
}]

import os
import sys
from pprint import pprint

# for func_dict in funcs3:
# 	func = func_dict["name"] + ".c"
# 	if not os.path.isfile(func):
# 		with open(func, 'w') as f: pass
# 		print "Created file " + func 
		
func = sys.argv[1]

for f in funcs3:
	if func.lower() in f['name'].lower():
		print ''
		print "{0} {1} {2}".format("#" * 50,  f['name'], "#" * 50)
		
		print "Proto \t\t" + f['prototype'] + '\n'
		print "Description\t" + f['description'] + '\n'

