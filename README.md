# GET-NEXT-LINE, an École42 project
In this project, the aim was to write a function called `get_next_line()` that returns a line read from a file descriptor. One of the new concepts to learn was static variables and how to use them. As a bonus, I made my function handle reading from multiple file descriptors at once. get_next_line() uses the functions in my library `libft`, which I coded as part of another school project, [libft](https://github.com/krsalmi/libft).  
I wrote the Makefile and main.c for my own testing purposes. To try out my get_next_line() with the main included here, run `make all` to compile the program called `test_gnl`. This program takes as arguments text files, for example those found in test_text_files. The program can be executed with multiple arguments.