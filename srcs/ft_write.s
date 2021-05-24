section.text:
	global _ft_write
	extern ___error

_ft_write:
	mov rax, 0x2000004	; write syscall code
	syscall
	jc _exit_error		; if carry jump error
	ret

_exit_error:
	push rax
	call ___error
	mov	rdi, rax
	pop	rax
	mov	[rdi], rax
	mov rax, -1
	ret	