//
// Created by Uahh on 2019-11-05.
//

#ifndef AQOURS_IDOL_H
#define AQOURS_IDOL_H

#include "../common.h"

using namespace std;

class Idol
{
public:
    Idol() = default;
    Idol(const string &name) : roman_name(name) {};
    Idol(const string &name, const int &old) : roman_name(name), old(old), grade(old%14) {};
private:
    string ch_name;
    string jp_name;
    string roman_name;
    string nickname;
    mutable int old; // mutable 可变数据成员 即使是const函数也可以改变它的值
    int height;
    vector<int> three_dimensions;
    char blood_type;
    string place_of_birth;
    string school;
    int grade;
    string birther_day;
    string group;
    string subgroup;


public:
    string get_name(char c) const
    {
        switch (c)
        {
            case 'c':
                return ch_name;
            case 'j':
                return jp_name;
            case 'r':
                return roman_name;
            case 'n':
                return nickname;
        }
        return "";
    }

    int get_old() const
    {
        return old;
    };

    int get_grade() const
    {
        return grade;
    }
    vector<int> get_three_dimensions() const
    {
        return three_dimensions;
    }

public:
    void set_old_height(int a, int b)
    {
        old = a;
        height = b;
    }

    void set_three_dimensions(int a, int b, int c)
    {
        three_dimensions = {a, b, c};
    }

};

#endif //AQOURS_IDOL_H
