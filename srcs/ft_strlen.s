
segment .text
	global _ft_strlen

; ft_strlen(rdi = char *s)
_ft_strlen:
	cmp rdi, 0						; if (s == NULL)
	je null_exit
	mov 	rax, 0 					; i = 0
	jmp 	_loop

_loop:
	cmp 	BYTE [rdi + rax], 0 	; if (rdi[0 + rax] == '\0')
	je 		_exit					
	inc	 	rax						; i++
	jmp 	_loop					

_exit:
	ret								; return (i)

null_exit :
	xor rax, rax					;return (NULL)
	ret