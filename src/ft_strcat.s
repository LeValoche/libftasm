section .text
	global	_ft_strcat

_ft_strcat:
	push	rbp
	mov		rbp, rsp
	mov		rbx, rdi
	mov		rcx, rsi

loop1:
	cmp		byte [rbx], 0
	je		loop2 			; jump if equal
	inc		rbx
	jmp		loop1			; jump

loop2:
	cmp		byte [rcx], 0
	je		end2
	mov		al, byte [rcx]
	mov		byte [rbx], al
	inc		rcx
	inc		rbx
	jmp		loop2

end2:
	mov		byte [rbx],0

end:
	mov		rax, rdi

	leave
	ret
