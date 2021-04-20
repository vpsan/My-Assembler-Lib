section.text
   global _ft_strlen

_ft_strlen:
    mov     rax, 0
    jmp     .loop

.loop:
    cmp     byte[rdi + rax], 0
    je      .exit_loop
    inc     rax
    jmp     .loop

.exit_loop:
    ret
