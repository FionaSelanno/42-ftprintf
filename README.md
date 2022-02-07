# ft_printf


This project is part off [19school42's](https://www.facebook.com/19network42/)curriculum. It's my first encounter with writing variadic functions. The idea is to write a library that mimics the built-in function, printf(), in C language. Project description: 
. Follow the school's [norm]{https://github.com/42School/norminette). E.g. I can only use while loops. 
. Only use these external functions: malloc(), free(),  write(), va_start(), va_arg(), va_copy, va_end()
. I'm allowed to use [Libft](https://github.com/FionaSelanno/libft42) (a library I made for my first project). 
. Compile the program with a Makefile
. Don't implemement the buffer management of the original printf().
. Implement the following conversions: cspdiuxX%.
. prototype off my funcfion: `int ft_printf(const char *format, ...)`

My current[^1] approach:
[ ] print every char off format untill it encounters '%'
[ ] When it encounters a '%' check for possible conversions. 
[ ] Retreive the right argument to be able to do the conversion.
[ ] Create methods to do the parsing of each conversion.
[ ] Write the result on the stdout
[ ] Put everything in my `libftprintf` library.
[ ] test my code with online unit tests.

[^1] Before I start every project, I break down the project into substeps. It's my first thought on how to approach this. Off course my approach can change during the the making off. Whenever I add / edit a step I' ll make a footnote on why I did it, so that you can keep up with my way of thinking.
