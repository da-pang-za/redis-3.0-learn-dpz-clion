
//p150
//在命令行上使用 “-S” 选项，就能看到 C 语言编译器产生的汇编代码
//linux> gcc -Og -S mstore.c

//如果我们使用 “-C” 命令行选项，GCC 会编译并汇编该代码
//linux> gcc -Og -c mstore.c

//要查看机器代码文件的内容，有一类称为反汇编器（disassembler)的程序非常有用。
//这些程序根据机器代码产生一种类似于汇编代码的格式。在 Linux 系统中，带�d�命令行
//标志的程序 OBJDUMP(表示 “object dump� 可以充当这个角色
//linux> objdump -d mstore.o

//然后，我们用如下方法生成可执行文件 prog:
//linux> gcc -Og -o prog main.c mstore.c
//
//文件 prog 变成了 8 655 个字节，因为它不仅包含了两个过程的代码，还包含了用来启动和
//终止程序的代码，以及用来与操作系统交互的代码。我们也可以反汇编 prog 文件：
//linux> objdump -d prog

//我们用下面的命令行来启动 GDB:
//linux> gdb prog
//todo   学习cmakelists   把文件链接起来
long mult2(long, long);
void multstore(long x, long y, long *dest) {
    long t = mult2(x, y);
    *dest = t;
}