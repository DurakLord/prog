                                .global _start 

            .text



    _start:

        push $name
        call _write
        mov $60, %rax
        mov $0, %rdi
        syscall

    
    _write:
        mov $0, %rcx
        pop %rbx
        pop %rsi
        mov %rsi, %rax
        mov '\n', %rdx
    _writeLoop:
        inc %rax
        inc %rcx
        cmp %rdx, (%rax)
        jmp _writeLoop
        mov %rcx, %rdx
        mov $1, %rdi
        mov $1, %rax
        syscall
        push %rbx
        ret



    name:

    .ascii "Hello my friend\n"



