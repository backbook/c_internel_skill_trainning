#include <iostream>
//
// Created by 苏锦阳 on 2021/9/13.
//
using namespace std;


int main(){

    time_t t = time(0);
    char timeChar[32] = {NULL};
    strftime(timeChar, sizeof(timeChar), "%Y-%m-%d %H:%M:%S", localtime(&t));
    string timeStr(timeChar);
    string xml("");
    string v6ip_ = "";

    string userip_ = "qweq::qweq";
    if (userip_.find(':') != string::npos) {
//        SRFLOG_DEBUG_P << userip_ << " " << userip_.size() << endl;
        v6ip_ = userip_;
        userip_ = "";
    }



     cout<<v6ip_<<endl;




    return 0;
}

