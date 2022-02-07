# 42: [WIP] ft_printf, a recreation off printf() in C.

[![Project Status: WIP – Initial development is in progress, but there has not yet been a stable, usable release suitable for the public.](https://www.repostatus.org/badges/latest/wip.svg)](https://www.repostatus.org/#wip)

## Intro:
This project is part off [19school42's](https://www.facebook.com/19network42/) curriculum. It's my first encounter with writing variadic functions. The idea is to write a library in C, that mimics the built-in function, printf(). 

## Project description: 
* Follow the school's [norm](https://github.com/42School/norminette). E.g. I can only use while loops. 
* Only use these external functions: `malloc()`, `free()`,  `write()`, `va_start()`, `va_arg()`, `va_copy`, `va_end()`
* I'm allowed to use [Libft](https://github.com/FionaSelanno/libft42) (a library I made for my first project). 
* Compile the program with a Makefile
* Don't implemement the buffer management of the original printf().
* Implement the following conversions: `cspdiuxX%`.
* prototype off my funcfion: `int ft_printf(const char *format, ...)`

## My current[^1] approach:
- [ ] Print every char off `format` untill it encounters '%'
- [ ] When it encounters a '%' check for possible conversions: `cspdiuxX%`. 
- [ ] Retreive the right argument to be able to do the conversion.
- [ ] Create methods to do the parsing of each conversion.
- [ ] Handle other conversion specifications[^2] (flags, width, precision, lenght modifier);
- [ ] Write the result on the stdout
- [ ] Keep looping over `format` to print remaining chars or do further parsings untill reaching `'\0'`.
- [ ] Put everything in my `libftprintf` library.
- [ ] Test code with online unit tests.

[^1]: Before I start every project, I break down the project into substeps. It's my first thought on how to approach this. Off course my approach can change during the making off. Whenever I add / edit a step I' ll make a footnote on why I did it, so that you can keep up with my way of thinking.
[^2]: After reading `man 3 printf` it became clear that the conversion specification can have more elements. Syntax conversion specification: `%[$][flags][width][.precision][length modifier]conversion`, see manual.
