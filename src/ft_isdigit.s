section .text
	global _ft_isdigit

_ft_isdigit:

	push		rbp
	mov			rbp,rsp

	cmp			edi,'0'
	jl			nope
	cmp			edi,'9'
	jle			good

nope:

	xor			rax,rax
	leave
	ret

good:

	mov			rax,1
	leave
	ret
