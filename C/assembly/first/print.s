                .global print
	.text
        print:
        mov $1, %rax
        mov $1, %rdi
        mov $line, %rsi
        mov $6, %rdx
        syscall
        ret
	.data
        line:   .ascii "Hello\n"
    
