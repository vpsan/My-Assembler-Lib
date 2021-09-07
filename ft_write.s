section .text
   extern ___error
   global _ft_write

_ft_write:
	mov		rax, 0x2000004
	syscall
	jc		.exit_error
	ret

.exit_error:
	mov 	r15, rax 
	push 	-1 	
	call	___error	
	mov 	qword [rax], r15
	pop 	rax		
	ret
