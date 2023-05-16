

                                    .global _start
                                    .extern _function
                                    .extern _jack
                                    .text

    _start:
    call _function
    call _jack
    mov $60, %rax
    mov $0, %rdi
    syscall




