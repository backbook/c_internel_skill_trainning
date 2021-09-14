//
// Created by backbook on 2021/9/11.
//
#include <iostream>
#include <map>
using namespace std;

#define READ_INT(to, name, var)\
  do {\
      to.var = atoll(itemMap[name].c_str()); \
  }while(0)


#define _INT(name, data) \
  READ_INT(cmdData, name, data)

#define TRAN_INT(x)  _INT(#x,x);

class BaseData {
public:
    map <string, string> itemMap;  //xml item 数据的kv 格式
    map <string, string> extMap;
};


class CLICK_DATA : public BaseData {
public:
    uint64_t qq;
    uint32_t cmd;
    string userip;
    uint64_t uuid;
    string udid;
    uint32_t ver;
    uint32_t os_type;
    string channelid;
    string openudid;
    string openudid2;
    string os_ver;
    string did;
    uint32_t skinid;

    int64_t int1;
    int64_t int2;
    int64_t int3;
    int64_t int4;
    int64_t int5;
    int64_t int6;
    int64_t int7;
    int64_t int8;
    int64_t int9;
    int64_t int10;
    int64_t int11;
    int64_t int12;
    int64_t int13;
    int64_t int14;
    int64_t int15;
    int64_t int16;
    int64_t int17;
    int64_t int18;
    int64_t int19;
    int64_t int20;
    int64_t optime;
    string str1;
    string str2;
    string str3;
    string str4;
    string str5;
    string str6;
    string str7;
    string str8;
    string str9;
    string str10;
    string str11;
    string str12;
    string str13;
    string str14;
    string str15;
    string str16;
    string str17;
    string str18;
    string str19;
    string str20;
    string rom;
    string abt;
    string trace;
    string hotfix;
    string debugstr;
    string tid;
    string devicelevel;
    string tjreport;
    int songid;
    string cache;
    string ext;
    string aid;
    string qimei;
    string oaid;
    string vaid;
    string aaid;
    string v6ip;

    string topicid;
    string groupid;

    string nettype;//Austinlu add
    //灯塔36位 QIMEI36
    string qimei36;
    //灯塔36位 phoenix_str
    string phoenix_str;
    //20210111 http://tapd.oa.com/QQ_Music_Data_Management/prong/stories/view/1020425811862037277?jump_count=1
    int64_t pic_preview_cnt;
    int64_t pic_preview_duration;

    string toStr() const;

    CLICK_DATA();
};

int main() {

    CLICK_DATA cmdData;
    map itemMap = map<string,string>();

    TRAN_INT(int2);

}
