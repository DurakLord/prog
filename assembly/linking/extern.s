

                            .global _function
                            .global _jack
                            .text

                            _function:
                            mov $1, %rax
                            mov $name, %rsi
                            mov $1, %rdi
                            mov $6, %rdx
                            syscall
                            ret
                            _jack:
                            mov $1, %rax
                            mov $luck, %rsi
                            mov $1, %rdi
                            mov $5, %rdx
                            syscall
                            ret


                            .data
                            name: .ascii "Hello\n" 
                            luck: .ascii "Cock\n"


