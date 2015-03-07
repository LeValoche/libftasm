section .text
	global _ft_isalpha

_ft_isalpha:

	push		rbp
	mov			rbp,rsp

	cmp			edi,'A'
	jl			nope
	cmp			edi,'Z'
	jle			good
	cmp			edi,'a'
	jl			nope
	cmp			edi,'z'
	jle			good

nope:

	xor			rax,rax
	leave
	ret

good:

	mov			rax,1
	leave
	ret
