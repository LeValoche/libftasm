section			.text
	global	_ft_strdup
	extern	_malloc
	extern	_ft_memcpy
	extern	_ft_strlen

_ft_strdup:
	push 	rbp
	mov 	rbp, rsp

	mov 	rbx, rdi
	call 	_ft_strlen
	mov 	rdi, rax
	add 	rdi, 1
	push	rdi
	call 	_malloc
	test	rax, rax
	jz 		end
	mov 	rdi, rax
	mov 	rsi, rbx
	pop 	rdx
	call 	_ft_memcpy

end:
	leave
	ret
