//
// Created by 大胖子 on 2021/9/11.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



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

