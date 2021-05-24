segment .text
	global _ft_strdup
	extern _ft_strlen
	extern _ft_strcpy
	extern _malloc

; ft_strdup(rdi= *s)
_ft_strdup:
	cmp rdi, 0
	je exit
	call	_ft_strlen
	add		rax, 1			; rax = ft_strlen(s) + 1
	push	rdi
	mov		rdi, rax
	call	_malloc
	pop		rbx				; rbx = *s
	mov		rdi, rax		; (ft_strcpy)dest = rax
	mov		rsi, rbx		; (ft_strcpy)src = rbx
	call	_ft_strcpy		; rax = *s
	ret
exit:
	xor rax, rax
	ret