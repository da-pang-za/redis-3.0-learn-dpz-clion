#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sds.h"

//sds内存预分配
void testSDSRoomAlloc() {
    sds s = sdscat(sdsempty(), "Redis");

    printf("s: %s\n", s);

    sdscat(s, " Cluster");
    printf("s: %s\n", s);
    printf("avail length:%d", sdsavail(s));//13

}

//c语言字符串& sds
void testCstr() {
    sds s = sdscat(sdsempty(), "Redis");
    s[6] = '@';
    for (int i = 0; i < 10; ++i) {
        printf("s: %c\n", s[i]);

    }
    printf("s: %s\n", s);


}


int fun(int x ,int *p) {
    printf("this is a function!\n");
    printf("x=%d\n",x);
    printf("y=%d\n",*p);
    printf("x+y=%d\n",x+*p);
    return x+*p;
}

void testFunctionPointer() {
    int (*fp) (int ,int *);//声明一个函数指针  参数为最右侧括号内   返回值为最左左侧
    fp=fun;
    int x=2;int y=3;int *p=&y;
    fp(x,p);

}

int main(void) {

    testFunctionPointer();
    return 0;

}

