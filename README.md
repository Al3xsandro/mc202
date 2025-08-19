# mc202

 - flags: gcc -std=c99 -Wall -Wvla -Werror -g -lm programa.c -o programa
    - std=c99: usa o padrão C99
    - Wall: dá mais warnings de compilação
    - Wvla: warnings para variable length arrays
    - Werror: warnings viram erros de compilação
    - g: permite usar gdb e valgrind
    - lm: permite usar funções matemáticas
