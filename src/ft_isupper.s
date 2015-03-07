section .text
	global _ft_isupper

_ft_isupper:

	push		rbp
	mov			rbp,rsp

	cmp			edi,'A'
	jl			nope
	cmp			edi,'Z'
	jle			good

nope:
	xor			rax,rax
	leave
	ret

good:
	mov			rax,1
	leave
	ret
