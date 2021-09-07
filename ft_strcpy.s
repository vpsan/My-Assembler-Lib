section .text
   global _ft_strcpy

_ft_strcpy:
	mov		rax, rdi
	jmp		.while

.while:
	cmp		byte [rsi], 0
	jz		.exit_loop
	movsb
	jmp		.while
			
.exit_loop:		
	mov		byte [rdi], 0
	ret
