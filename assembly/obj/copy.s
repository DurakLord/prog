
main.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <_start>:
   0:	48 c7 c0 01 00 00 00 	mov    $0x1,%rax
   7:	48 c7 c7 01 00 00 00 	mov    $0x1,%rdi
   e:	48 c7 c6 00 00 00 00 	mov    $0x0,%rsi
  15:	48 c7 c2 06 00 00 00 	mov    $0x6,%rdx
  1c:	0f 05                	syscall
  1e:	48 c7 c0 3c 00 00 00 	mov    $0x3c,%rax
  25:	48 c7 c7 00 00 00 00 	mov    $0x0,%rdi
  2c:	0f 05                	syscall
