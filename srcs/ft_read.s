section.text:
	global _ft_read
	extern ___error	

_ft_read:
	mov rax, 0x2000003	; read syscall code
	syscall
	jc error			; if carry jump error
	ret

error:
	push rax
	call ___error
	mov	rdi, rax
	pop	rax
	mov	[rdi], rax
	mov rax, -1
	ret