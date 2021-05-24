section .text
	global _ft_strcpy

; ft_strcpy(rdi = *dest, rsi = *src)
_ft_strcpy:
	cmp rdi, 0						; if (dest == NULL)
	je null_exit
	cmp rsi, 0						; if (src == NULL)
	je null_exit
	mov		rax, 0				; i = 0
loop:	
	mov		cl, byte [rsi+rax]	; cl = src[i]
	mov		byte [rdi+rax], cl	; dst[i] = cl
	cmp		cl, 0				; if (cl == '\0')
	je		_exit
	inc		rax					; i++	
	jmp		loop

_exit:
	mov		rax, rdi
	ret

null_exit :
	xor rax, rax					;return (NULL)
	ret