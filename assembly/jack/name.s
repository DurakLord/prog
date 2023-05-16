_write:

	mov $1, %rax
	mov $1, %rdi
	mov $name, %rsi
	mov $6, %rdx
	syscall
_exit:

	mov $60, %rax
	mov $0, %rdi
	syscall
name:
	.ascii "Hello\n"
