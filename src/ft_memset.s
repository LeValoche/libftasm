section		.text
	global	_ft_memset

_ft_memset:
	push		rbp				; push base pointer au dessus de la stack
	mov			rbp, rsp		; tu met laddresse de rsp dans rbp

	mov			rbx, rdi
	mov			rax, rsi
	mov			rcx, rdx
	rep	stosb

	mov			rax, rbx
	mov			rsp, rbp
	pop			rbp
	ret
	;rep stosb
