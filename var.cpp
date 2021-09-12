#include <iostream>
using namespace std;
#define pi 3.14159
#include <string>
//
// Created by backbook on 2021/9/11.
//


int main(){
    //变量类型 变量名 = 变量初始值
    int a = 10;


    cout<< "pi = "<< pi << endl;


    short  num1 = 32768;

    int size1 =  sizeof(num1);

    long LONG1 = 1313;
    long LONG2 = 1313;
    long  long LONG3 = 1313;

    //查看内存占用
    cout  << "size1占用内存大小:" << size1 << endl;
    cout  << "int占用内存大小:" << sizeof(int)<< endl;
    cout  << "long占用内存大小:" << sizeof(long)<< endl;



    const int b = 1;

//    int balance[] = {1000, 2, 3, 17, 50};
    int balance[10];

    cout << "a = " << a << endl;
    cout << "num1 = " << num1 << endl;


    cout << "b = " << b << endl;

    balance[1] = 1;
    printf(" init %d\n",balance[1]);



    //实型（浮点型）
    float f1 = 3.14f;
    double d1 = 3.14;
    cout << f1 << endl;
    cout << d1 << endl;
    float f2 = 3e2;
    float f3 = 3e-2;
    cout << "f2 = " << f2 << endl;
    cout << "f3 = " << f3 << endl;



    //字符型变量
    char ch = 'b';
    //错误的方式
    //char ch = "a";
    //char ch = 'aadasda'
    cout << "ch = " << ch << endl;
    cout << "ch = " << (int)ch << endl;
    cout << "sizeof(ch) = " << sizeof(ch) << endl;



    //c风格
    char chc[] = "你好世界";
    cout << "chc = "<< chc << endl;
    //c++
    string  str1 = "你好世界";
    cout << "str1 = "<< str1 << endl;


    bool flag = false;

    if (false){
        cout << "这是真" <<endl;
    } else{
        cout << "这是假" <<endl;
    }

    //赋值
    int t = 0;
    cout << "请输入整型：" << endl;
    cin >> t;
    cout << "t："<< t << endl;


//    system("pause");


    return 0;
}