//
// Created by 苏锦阳 on 2021/9/14.
//

#include "../../include/swap.h"
#include<iostream>
using namespace std;

int main(){

    cout << swap(1,2) << endl;


    return 0;
};


int swap(int a,int b){
    int tmp = 0;
    tmp = b;
    b = a;
    a = tmp;
    return a;
}

int Msj::MsjUser::handle() {

    return 0;
}
