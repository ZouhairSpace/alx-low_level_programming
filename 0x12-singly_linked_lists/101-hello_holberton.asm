section .data
    msg db "Hello, Holberton", 10, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, msg
    xor eax, eax
    call printf
    pop rbp
    xor eax, eax
    ret
