section .text
	global _ft_toupper
	extern _ft_islower

_ft_toupper:

	push		rbp
	mov			rbp,rsp
	call		_ft_islower
	cmp			eax,1
	je			good

nope:

	mov			eax,edi
	leave
	ret

good:

	sub			edi,32
	mov			eax,edi
	leave
	ret
