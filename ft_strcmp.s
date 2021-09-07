section .text
	global _ft_strcmp

_ft_strcmp:
	mov		r14, 0
	mov		r15, 0
	jmp		.while
	
.while:
	cmp		byte [rsi], 0
	je		.match
	cmp		byte [rdi], 0
	je		.match
	movzx	r15, byte [rsi]
	movzx	r14, byte [rdi]
	cmp		r14, r15
	jne		.match
	inc		rdi;
	inc		rsi;
	jmp		.while

.match:
	movzx	r15, byte [rsi]
    movzx	r14, byte [rdi]
    cmp		r14, r15
    je		.exit_equal
    jl		.exit_less
    jg		.exit_more

.exit_equal:
	mov		rax, 0
	ret

.exit_less:
	mov		rax, -1
	ret

.exit_more:
	mov		rax, 1
	ret
