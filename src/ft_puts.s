%define SYSCALL(n) 0x2000000 | n

section			.data
	break		db 		10
	null		db		"(null)", 0

section 		.text
	global _ft_puts

_ft_puts:
	push	rbp
	mov		rbp, rsp
	cmp		rdi, 0
	jle		exit
	cmp		rdi, 0
	jne		suite
	mov		rdi, null

suite:
	push	rdx
	push	rbx
	push	rsi
	mov		rbx, rdi

loop:
	cmp		byte [rbx], 0
	je		end
	mov		rdi, 1
	mov		rsi, rbx
	mov		rdx, 1
	mov		rax, SYSCALL(4)
	syscall
	inc		rbx
	jmp		loop

end:
	pop		rsi
	pop		rbx
	pop		rdx
	mov		rax, 1
	mov		rax, SYSCALL(4)
	mov		rdi, 1
	mov		rsi, break
	mov		rdx, 1
	syscall
	leave
	ret

exit:
	mov		rax, 0
	mov		rsp, rbp
	pop		rbp
	ret

