//
// Created by 苏锦阳 on 2021/9/18.
//
#include <iostream>
#include "../include/PointTest.h"
using namespace std;

int  main(){

    int a = 100;
    cout<< a << endl;
    char str[20] = "c.biancheng.net";
    int * p;
    p = &a;
//    int *p  = &a;
    printf("%#X, %#X\n", &a, str);
    cout << *p <<endl;
    printf("%d\n",*p);

    int p1 = 1;
    int p2 = p1;
    printf("%#X, %#X\n", &p1, &p2);
    int *p_1 = &p1;
    int *p_2 = &p2;
    printf("%d, %d\n", *p_1, *p_2);
    int* j = &a;
    *j = 100;
    printf("%d\n",*j);



    int    a1 = 10,   *pa = &a1, *paa = &a1;
    double b = 99.9, *pb = &b;
    char   c = 'a',  *pc = &c;
    //最初的值
    printf("&a1=%#X, &b=%#X, &c=%#X\n", &a1, &b, &c);
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    printf("pa=%d, pb=%f, pc=%c\n", *pa, *pb, *pc);
    //加法运算
//    pa++; pb++; pc++;
    *pa++ ; *pb++; *pc++;
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    printf("pa=%d, pb=%f, pc=%c\n", *pa, *pb, *pc);


    return 0;

}



