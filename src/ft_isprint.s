section .text
	global _ft_isprint

_ft_isprint:

	push		rbp
	mov			rbp,rsp

	cmp			edi,32
	jl			nope
	cmp			edi,126
	jle			good

nope:

	xor			rax,rax
	leave
	ret

good:

	mov			rax,1
	leave
	ret
