#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
        int a, b;
        check(int a, int b);
}

check(int a, int b) {
        pushq   %rbp
        movq    %rsp, %rbp
        movl    %edi, -36(%rbp)
        movl    %esi, -40(%rbp)
        movl    -36(%rbp), %eax
        xorl    -40(%rbp), %eax
        movl    %eax, -4(%rbp)
        movl    -4(%rbp), %eax
        addl    $98, %eax
        movl    %eax, -8(%rbp)
        movl    -8(%rbp), %eax
        notl    %eax
        movl    %eax, %edx
        movl    -40(%rbp), %eax
        addl    %edx, %eax
        movl    %eax, -12(%rbp)
        movl    -12(%rbp), %eax
        xorl    -36(%rbp), %eax
        movl    %eax, -16(%rbp)
        movl    -40(%rbp), %eax
        imull   -4(%rbp), %eax
        cltd
        idivl   -8(%rbp)
        movl    %eax, %edx
        movl    -36(%rbp), %eax
        leal    (%rdx,%rax), %ecx
        movl    -12(%rbp), %edx
        movl    -16(%rbp), %eax
        addl    %edx, %eax
        xorl    %ecx, %eax
        movl    %eax, -20(%rbp)
        cmpl    $-814, -20(%rbp)
        sete    %al
        popq    %rbp
        ret
}