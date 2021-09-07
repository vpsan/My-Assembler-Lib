section .text
   global _ft_strlen

_ft_strlen:
	mov		rax, 0
	jmp		.while

.while:
	cmp		byte[rdi + rax], 0
	je		.break_exit
	inc		rax
	jmp		.while

.break_exit:
	ret
