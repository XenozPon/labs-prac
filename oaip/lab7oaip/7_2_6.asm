	.file	"7_2_6.c"
	.text
	.p2align 4
	.globl	CreateNewString
	.type	CreateNewString, @function
CreateNewString:
.LFB25:
	.cfi_startproc
	subq	$40, %rsp
	.cfi_def_cfa_offset 48
	movq	%rbx, 24(%rsp)
	.cfi_offset 3, -24
	movsbq	(%rdi), %rbx
	testb	%bl, %bl
	je	.L2
	movq	%rbp, 32(%rsp)
	.cfi_offset 6, -16
	movq	%rdi, %rbp
	call	__ctype_b_loc@PLT
	xorl	%ecx, %ecx
	movq	(%rax), %rsi
	leaq	1(%rbp), %rax
	jmp	.L3
	.p2align 5
	.p2align 4,,10
	.p2align 3
.L7:
	movsbq	(%rax), %rbx
	addq	$1, %rax
	leal	1(%rcx), %edx
	testb	%bl, %bl
	je	.L6
	movl	%edx, %ecx
.L3:
	testb	$8, 1(%rsi,%rbx,2)
	je	.L7
	leal	1(%rcx), %edi
	movl	%ecx, 12(%rsp)
	call	malloc@PLT
	movq	%rax, %rdi
	testq	%rax, %rax
	je	.L20
	movl	12(%rsp), %ecx
	testl	%ecx, %ecx
	je	.L9
	movl	%ecx, %edx
.L8:
	movl	%edx, %ebx
	movq	%rbp, %rsi
	movq	%rbx, %rdx
	call	memcpy@PLT
	movq	32(%rsp), %rbp
	.cfi_restore 6
	movq	%rax, %rdi
	leaq	(%rax,%rbx), %rdx
.L5:
	movb	$0, (%rdx)
.L1:
	movq	24(%rsp), %rbx
	movq	%rdi, %rax
	addq	$40, %rsp
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L6:
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -16
	leal	2(%rcx), %edi
	movl	%edx, 12(%rsp)
	call	malloc@PLT
	movl	12(%rsp), %edx
	testq	%rax, %rax
	movq	%rax, %rdi
	jne	.L8
.L20:
	movq	32(%rsp), %rbp
	.cfi_remember_state
	.cfi_restore 6
	jmp	.L1
	.p2align 4,,10
	.p2align 3
.L9:
	.cfi_restore_state
	movq	32(%rsp), %rbp
	.cfi_restore 6
	movq	%rax, %rdx
	jmp	.L5
.L2:
	movl	$1, %edi
	call	malloc@PLT
	movq	%rax, %rdi
	testq	%rax, %rax
	je	.L1
	movq	%rax, %rdx
	jmp	.L5
	.cfi_endproc
.LFE25:
	.size	CreateNewString, .-CreateNewString
	.p2align 4
	.globl	CreateNewStringP
	.type	CreateNewStringP, @function
CreateNewStringP:
.LFB26:
	.cfi_startproc
	subq	$24, %rsp
	.cfi_def_cfa_offset 32
	movq	%rbx, (%rsp)
	.cfi_offset 3, -32
	movzbl	(%rdi), %ebx
	testb	%bl, %bl
	je	.L23
	movq	%rbp, 8(%rsp)
	.cfi_offset 6, -24
	movq	%rdi, %rbp
	movq	%r12, 16(%rsp)
	.cfi_offset 12, -16
	call	__ctype_b_loc@PLT
	movq	%rbp, %rdx
	xorl	%ecx, %ecx
	movq	(%rax), %r12
	movsbq	%bl, %rax
	jmp	.L24
	.p2align 5
	.p2align 4,,10
	.p2align 3
.L26:
	movsbq	1(%rdx), %rax
	addq	$1, %rdx
	addl	$1, %ecx
	testb	%al, %al
	je	.L25
.L24:
	testb	$8, 1(%r12,%rax,2)
	je	.L26
.L25:
	leal	1(%rcx), %edi
	call	malloc@PLT
	testq	%rax, %rax
	je	.L42
	movq	%rax, %rdx
	jmp	.L28
	.p2align 5
	.p2align 4,,10
	.p2align 3
.L30:
	addq	$1, %rbp
	movb	%bl, (%rdx)
	addq	$1, %rdx
	movzbl	0(%rbp), %ebx
	testb	%bl, %bl
	je	.L43
.L28:
	movsbq	%bl, %rcx
	testb	$8, 1(%r12,%rcx,2)
	je	.L30
.L43:
	movq	8(%rsp), %rbp
	.cfi_restore 6
	movq	16(%rsp), %r12
	.cfi_restore 12
.L29:
	movb	$0, (%rdx)
.L22:
	movq	(%rsp), %rbx
	addq	$24, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret
.L23:
	.cfi_restore_state
	movl	$1, %edi
	call	malloc@PLT
	movq	%rax, %rdx
	testq	%rax, %rax
	jne	.L29
	xorl	%eax, %eax
	jmp	.L22
.L42:
	.cfi_offset 6, -24
	.cfi_offset 12, -16
	movq	8(%rsp), %rbp
	.cfi_restore 6
	movq	16(%rsp), %r12
	.cfi_restore 12
	jmp	.L22
	.cfi_endproc
.LFE26:
	.size	CreateNewStringP, .-CreateNewStringP
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"s1="
.LC1:
	.string	"\n"
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC2:
	.base64	"0JLRi9Cy0L7QtCDQv9C10YDQstGL0Lwg0YHQv9C+0YHQvtCx0L7QvDogJXMKAA=="
	.align 8
.LC3:
	.base64	"0JLRi9Cy0L7QtCDQstGC0L7RgNGL0Lwg0YHQv9C+0YHQvtCx0L7QvDogJXMKAA=="
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB24:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	leaq	.LC0(%rip), %rdi
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	subq	$120, %rsp
	.cfi_def_cfa_offset 144
	movq	%fs:40, %rax
	movq	%rax, 104(%rsp)
	xorl	%eax, %eax
	call	printf@PLT
	movq	stdin(%rip), %rdx
	movl	$100, %esi
	movq	%rsp, %rdi
	call	fgets@PLT
	leaq	.LC1(%rip), %rsi
	movq	%rsp, %rdi
	call	strcspn@PLT
	movq	%rsp, %rdi
	movb	$0, (%rsp,%rax)
	call	CreateNewString
	movq	%rsp, %rdi
	movq	%rax, %rbp
	call	CreateNewStringP
	movq	%rbp, %rsi
	leaq	.LC2(%rip), %rdi
	movq	%rax, %rbx
	xorl	%eax, %eax
	call	printf@PLT
	movq	%rbx, %rsi
	leaq	.LC3(%rip), %rdi
	xorl	%eax, %eax
	call	printf@PLT
	movq	%rbp, %rdi
	call	free@PLT
	movq	%rbx, %rdi
	call	free@PLT
	movq	104(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L47
	addq	$120, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	ret
.L47:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE24:
	.size	main, .-main
	.ident	"GCC: (GNU) 16.2.1 20260810"
	.section	.note.GNU-stack,"",@progbits
