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

//c语言字符串
void testCstr() {
    sds s = sdscat(sdsempty(), "Redis");
    s[6] = '@';
    for (int i = 0; i < 10; ++i) {
        printf("s: %c\n", s[i]);

    }
    printf("s: %s\n", s);


}

/**
 *
 * @return
 */

void testPointer() {

    void *pointer1;
    int *pointer2;
    double *pointer3;
    double k=2.2;
    pointer3=&k;
    printf("%lu\n",pointer3);//指针本身的值  即对象的地址

    printf("%lf\n",*pointer3);//对象值
    printf("%lf\n",k);

    printf("%lu\n", sizeof(pointer1));
    printf("%lu\n", sizeof(pointer2));
    printf("%lu\n", sizeof(pointer3));

}

int main(void) {
    testPointer();

    return 0;

}

