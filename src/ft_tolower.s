section .text
	global _ft_tolower
	extern _ft_isupper

_ft_tolower:

	push		rbp
	mov			rbp,rsp
	call		_ft_isupper
	cmp			eax,1
	je			good

nope:

	mov			eax,edi
	leave
	ret

good:

	add			edi,32
	mov			eax,edi
	leave
	ret
