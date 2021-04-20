section.text
   global _ft_strcmp

_ft_strcmp:
	mov		rax, rdi

.loop:
	cmp		byte [rsi], 0
	jz		.exit_loop
	movsb
	jmp		.loop
			
.exit_loop:		
	mov		byte [rdi], 0
	ret