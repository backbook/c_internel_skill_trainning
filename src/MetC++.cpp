#include<iostream>
//
// Created by 苏锦阳 on 2021/9/13.

namespace COrigin{
    struct Student{
        //结构体包含的成员变量
        char *name;
        int age;
        float score;
    };

    void display(Student student){
        printf("%s的年龄是%d,成绩是%f\n",student.name,student.age,student.score);
    }
}

namespace CplusplusOrigin {
    class Student {
    public:
        char *name;
        int age;
        float score;

        void say() const {
            printf("%s的年龄是 %d，成绩是 %f\n", name, age, score);
        }


    };
}

int dis(int a,int b){
    printf("");
    return a+b;
}



int main(){

    struct COrigin::Student stu1{};
    //为结构体的成员变量赋值
    stu1.name = "小明";
    stu1.age = 15;
    stu1.score = 92.5;
    //调用函数
    COrigin::display(stu1);


    //通过类来定义变量，即创建对象
    class CplusplusOrigin::Student student{};  //也可以省略关键字class
    //为类的成员变量赋值
    student.name = "张女士";
    student.age = 32;
    student.score = 92.5f;
    //调用类的成员函数
    student.say();

    int c = dis(1,2);
    printf("%d",c);


    CplusplusOrigin::Student *stu = new CplusplusOrigin::Student;
    stu -> name = "李四";
    stu -> age = 20;
    stu -> score = 12;
    stu -> say();
    delete stu;

    return 0;
}