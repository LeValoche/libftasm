section .text
	global _ft_islower

_ft_islower:

	push		rbp
	mov			rbp,rsp

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
