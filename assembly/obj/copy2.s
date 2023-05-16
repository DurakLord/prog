
a.out:     file format elf64-x86-64


Disassembly of section .text:

0000000000401000 <_start>:
  401000:	48 c7 c0 01 00 00 00 	mov    $0x1,%rax
  401007:	48 c7 c7 01 00 00 00 	mov    $0x1,%rdi
  40100e:	48 c7 c6 00 20 40 00 	mov    $0x402000,%rsi
  401015:	48 c7 c2 06 00 00 00 	mov    $0x6,%rdx
  40101c:	0f 05                	syscall
  40101e:	48 c7 c0 3c 00 00 00 	mov    $0x3c,%rax
  401025:	48 c7 c7 00 00 00 00 	mov    $0x0,%rdi
  40102c:	0f 05                	syscall
