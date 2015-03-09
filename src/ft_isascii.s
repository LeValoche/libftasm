section .text
	global _ft_isascii

_ft_isascii:

	push		rbp
	mov			rbp,rsp

	cmp			edi,0
	jle			nope
	cmp			edi,127
	jle			good

nope:

	xor			rax,rax
	leave
	ret

good:

	mov			rax,1
	leave
	ret
