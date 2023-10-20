section .data
    hello db 'Hello, Holberton', 0Ah

section .text
    global _start

_start:
    push rbp
    mov rbp, rsp

    lea rdi, [hello]
    xor eax, eax
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret

