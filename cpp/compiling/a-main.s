	.file	"main.cpp"
	.text
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.globl	_ZN4jack1aE
	.bss
	.align 4
	.type	_ZN4jack1aE, @object
	.size	_ZN4jack1aE, 4
_ZN4jack1aE:
	.zero	4
	.globl	_ZN4jack1bE
	.align 4
	.type	_ZN4jack1bE, @object
	.size	_ZN4jack1bE, 4
_ZN4jack1bE:
	.zero	4
	.globl	_ZN4jack1cE
	.align 4
	.type	_ZN4jack1cE, @object
	.size	_ZN4jack1cE, 4
_ZN4jack1cE:
	.zero	4
	.text
	.globl	main
	.type	main, @function
main:
.LFB1761:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-20(%rbp), %rax
	movl	$4, %ecx
	movl	$3, %edx
	movl	$2, %esi
	movq	%rax, %rdi
	call	_ZN4jack5swordIiEC1Eiii
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1761:
	.size	main, .-main
	.section	.text._ZN4jack5swordIiEC2Eiii,"axG",@progbits,_ZN4jack5swordIiEC5Eiii,comdat
	.align 2
	.weak	_ZN4jack5swordIiEC2Eiii
	.type	_ZN4jack5swordIiEC2Eiii, @function
_ZN4jack5swordIiEC2Eiii:
.LFB2028:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movl	%ecx, -20(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	-16(%rbp), %edx
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movl	-20(%rbp), %edx
	movl	%edx, 8(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2028:
	.size	_ZN4jack5swordIiEC2Eiii, .-_ZN4jack5swordIiEC2Eiii
	.weak	_ZN4jack5swordIiEC1Eiii
	.set	_ZN4jack5swordIiEC1Eiii,_ZN4jack5swordIiEC2Eiii
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2290:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L7
	cmpl	$65535, -8(%rbp)
	jne	.L7
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rax
	movq	%rax, %rdx
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L7:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2290:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__ZN4jack1aE, @function
_GLOBAL__sub_I__ZN4jack1aE:
.LFB2291:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2291:
	.size	_GLOBAL__sub_I__ZN4jack1aE, .-_GLOBAL__sub_I__ZN4jack1aE
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__ZN4jack1aE
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 12.2.1 20230201"
	.section	.note.GNU-stack,"",@progbits
