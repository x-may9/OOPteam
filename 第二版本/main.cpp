// main.cpp
#include "Accout.h"

//测试函数，初始化这两层链表
Accout create(){
    //第二层链表第一个
    Data datas1[]{
        {"那维莱特", 70},
        {"甘雨", 143},
        {"芙宁娜", 2},
    };
    int n = sizeof(datas1) / sizeof(*datas1);
    Hero hero1(n,datas1);

    //第二层链表第二个
    Data datas2[]{
        {"那维莱特", 122},
        {"阿蕾奇诺", 89},
        {"娜维娅", 72},
        {"纳西妲",36},
        {"流浪者",110}
    };
    n = sizeof(datas2) / sizeof(*datas2);
    Hero hero2(n,datas2);

    //第二层链表第三个
    Data datas3[]{
        {"芙宁娜", 12},
        {"夜兰", 66},
        {"宵宫", 119},
        {"胡桃",88},
        {"枫原万叶",36},
        {"玛拉妮",155}
    };
    n = sizeof(datas3) / sizeof(*datas3);
    Hero hero3(n,datas3);

    //第二层链表第四个
        Data datas4[]{
        {"芙宁娜", 22},
        {"纳西妲", 55},
        {"林尼", 136},
        {"白术",133},
    };
    n = sizeof(datas4) / sizeof(*datas4);
    Hero hero4(n,datas4); 

//第一层链表
    AccoutData datas[]{
        {hero1,196026632},
        {hero2,304929684},
        {hero3,225318414},
        //{hero3,197567333},
        {hero4,167033637}
    };
    n=sizeof(datas)/sizeof(*datas);
    Accout accout(datas,n);
    return accout;
}

int main() {
//9.17
    Accout accout=create();
    accout.showAccoutList();
    return 0;
//9.15
    // 构建Data数组
    /*
    Data datas[] = {
        {"那维莱特", 70},
        {"甘雨", 143},
        {"芙宁娜", 2},
    };
    int n = sizeof(datas) / sizeof(*datas);


    Hero hero1(n, datas);
    hero1.showList();
    */
    // append的调试
    /*
    string name;
    cin >> name;
    int stone;
    cin >> stone;
    Data data{name, stone};
    hero1.append(data);
    hero1.showList();
    */
   /*
    hero1.heronums();
    // find的调试
    hero1.find("甘雨");
    */

}