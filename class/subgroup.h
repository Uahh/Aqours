//
// Created by Uahh on 2019-11-07.
//

#ifndef AQOURS_SUBGROUP_H
#define AQOURS_SUBGROUP_H

#include "../common.h"
#include "idol.h"

using namespace std;

class Subgroup
{
public:
    //Subgroup() = default;
    Subgroup(Idol &a,  Idol &b, Idol &c) : member_1(a), member_2(b), member_3(c) {};
private:
    Idol member_1;
    Idol member_2;
    Idol member_3;
public:
    Idol get_member(int num)
    {
        if(num == 1)
            return member_1;
        else if(num == 2)
            return member_2;
        else
            return member_3;
    }
};



#endif //AQOURS_SUBGROUP_H
