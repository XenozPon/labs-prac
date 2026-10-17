	.file	"lab6.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.base64	"0KHQvtC00LXRgNC20LjQvNC+0LUg0LzQsNGB0YHQuNCy0LA6IDwgAA=="
.LC1:
	.string	"%d "
.LC2:
	.string	">"
	.text
	.globl	printArray
	.type	printArray, @function
printArray:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	leaq	.LC1(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -4(%rbp)
.L2:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L3
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	printArray, .-printArray
	.section	.rodata
	.align 8
.LC3:
	.base64	"0KHQutC+0LvRjNC60L4g0LfQvdCw0YfQtdC90LjQuSDQstGLINGF0L7RgtC40YLQtSDQstCy0LXRgdGC0Lg/OiAA"
.LC4:
	.string	"%d"
	.align 8
.LC5:
	.base64	"0JLQstC10LTQuNGC0LUg0Y3Qu9C10LzQtdC90YLRiyDRh9C10YDQtdC3INC/0YDQvtCx0LXQuzogAA=="
	.align 8
.LC6:
	.base64	"CtCS0YvQsdC10YDQuNGC0LUg0L7Qv9C10YDQsNGG0LjRjjoA"
	.align 8
.LC7:
	.base64	"MSAtINCf0LXRgNC10LfQsNC/0LjRgdCw0YLRjCDQvNCw0YHRgdC40LIA"
	.align 8
.LC8:
	.base64	"MiAtIFgxMCDQtNC70Y8g0L3QtdGH0LXRgtC90YvRhSDRjdC70LXQvNC10L3RgtC+0LIA"
	.align 8
.LC9:
	.base64	"MyAtINCd0LDQudGC0Lgg0LzQuNC90LjQvNCw0LvRjNC90YvQuSDRjdC70LXQvNC10L3RggA="
	.align 8
.LC10:
	.base64	"NCAtINCf0L7RgdGH0LjRgtCw0YLRjCDRjdC70LXQvNC10L3RgtGLINCx0L7Qu9GM0YjQtSAxMAA="
	.align 8
.LC11:
	.base64	"NSAtIFgyINC00LvRjyDQv9C+0YHQu9C10LTQvdC10LPQviDRh9C10YLQvdC+0LPQvgA="
	.align 8
.LC12:
	.base64	"NiAtINCh0LrQvtC70YzQutC+INGH0LXRgtC90YvRhSDQu9C10LLQtdC1INC80LjQvdC40LzQsNC70YzQvdC+0LPQvgA="
	.align 8
.LC13:
	.base64	"NyAtIFgxMCDQtNC70Y8g0L3QtdGH0LXRgtC90YvRhSDQv9GA0LDQstC10LUg0LzQuNC90LjQvNCw0LvRjNC90L7Qs9C+AA=="
	.align 8
.LC14:
	.base64	"OCAtINCf0LXRgNC10YHRgtCw0LLQuNGC0Ywg0LzQtdGB0YLQsNC80LggbWluINC4IG1heAA="
	.align 8
.LC15:
	.base64	"MTEgLSDQo9C00LDQu9C40YLRjCDQt9Cw0LTQsNC90L3Ri9C5INGN0LvQtdC80LXQvdGCAA=="
	.align 8
.LC16:
	.base64	"MTIgLSDQktGB0YLQsNCy0LjRgtGMINC90L7QstGL0Lkg0Y3Qu9C10LzQtdC90YIg0LIg0LfQsNC00LDQvdC90L7QtSDQvNC10YHRgtC+AA=="
	.align 8
.LC17:
	.base64	"MTMgLSDQo9C00LDQu9C40YLRjCDQvNC40L3QuNC80LDQu9GM0L3Ri9C5INGN0LvQtdC80LXQvdGCAA=="
	.align 8
.LC18:
	.base64	"MTQgLSDQn9C10YDQtdC0INC80LjQvdC40LzQsNC70YzQvdGL0Lwg0Y3Qu9C10LzQtdC90YLQvtC8INCy0YHRgtCw0LLQuNGC0YwgMAA="
	.align 8
.LC19:
	.base64	"MTUgLSDQo9C00LDQu9C40YLRjCDQstGB0LUg0YfQtdGC0L3Ri9C1INGN0LvQtdC80LXQvdGC0YsA"
	.align 8
.LC20:
	.base64	"MTYgLSDQn9GA0L7QtNGD0LHQu9C40YDQvtCy0LDRgtGMINCy0YHQtSDRh9C10YLQvdGL0LUg0Y3Qu9C10LzQtdC90YLRiwA="
.LC21:
	.base64	"MCAtINCS0YvRhdC+0LQA"
	.align 8
.LC22:
	.base64	"0JzQuNC90LjQvNCw0LvRjNC90YvQuSDRjdC70LXQvNC10L3RgjogJWQKAA=="
	.align 8
.LC23:
	.base64	"0JrQvtC70LjRh9C10YHRgtCy0L4g0Y3Qu9C10LzQtdC90YLQvtCyINCx0L7Qu9GM0YjQtSAxMDogJWQKAA=="
	.align 8
.LC24:
	.base64	"0JjQvdC00LXQutGBINC80LjQvdC40LzQsNC70YzQvdC+0LPQviDRjdC70LXQvNC10L3RgtCwID0gJWQKAA=="
	.align 8
.LC25:
	.base64	"0JvQtdCy0LXQtSDQvNC40L3QuNC80LDQu9GM0L3QvtCz0L4gJWQg0YfQtdGC0L3Ri9GFINGN0LvQtdC80LXQvdGC0L7QsgoA"
	.align 8
.LC26:
	.base64	"0JjQvdC00LXQutGBINC80LDQutGB0LjQvNCw0LvRjNC90L7Qs9C+INGN0LvQtdC80LXQvdGC0LAgPSAlZAoA"
	.align 8
.LC27:
	.base64	"0JjQvdC00LXQutGBINGD0LTQsNC70Y/QtdC80L7Qs9C+INGN0LvQtdC80LXQvdGC0LAgPSAA"
	.align 8
.LC28:
	.base64	"0J/QtdGA0LXQtCDQutCw0LrQuNC8INGN0LvQtdC80LXQvdGC0L7QvCDQvdGD0LbQvdC+INCy0YHRgtCw0LLQuNGC0Ywg0L3QvtCy0YvQuT8g0JjQvdC00LXQutGBID0gAA=="
	.align 8
.LC29:
	.base64	"0JfQvdCw0YfQtdC90LjQtSwg0LrQvtGC0L7RgNC+0LUg0L3Rg9C20L3QviDQstGB0YLQsNCy0LjRgtGMID0gAA=="
	.align 8
.LC30:
	.base64	"0KPQtNCw0LvRkdC9INC80LjQvdC40LzQsNC70YzQvdGL0Lkg0Y3Qu9C10LzQtdC90YIgJWQg0L3QsCDQuNC90LTQtdC60YHQtSAlZAoA"
	.align 8
.LC31:
	.base64	"0JLRi9GF0L7QtCDQuNC3INC30LDQtNCw0L3QuNGPIDYuMS4xAA=="
.LC32:
	.base64	"0J3QtdCy0LXRgNC90YvQuSDQstGL0LHQvtGAIQA="
	.text
	.globl	task6_1_1
	.type	task6_1_1, @function
task6_1_1:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$560, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
.L5:
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-560(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -544(%rbp)
	jmp	.L6
.L7:
	leaq	-416(%rbp), %rax
	movl	-544(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	addl	$1, -544(%rbp)
.L6:
	movl	-560(%rbp), %eax
	cmpl	%eax, -544(%rbp)
	jl	.L7
.L79:
	movl	-560(%rbp), %edx
	leaq	-416(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC19(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC21(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	-556(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-556(%rbp), %eax
	cmpl	$16, %eax
	je	.L8
	cmpl	$16, %eax
	jg	.L9
	cmpl	$15, %eax
	je	.L10
	cmpl	$15, %eax
	jg	.L9
	cmpl	$14, %eax
	je	.L11
	cmpl	$14, %eax
	jg	.L9
	cmpl	$13, %eax
	je	.L12
	cmpl	$13, %eax
	jg	.L9
	cmpl	$12, %eax
	je	.L13
	cmpl	$12, %eax
	jg	.L9
	cmpl	$11, %eax
	je	.L14
	cmpl	$11, %eax
	jg	.L9
	cmpl	$8, %eax
	je	.L15
	cmpl	$8, %eax
	jg	.L9
	cmpl	$7, %eax
	je	.L16
	cmpl	$7, %eax
	jg	.L9
	cmpl	$6, %eax
	je	.L17
	cmpl	$6, %eax
	jg	.L9
	cmpl	$5, %eax
	je	.L18
	cmpl	$5, %eax
	jg	.L9
	cmpl	$4, %eax
	je	.L19
	cmpl	$4, %eax
	jg	.L9
	cmpl	$3, %eax
	je	.L20
	cmpl	$3, %eax
	jg	.L9
	cmpl	$2, %eax
	je	.L21
	cmpl	$2, %eax
	jg	.L9
	testl	%eax, %eax
	je	.L22
	cmpl	$1, %eax
	jne	.L9
	jmp	.L5
.L21:
	movl	$0, -540(%rbp)
	jmp	.L23
.L25:
	movl	-540(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L24
	movl	-540(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, %edx
	movl	-540(%rbp), %eax
	cltq
	movl	%edx, -416(%rbp,%rax,4)
.L24:
	addl	$1, -540(%rbp)
.L23:
	movl	-560(%rbp), %eax
	cmpl	%eax, -540(%rbp)
	jl	.L25
	jmp	.L26
.L20:
	movl	-416(%rbp), %eax
	movl	%eax, -536(%rbp)
	movl	$1, -532(%rbp)
	jmp	.L27
.L29:
	movl	-532(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	cmpl	%eax, -536(%rbp)
	jle	.L28
	movl	-532(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	movl	%eax, -536(%rbp)
.L28:
	addl	$1, -532(%rbp)
.L27:
	movl	-560(%rbp), %eax
	cmpl	%eax, -532(%rbp)
	jl	.L29
	movl	-536(%rbp), %eax
	leaq	.LC22(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L26
.L19:
	movl	$0, -528(%rbp)
	movl	$0, -524(%rbp)
	jmp	.L30
.L32:
	movl	-524(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	cmpl	$10, %eax
	jle	.L31
	addl	$1, -528(%rbp)
.L31:
	addl	$1, -524(%rbp)
.L30:
	movl	-560(%rbp), %eax
	cmpl	%eax, -524(%rbp)
	jl	.L32
	movl	-528(%rbp), %eax
	leaq	.LC23(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L26
.L18:
	movl	-560(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -520(%rbp)
	jmp	.L33
.L36:
	movl	-520(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L34
	movl	-520(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	leal	(%rax,%rax), %edx
	movl	-520(%rbp), %eax
	cltq
	movl	%edx, -416(%rbp,%rax,4)
	nop
	jmp	.L26
.L34:
	subl	$1, -520(%rbp)
.L33:
	cmpl	$0, -520(%rbp)
	jns	.L36
	jmp	.L26
.L17:
	movl	-416(%rbp), %eax
	movl	%eax, -516(%rbp)
	movl	$0, -512(%rbp)
	movl	$1, -508(%rbp)
	jmp	.L37
.L39:
	movl	-508(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	cmpl	%eax, -516(%rbp)
	jle	.L38
	movl	-508(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	movl	%eax, -516(%rbp)
	movl	-508(%rbp), %eax
	movl	%eax, -512(%rbp)
.L38:
	addl	$1, -508(%rbp)
.L37:
	movl	-560(%rbp), %eax
	cmpl	%eax, -508(%rbp)
	jl	.L39
	movl	-512(%rbp), %eax
	leaq	.LC24(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -504(%rbp)
	movl	$0, -500(%rbp)
	jmp	.L40
.L42:
	movl	-500(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L41
	addl	$1, -504(%rbp)
.L41:
	addl	$1, -500(%rbp)
.L40:
	movl	-500(%rbp), %eax
	cmpl	-512(%rbp), %eax
	jl	.L42
	movl	-504(%rbp), %eax
	leaq	.LC25(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L26
.L16:
	movl	-416(%rbp), %eax
	movl	%eax, -496(%rbp)
	movl	$0, -492(%rbp)
	movl	$1, -488(%rbp)
	jmp	.L43
.L45:
	movl	-488(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	cmpl	%eax, -496(%rbp)
	jle	.L44
	movl	-488(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	movl	%eax, -496(%rbp)
	movl	-488(%rbp), %eax
	movl	%eax, -492(%rbp)
.L44:
	addl	$1, -488(%rbp)
.L43:
	movl	-560(%rbp), %eax
	cmpl	%eax, -488(%rbp)
	jl	.L45
	movl	-492(%rbp), %eax
	leaq	.LC24(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-492(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -484(%rbp)
	jmp	.L46
.L48:
	movl	-484(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L47
	movl	-484(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, %edx
	movl	-484(%rbp), %eax
	cltq
	movl	%edx, -416(%rbp,%rax,4)
.L47:
	addl	$1, -484(%rbp)
.L46:
	movl	-560(%rbp), %eax
	cmpl	%eax, -484(%rbp)
	jl	.L48
	jmp	.L26
.L15:
	movl	$0, -480(%rbp)
	movl	$0, -476(%rbp)
	movl	$1, -472(%rbp)
	jmp	.L49
.L52:
	movl	-472(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-480(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	cmpl	%eax, %edx
	jge	.L50
	movl	-472(%rbp), %eax
	movl	%eax, -480(%rbp)
.L50:
	movl	-472(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-476(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	cmpl	%eax, %edx
	jle	.L51
	movl	-472(%rbp), %eax
	movl	%eax, -476(%rbp)
.L51:
	addl	$1, -472(%rbp)
.L49:
	movl	-560(%rbp), %eax
	cmpl	%eax, -472(%rbp)
	jl	.L52
	movl	-480(%rbp), %eax
	leaq	.LC24(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-476(%rbp), %eax
	leaq	.LC26(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-480(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	movl	%eax, -420(%rbp)
	movl	-476(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-480(%rbp), %eax
	cltq
	movl	%edx, -416(%rbp,%rax,4)
	movl	-476(%rbp), %eax
	cltq
	movl	-420(%rbp), %edx
	movl	%edx, -416(%rbp,%rax,4)
	jmp	.L26
.L14:
	leaq	.LC27(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-548(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-548(%rbp), %eax
	testl	%eax, %eax
	js	.L81
	movl	-548(%rbp), %edx
	movl	-560(%rbp), %eax
	cmpl	%eax, %edx
	jge	.L81
	movl	-548(%rbp), %eax
	movl	%eax, -468(%rbp)
	jmp	.L54
.L55:
	movl	-468(%rbp), %eax
	addl	$1, %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-468(%rbp), %eax
	cltq
	movl	%edx, -416(%rbp,%rax,4)
	addl	$1, -468(%rbp)
.L54:
	movl	-560(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, -468(%rbp)
	jl	.L55
	movl	-560(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -560(%rbp)
	jmp	.L81
.L13:
	leaq	.LC28(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-552(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-552(%rbp), %eax
	testl	%eax, %eax
	js	.L82
	movl	-552(%rbp), %edx
	movl	-560(%rbp), %eax
	cmpl	%eax, %edx
	jg	.L82
	movl	-560(%rbp), %eax
	cmpl	$99, %eax
	jg	.L82
	leaq	.LC29(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-548(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-560(%rbp), %eax
	movl	%eax, -464(%rbp)
	jmp	.L57
.L58:
	movl	-464(%rbp), %eax
	subl	$1, %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-464(%rbp), %eax
	cltq
	movl	%edx, -416(%rbp,%rax,4)
	subl	$1, -464(%rbp)
.L57:
	movl	-552(%rbp), %eax
	cmpl	%eax, -464(%rbp)
	jg	.L58
	movl	-552(%rbp), %eax
	movl	-548(%rbp), %edx
	cltq
	movl	%edx, -416(%rbp,%rax,4)
	movl	-560(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -560(%rbp)
	jmp	.L82
.L12:
	movl	$0, -460(%rbp)
	movl	$1, -456(%rbp)
	jmp	.L59
.L61:
	movl	-456(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-460(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	cmpl	%eax, %edx
	jge	.L60
	movl	-456(%rbp), %eax
	movl	%eax, -460(%rbp)
.L60:
	addl	$1, -456(%rbp)
.L59:
	movl	-560(%rbp), %eax
	cmpl	%eax, -456(%rbp)
	jl	.L61
	movl	-460(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	movl	-460(%rbp), %edx
	leaq	.LC30(%rip), %rcx
	movl	%eax, %esi
	movq	%rcx, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-460(%rbp), %eax
	movl	%eax, -452(%rbp)
	jmp	.L62
.L63:
	movl	-452(%rbp), %eax
	addl	$1, %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-452(%rbp), %eax
	cltq
	movl	%edx, -416(%rbp,%rax,4)
	addl	$1, -452(%rbp)
.L62:
	movl	-560(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, -452(%rbp)
	jl	.L63
	movl	-560(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -560(%rbp)
	jmp	.L26
.L11:
	movl	$0, -448(%rbp)
	movl	$1, -444(%rbp)
	jmp	.L64
.L66:
	movl	-444(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-448(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	cmpl	%eax, %edx
	jge	.L65
	movl	-444(%rbp), %eax
	movl	%eax, -448(%rbp)
.L65:
	addl	$1, -444(%rbp)
.L64:
	movl	-560(%rbp), %eax
	cmpl	%eax, -444(%rbp)
	jl	.L66
	movl	-560(%rbp), %eax
	cmpl	$99, %eax
	jg	.L83
	movl	-560(%rbp), %eax
	movl	%eax, -440(%rbp)
	jmp	.L68
.L69:
	movl	-440(%rbp), %eax
	subl	$1, %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-440(%rbp), %eax
	cltq
	movl	%edx, -416(%rbp,%rax,4)
	subl	$1, -440(%rbp)
.L68:
	movl	-440(%rbp), %eax
	cmpl	-448(%rbp), %eax
	jg	.L69
	movl	-448(%rbp), %eax
	cltq
	movl	$0, -416(%rbp,%rax,4)
	movl	-560(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -560(%rbp)
	jmp	.L83
.L10:
	movl	$0, -436(%rbp)
	movl	$0, -432(%rbp)
	jmp	.L70
.L72:
	movl	-432(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L71
	movl	-436(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -436(%rbp)
	movl	-432(%rbp), %edx
	movslq	%edx, %rdx
	movl	-416(%rbp,%rdx,4), %edx
	cltq
	movl	%edx, -416(%rbp,%rax,4)
.L71:
	addl	$1, -432(%rbp)
.L70:
	movl	-560(%rbp), %eax
	cmpl	%eax, -432(%rbp)
	jl	.L72
	movl	-436(%rbp), %eax
	movl	%eax, -560(%rbp)
	jmp	.L26
.L8:
	movl	-560(%rbp), %eax
	cmpl	$99, %eax
	jg	.L84
	movl	-560(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -428(%rbp)
	jmp	.L74
.L78:
	movl	-428(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L75
	movl	-560(%rbp), %eax
	movl	%eax, -424(%rbp)
	jmp	.L76
.L77:
	movl	-424(%rbp), %eax
	subl	$1, %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-424(%rbp), %eax
	cltq
	movl	%edx, -416(%rbp,%rax,4)
	subl	$1, -424(%rbp)
.L76:
	movl	-424(%rbp), %eax
	cmpl	-428(%rbp), %eax
	jg	.L77
	movl	-428(%rbp), %eax
	leal	1(%rax), %ecx
	movl	-428(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movslq	%ecx, %rax
	movl	%edx, -416(%rbp,%rax,4)
	movl	-560(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -560(%rbp)
.L75:
	subl	$1, -428(%rbp)
.L74:
	cmpl	$0, -428(%rbp)
	jns	.L78
	jmp	.L84
.L22:
	leaq	.LC31(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L26
.L9:
	leaq	.LC32(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L26
.L81:
	nop
	jmp	.L26
.L82:
	nop
	jmp	.L26
.L83:
	nop
	jmp	.L26
.L84:
	nop
.L26:
	movl	-556(%rbp), %eax
	testl	%eax, %eax
	jne	.L79
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L80
	call	__stack_chk_fail@PLT
.L80:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	task6_1_1, .-task6_1_1
	.section	.rodata
.LC33:
	.base64	"0KDQtdC30YPQu9GM0YLQsNGCOgA="
	.text
	.globl	task6_1_7
	.type	task6_1_7, @function
task6_1_7:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rbx
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-52(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-52(%rbp), %eax
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -40(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ecx
	movl	$0, %edx
	divq	%rcx
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -32(%rbp)
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -48(%rbp)
	jmp	.L86
.L87:
	movl	-48(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	addl	$1, -48(%rbp)
.L86:
	movl	-52(%rbp), %eax
	cmpl	%eax, -48(%rbp)
	jl	.L87
	movl	$0, -44(%rbp)
	jmp	.L88
.L90:
	movq	-32(%rbp), %rax
	movl	-44(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L89
	movq	-32(%rbp), %rax
	movl	-44(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	negl	%eax
	movl	%eax, %ecx
	movq	-32(%rbp), %rax
	movl	-44(%rbp), %edx
	movslq	%edx, %rdx
	movl	%ecx, (%rax,%rdx,4)
.L89:
	addl	$1, -44(%rbp)
.L88:
	movl	-52(%rbp), %eax
	cmpl	%eax, -44(%rbp)
	jl	.L90
	leaq	.LC33(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	-52(%rbp), %edx
	movq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	movq	%rbx, %rsp
	nop
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L91
	call	__stack_chk_fail@PLT
.L91:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	task6_1_7, .-task6_1_7
	.globl	task6_1_8
	.type	task6_1_8, @function
task6_1_8:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rbx
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-52(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-52(%rbp), %eax
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -40(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ecx
	movl	$0, %edx
	divq	%rcx
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -32(%rbp)
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -48(%rbp)
	jmp	.L93
.L94:
	movl	-48(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	addl	$1, -48(%rbp)
.L93:
	movl	-52(%rbp), %eax
	cmpl	%eax, -48(%rbp)
	jl	.L94
	movl	$0, -44(%rbp)
	jmp	.L95
.L97:
	movq	-32(%rbp), %rax
	movl	-44(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	cmpl	$3, %eax
	jg	.L96
	movq	-32(%rbp), %rax
	movl	-44(%rbp), %edx
	movslq	%edx, %rdx
	movl	$4, (%rax,%rdx,4)
.L96:
	addl	$1, -44(%rbp)
.L95:
	movl	-52(%rbp), %eax
	cmpl	%eax, -44(%rbp)
	jl	.L97
	leaq	.LC33(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	-52(%rbp), %edx
	movq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	movq	%rbx, %rsp
	nop
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L98
	call	__stack_chk_fail@PLT
.L98:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	task6_1_8, .-task6_1_8
	.globl	task6_1_9
	.type	task6_1_9, @function
task6_1_9:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rbx
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-52(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-52(%rbp), %eax
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -40(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ecx
	movl	$0, %edx
	divq	%rcx
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -32(%rbp)
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -48(%rbp)
	jmp	.L100
.L101:
	movl	-48(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	addl	$1, -48(%rbp)
.L100:
	movl	-52(%rbp), %eax
	cmpl	%eax, -48(%rbp)
	jl	.L101
	movl	$0, -44(%rbp)
	jmp	.L102
.L104:
	movq	-32(%rbp), %rax
	movl	-44(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L103
	movl	-44(%rbp), %eax
	leal	1(%rax), %edx
	movq	-32(%rbp), %rax
	movslq	%edx, %rdx
	movl	$0, (%rax,%rdx,4)
.L103:
	addl	$1, -44(%rbp)
.L102:
	movl	-52(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, -44(%rbp)
	jl	.L104
	leaq	.LC33(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	-52(%rbp), %edx
	movq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	movq	%rbx, %rsp
	nop
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L105
	call	__stack_chk_fail@PLT
.L105:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	task6_1_9, .-task6_1_9
	.globl	task6_1_10
	.type	task6_1_10, @function
task6_1_10:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rbx
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-72(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-72(%rbp), %eax
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -40(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %esi
	movl	$0, %edx
	divq	%rsi
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -32(%rbp)
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -68(%rbp)
	jmp	.L107
.L108:
	movl	-68(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	addl	$1, -68(%rbp)
.L107:
	movl	-72(%rbp), %eax
	cmpl	%eax, -68(%rbp)
	jl	.L108
	movl	$0, -64(%rbp)
	movl	$0, -60(%rbp)
	movl	$1, -56(%rbp)
	jmp	.L109
.L112:
	movq	-32(%rbp), %rax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %ecx
	movq	-32(%rbp), %rax
	movl	-64(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	cmpl	%eax, %ecx
	jge	.L110
	movl	-56(%rbp), %eax
	movl	%eax, -64(%rbp)
.L110:
	movq	-32(%rbp), %rax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %ecx
	movq	-32(%rbp), %rax
	movl	-60(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	cmpl	%eax, %ecx
	jle	.L111
	movl	-56(%rbp), %eax
	movl	%eax, -60(%rbp)
.L111:
	addl	$1, -56(%rbp)
.L109:
	movl	-72(%rbp), %eax
	cmpl	%eax, -56(%rbp)
	jl	.L112
	movl	-60(%rbp), %edx
	movl	-64(%rbp), %eax
	cmpl	%eax, %edx
	cmovle	%edx, %eax
	movl	%eax, -48(%rbp)
	movl	-60(%rbp), %edx
	movl	-64(%rbp), %eax
	cmpl	%eax, %edx
	cmovge	%edx, %eax
	movl	%eax, -44(%rbp)
	movl	-48(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -52(%rbp)
	jmp	.L113
.L114:
	movq	-32(%rbp), %rax
	movl	-52(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, %ecx
	movq	-32(%rbp), %rax
	movl	-52(%rbp), %edx
	movslq	%edx, %rdx
	movl	%ecx, (%rax,%rdx,4)
	addl	$1, -52(%rbp)
.L113:
	movl	-52(%rbp), %eax
	cmpl	-44(%rbp), %eax
	jl	.L114
	leaq	.LC33(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	-72(%rbp), %edx
	movq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	movq	%rbx, %rsp
	nop
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L115
	call	__stack_chk_fail@PLT
.L115:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	task6_1_10, .-task6_1_10
	.section	.rodata
	.align 8
.LC34:
	.base64	"0JzQtdC20LTRgyDQv9C10YDQstGL0Lwg0Lgg0L/QvtGB0LvQtdC00L3QuNC8INGH0LXRgtC90YvQvCDQvdC10YIg0Y3Qu9C10LzQtdC90YLQvtCyINC00LvRjyDRg9C80L3QvtC20LXQvdC40Y8uAA=="
	.text
	.globl	task6_1_11
	.type	task6_1_11, @function
task6_1_11:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rbx
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-64(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-64(%rbp), %eax
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -40(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ecx
	movl	$0, %edx
	divq	%rcx
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -32(%rbp)
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -60(%rbp)
	jmp	.L117
.L118:
	movl	-60(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	addl	$1, -60(%rbp)
.L117:
	movl	-64(%rbp), %eax
	cmpl	%eax, -60(%rbp)
	jl	.L118
	movl	$-1, -56(%rbp)
	movl	$-1, -52(%rbp)
	movl	$0, -48(%rbp)
	jmp	.L119
.L122:
	movq	-32(%rbp), %rax
	movl	-48(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L120
	cmpl	$-1, -56(%rbp)
	jne	.L121
	movl	-48(%rbp), %eax
	movl	%eax, -56(%rbp)
.L121:
	movl	-48(%rbp), %eax
	movl	%eax, -52(%rbp)
.L120:
	addl	$1, -48(%rbp)
.L119:
	movl	-64(%rbp), %eax
	cmpl	%eax, -48(%rbp)
	jl	.L122
	cmpl	$-1, -56(%rbp)
	je	.L123
	cmpl	$-1, -52(%rbp)
	je	.L123
	movl	-52(%rbp), %eax
	subl	-56(%rbp), %eax
	cmpl	$1, %eax
	jle	.L123
	movl	-56(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -44(%rbp)
	jmp	.L124
.L125:
	movq	-32(%rbp), %rax
	movl	-44(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	imull	$100, %eax, %ecx
	movq	-32(%rbp), %rax
	movl	-44(%rbp), %edx
	movslq	%edx, %rdx
	movl	%ecx, (%rax,%rdx,4)
	addl	$1, -44(%rbp)
.L124:
	movl	-44(%rbp), %eax
	cmpl	-52(%rbp), %eax
	jl	.L125
	jmp	.L126
.L123:
	leaq	.LC34(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L126:
	leaq	.LC33(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	-64(%rbp), %edx
	movq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	movq	%rbx, %rsp
	nop
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L127
	call	__stack_chk_fail@PLT
.L127:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	task6_1_11, .-task6_1_11
	.section	.rodata
	.align 8
.LC35:
	.base64	"CtCy0YvQv9C+0LvQvdC10L3QuNC1INC60L7QtNCwIGxhYjYuMQA="
	.align 8
.LC36:
	.base64	"0JLRi9Cx0LXRgNC40YLQtSDQt9Cw0LTQsNC90LjQtToA"
.LC37:
	.string	"1 - 6.1.1"
.LC38:
	.string	"2 - 6.1.7"
.LC39:
	.string	"3 - 6.1.8"
.LC40:
	.string	"4 - 6.1.9"
.LC41:
	.string	"5 - 6.1.10"
.LC42:
	.string	"6 - 6.1.11"
.LC43:
	.base64	"MCAtINCy0YvRhdC+0LQA"
.LC44:
	.base64	"0JLRi9GF0L7QtCDQuNC3IGxhYjYuMQA="
	.text
	.globl	lab_6_1
	.type	lab_6_1, @function
lab_6_1:
.LFB7:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
.L137:
	leaq	.LC35(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC36(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC37(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC38(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC39(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC40(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC41(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC42(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC43(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$10, %edi
	call	putchar@PLT
	leaq	-12(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-12(%rbp), %eax
	cmpl	$6, %eax
	je	.L129
	cmpl	$6, %eax
	jg	.L130
	cmpl	$5, %eax
	je	.L131
	cmpl	$5, %eax
	jg	.L130
	cmpl	$4, %eax
	je	.L132
	cmpl	$4, %eax
	jg	.L130
	cmpl	$3, %eax
	je	.L133
	cmpl	$3, %eax
	jg	.L130
	cmpl	$2, %eax
	je	.L134
	cmpl	$2, %eax
	jg	.L130
	testl	%eax, %eax
	je	.L135
	cmpl	$1, %eax
	jne	.L130
	call	task6_1_1
	jmp	.L136
.L134:
	call	task6_1_7
	jmp	.L136
.L133:
	call	task6_1_8
	jmp	.L136
.L132:
	call	task6_1_9
	jmp	.L136
.L131:
	call	task6_1_10
	jmp	.L136
.L129:
	call	task6_1_11
	jmp	.L136
.L135:
	leaq	.LC44(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L136
.L130:
	leaq	.LC32(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	nop
.L136:
	movl	-12(%rbp), %eax
	testl	%eax, %eax
	jne	.L137
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L138
	call	__stack_chk_fail@PLT
.L138:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	lab_6_1, .-lab_6_1
	.globl	task6_2_7
	.type	task6_2_7, @function
task6_2_7:
.LFB8:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$448, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-436(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -432(%rbp)
	jmp	.L140
.L141:
	leaq	-416(%rbp), %rax
	movl	-432(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	addl	$1, -432(%rbp)
.L140:
	movl	-436(%rbp), %eax
	cmpl	%eax, -432(%rbp)
	jl	.L141
	movl	$0, -428(%rbp)
	movl	$1, -424(%rbp)
	jmp	.L142
.L144:
	movl	-424(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-428(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	cmpl	%eax, %edx
	jge	.L143
	movl	-424(%rbp), %eax
	movl	%eax, -428(%rbp)
.L143:
	addl	$1, -424(%rbp)
.L142:
	movl	-436(%rbp), %eax
	cmpl	%eax, -424(%rbp)
	jl	.L144
	movl	-436(%rbp), %eax
	cmpl	$99, %eax
	jg	.L145
	movl	-436(%rbp), %eax
	movl	%eax, -420(%rbp)
	jmp	.L146
.L147:
	movl	-420(%rbp), %eax
	subl	$1, %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-420(%rbp), %eax
	cltq
	movl	%edx, -416(%rbp,%rax,4)
	subl	$1, -420(%rbp)
.L146:
	cmpl	$0, -420(%rbp)
	jg	.L147
	movl	-428(%rbp), %eax
	addl	$1, %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	movl	%eax, -416(%rbp)
	movl	-436(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -436(%rbp)
.L145:
	leaq	.LC33(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	-436(%rbp), %edx
	leaq	-416(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L148
	call	__stack_chk_fail@PLT
.L148:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	task6_2_7, .-task6_2_7
	.globl	task6_2_8
	.type	task6_2_8, @function
task6_2_8:
.LFB9:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$432, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-432(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -428(%rbp)
	jmp	.L150
.L151:
	leaq	-416(%rbp), %rax
	movl	-428(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	addl	$1, -428(%rbp)
.L150:
	movl	-432(%rbp), %eax
	cmpl	%eax, -428(%rbp)
	jl	.L151
	movl	$0, -424(%rbp)
	movl	$0, -420(%rbp)
	jmp	.L152
.L154:
	movl	-420(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	cmpl	$3, %eax
	jle	.L153
	movl	-424(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -424(%rbp)
	movl	-420(%rbp), %edx
	movslq	%edx, %rdx
	movl	-416(%rbp,%rdx,4), %edx
	cltq
	movl	%edx, -416(%rbp,%rax,4)
.L153:
	addl	$1, -420(%rbp)
.L152:
	movl	-432(%rbp), %eax
	cmpl	%eax, -420(%rbp)
	jl	.L154
	movl	-424(%rbp), %eax
	movl	%eax, -432(%rbp)
	leaq	.LC33(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	-432(%rbp), %edx
	leaq	-416(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L155
	call	__stack_chk_fail@PLT
.L155:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	task6_2_8, .-task6_2_8
	.section	.rodata
	.align 8
.LC45:
	.base64	"0J/QvtGB0LvQtdC00L3QuNC5INC90LXRh9C10YLQvdGL0Lkg0Y3Qu9C10LzQtdC90YIgJWQg0L3QsCDQuNC90LTQtdC60YHQtSAlZCDRg9C00LDQu9GR0L0KAA=="
	.align 8
.LC46:
	.base64	"0J3QtdGH0LXRgtC90YvRhSDRjdC70LXQvNC10L3RgtC+0LIg0L3QtSDQvdCw0LnQtNC10L3QviEA"
	.text
	.globl	task6_2_9
	.type	task6_2_9, @function
task6_2_9:
.LFB10:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$448, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-436(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -432(%rbp)
	jmp	.L157
.L158:
	leaq	-416(%rbp), %rax
	movl	-432(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	addl	$1, -432(%rbp)
.L157:
	movl	-436(%rbp), %eax
	cmpl	%eax, -432(%rbp)
	jl	.L158
	movl	$-1, -428(%rbp)
	movl	-436(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -424(%rbp)
	jmp	.L159
.L162:
	movl	-424(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L160
	movl	-424(%rbp), %eax
	movl	%eax, -428(%rbp)
	jmp	.L161
.L160:
	subl	$1, -424(%rbp)
.L159:
	cmpl	$0, -424(%rbp)
	jns	.L162
.L161:
	cmpl	$-1, -428(%rbp)
	je	.L163
	movl	-428(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	movl	-428(%rbp), %edx
	leaq	.LC45(%rip), %rcx
	movl	%eax, %esi
	movq	%rcx, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-428(%rbp), %eax
	movl	%eax, -420(%rbp)
	jmp	.L164
.L165:
	movl	-420(%rbp), %eax
	addl	$1, %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-420(%rbp), %eax
	cltq
	movl	%edx, -416(%rbp,%rax,4)
	addl	$1, -420(%rbp)
.L164:
	movl	-436(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, -420(%rbp)
	jl	.L165
	movl	-436(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -436(%rbp)
	jmp	.L166
.L163:
	leaq	.LC46(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L166:
	leaq	.LC33(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	-436(%rbp), %edx
	leaq	-416(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L167
	call	__stack_chk_fail@PLT
.L167:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	task6_2_9, .-task6_2_9
	.section	.rodata
	.align 8
.LC47:
	.base64	"0KfQtdGC0L3Ri9GFINGN0LvQtdC80LXQvdGC0L7QsiDQvdC10YIsINGB0YDQtdC00L3QtdC1INC90LUg0L7Qv9GA0LXQtNC10LvQtdC90L4uAA=="
	.align 8
.LC48:
	.base64	"0KHRgNC10LTQvdC10LUg0LDRgNC40YTQvNC10YLQuNGH0LXRgdC60L7QtSDRh9C10YLQvdGL0YUg0Y3Qu9C10LzQtdC90YLQvtCyOiAlLjJmCgA="
	.text
	.globl	task6_2_10
	.type	task6_2_10, @function
task6_2_10:
.LFB11:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$464, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-452(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -448(%rbp)
	jmp	.L169
.L170:
	leaq	-416(%rbp), %rax
	movl	-448(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	addl	$1, -448(%rbp)
.L169:
	movl	-452(%rbp), %eax
	cmpl	%eax, -448(%rbp)
	jl	.L170
	movl	$0, -444(%rbp)
	movl	$0, -440(%rbp)
	movl	$0, -436(%rbp)
	jmp	.L171
.L173:
	movl	-436(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L172
	movl	-436(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	addl	%eax, -444(%rbp)
	addl	$1, -440(%rbp)
.L172:
	addl	$1, -436(%rbp)
.L171:
	movl	-452(%rbp), %eax
	cmpl	%eax, -436(%rbp)
	jl	.L173
	cmpl	$0, -440(%rbp)
	jne	.L174
	leaq	.LC47(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	-452(%rbp), %edx
	leaq	-416(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	jmp	.L168
.L174:
	pxor	%xmm0, %xmm0
	cvtsi2sdl	-444(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	cvtsi2sdl	-440(%rbp), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -424(%rbp)
	movq	-424(%rbp), %rax
	leaq	.LC48(%rip), %rdx
	movq	%rax, %xmm0
	movq	%rdx, %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	$0, -432(%rbp)
	movl	$0, -428(%rbp)
	jmp	.L176
.L179:
	movl	-428(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	pxor	%xmm0, %xmm0
	cvtsi2sdl	%eax, %xmm0
	comisd	-424(%rbp), %xmm0
	jb	.L177
	movl	-432(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -432(%rbp)
	movl	-428(%rbp), %edx
	movslq	%edx, %rdx
	movl	-416(%rbp,%rdx,4), %edx
	cltq
	movl	%edx, -416(%rbp,%rax,4)
.L177:
	addl	$1, -428(%rbp)
.L176:
	movl	-452(%rbp), %eax
	cmpl	%eax, -428(%rbp)
	jl	.L179
	movl	-432(%rbp), %eax
	movl	%eax, -452(%rbp)
	leaq	.LC33(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	-452(%rbp), %edx
	leaq	-416(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
.L168:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L180
	call	__stack_chk_fail@PLT
.L180:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	task6_2_10, .-task6_2_10
	.globl	task6_2_11
	.type	task6_2_11, @function
task6_2_11:
.LFB12:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$448, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-444(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -440(%rbp)
	jmp	.L183
.L184:
	leaq	-416(%rbp), %rax
	movl	-440(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	addl	$1, -440(%rbp)
.L183:
	movl	-444(%rbp), %eax
	cmpl	%eax, -440(%rbp)
	jl	.L184
	movl	$0, -436(%rbp)
	movl	$0, -432(%rbp)
	jmp	.L185
.L192:
	movl	-432(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L186
	movl	-432(%rbp), %eax
	movl	%eax, -424(%rbp)
	jmp	.L187
.L189:
	addl	$1, -432(%rbp)
.L187:
	movl	-444(%rbp), %eax
	cmpl	%eax, -432(%rbp)
	jge	.L188
	movl	-432(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L189
.L188:
	movl	-432(%rbp), %eax
	subl	-424(%rbp), %eax
	movl	%eax, -420(%rbp)
	cmpl	$2, -420(%rbp)
	jle	.L185
	movl	-424(%rbp), %eax
	movl	%eax, -428(%rbp)
	jmp	.L190
.L191:
	movl	-436(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -436(%rbp)
	movl	-428(%rbp), %edx
	movslq	%edx, %rdx
	movl	-416(%rbp,%rdx,4), %edx
	cltq
	movl	%edx, -416(%rbp,%rax,4)
	addl	$1, -428(%rbp)
.L190:
	movl	-428(%rbp), %eax
	cmpl	-432(%rbp), %eax
	jl	.L191
	jmp	.L185
.L186:
	movl	-436(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -436(%rbp)
	movl	-432(%rbp), %edx
	movslq	%edx, %rdx
	movl	-416(%rbp,%rdx,4), %edx
	cltq
	movl	%edx, -416(%rbp,%rax,4)
	addl	$1, -432(%rbp)
.L185:
	movl	-444(%rbp), %eax
	cmpl	%eax, -432(%rbp)
	jl	.L192
	movl	-436(%rbp), %eax
	movl	%eax, -444(%rbp)
	leaq	.LC33(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	-444(%rbp), %edx
	leaq	-416(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L193
	call	__stack_chk_fail@PLT
.L193:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	task6_2_11, .-task6_2_11
	.section	.rodata
	.align 8
.LC49:
	.base64	"CtCy0YvQv9C+0LvQvdC10L3QuNC1INC60L7QtNCwIGxhYjYuMgA="
	.align 8
.LC50:
	.base64	"MSAtIDYuMi43ICjQlNC+0LHQsNCy0LjRgtGMINCyINC90LDRh9Cw0LvQviDRjdC70LXQvNC10L3Rgiwg0YDQsNCy0L3Ri9C5INC80LjQvdC40LzQsNC70YzQvdC+0LzRgykA"
	.align 8
.LC51:
	.base64	"MiAtIDYuMi44ICjQo9C00LDQu9C40YLRjCDQstGB0LUg0Y3Qu9C10LzQtdC90YLRiyDQvNC10L3RjNGI0LUgNCkA"
.LC52:
	.string	"3 - 6.2.9"
.LC53:
	.string	"4 - 6.2.10"
.LC54:
	.string	"5 - 6.2.11"
	.align 8
.LC55:
	.base64	"NiAtIDYuMi4xMiAo0LDRgdGB0LXQvNCx0LvQtdGA0L3Ri9C5INC60L7QtCkA"
.LC56:
	.base64	"0JLRi9GF0L7QtCDQuNC3IGxhYjYuMgA="
	.text
	.globl	lab_6_2
	.type	lab_6_2, @function
lab_6_2:
.LFB13:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
.L200:
	leaq	.LC49(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC36(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC50(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC51(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC52(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC53(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC54(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC55(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC43(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$10, %edi
	call	putchar@PLT
	leaq	-12(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-12(%rbp), %eax
	cmpl	$3, %eax
	je	.L195
	cmpl	$3, %eax
	jg	.L196
	cmpl	$2, %eax
	je	.L197
	cmpl	$2, %eax
	jg	.L196
	testl	%eax, %eax
	je	.L198
	cmpl	$1, %eax
	jne	.L196
	call	task6_2_7
	jmp	.L199
.L197:
	call	task6_2_8
	jmp	.L199
.L195:
	call	task6_2_9
	jmp	.L199
.L198:
	leaq	.LC56(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L199
.L196:
	leaq	.LC32(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	nop
.L199:
	movl	-12(%rbp), %eax
	testl	%eax, %eax
	jne	.L200
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L201
	call	__stack_chk_fail@PLT
.L201:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	lab_6_2, .-lab_6_2
	.section	.rodata
.LC57:
	.base64	"0JLRi9Cx0LXRgNC40YLQtSDQu9Cw0LHRgzoA"
.LC58:
	.base64	"MSAtINC70LDQsV82LjEA"
.LC59:
	.base64	"MiAtINC70LDQsV82LjIA"
	.align 8
.LC60:
	.base64	"0JLRi9GF0L7QtCDQuNC3INC/0YDQvtCz0YDQsNC80LzRiy4A"
	.align 8
.LC61:
	.base64	"0J3QtdCy0LXRgNC90YvQuSDQstGL0LHQvtGAISDQn9C+0L/RgNC+0LHRg9C50YLQtSDRgdC90L7QstCwLgA="
	.text
	.globl	main
	.type	main, @function
main:
.LFB14:
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
	movl	$33, -20(%rbp)
	movl	$13, -16(%rbp)
	movl	$8, -12(%rbp)
.L207:
	leaq	.LC57(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC58(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC59(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC43(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	-24(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-24(%rbp), %eax
	cmpl	$2, %eax
	je	.L203
	cmpl	$2, %eax
	jg	.L204
	testl	%eax, %eax
	je	.L205
	cmpl	$1, %eax
	jne	.L204
	call	lab_6_1
	jmp	.L206
.L203:
	call	lab_6_2
	jmp	.L206
.L205:
	leaq	.LC60(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L206
.L204:
	leaq	.LC61(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	nop
.L206:
	movl	-24(%rbp), %eax
	testl	%eax, %eax
	jne	.L207
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L209
	call	__stack_chk_fail@PLT
.L209:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	main, .-main
	.ident	"GCC: (GNU) 16.2.1 20260810"
	.section	.note.GNU-stack,"",@progbits
