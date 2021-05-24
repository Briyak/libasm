segment .text
	global _ft_strcmp

; ft_strcmp(rdi = *s1, rsi = *s2)
_ft_strcmp:
	mov 	rax, 0
	mov		rbx, 0
	jmp		_comparaison

_comparaison:
	mov		al, BYTE [rdi]	; al = *s1[0]
	mov		bl, BYTE [rsi]	; bl = *s2[0]
	cmp		al, 0			; if (al == '\0')
	je		_exit
	cmp		bl, 0			; if (bl == '\0')
	je		_exit
	cmp 	al, bl			; if (al != bl)
	jne 	_exit
	inc 	rdi				; *s1++
	inc 	rsi				; *s2++
	jmp 	_comparaison

_exit:
    sub		rax, rbx		; rax = rax - rbx
	ret						; return (rax)