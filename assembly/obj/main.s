			.global _start
			.text
		_start:
			mov $1, %rax
			mov $1, %rdi
			mov $line, %rsi
			mov $6, %rdx
			syscall
			mov $60, %rax
			mov $0, %rdi
			syscall
			
			.data

		line:	.ascii "Hello\n"

