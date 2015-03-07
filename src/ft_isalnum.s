section .text
	global _ft_isalnum

_ft_isalnum:

	push		rbp
	mov			rbp,rsp
	cmp			edi,'0'
	jl			nope
	cmp			edi,'9'
	jle			good
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
