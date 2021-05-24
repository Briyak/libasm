# libasm
contrairement a libc, les fonctions {ft_strlen, ft_strcpy, ft_strcmp et ft_strdup} de libasm sont proteges contre segfault si on passe un NULL en argument.


**** Comment utiliser ? ****
--------
1. Make
2. gcc -Wall -Wextra -Werror main.c libasm.a

**** liens utils ****
--------

https://www.unilim.fr/pages_perso/tristan.vaccon/cours_nasm.pdf
https://www.tutorialspoint.com/assembly_programming/assembly_memory_segments.htm
https://cs.lmu.edu/~ray/notes/nasmtutorial/
