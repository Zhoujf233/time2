//
//  main.cpp
//  Time2
//
//  Created by JF Zhou on 2019/8/2.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <iostream>
using namespace std;

class Time
{
public:
    Time(int,int,int);
    int hour;
    int minute;
    int sec;
};

Time::Time(int h,int m,int s):hour(h),minute(m),sec(s){}

void fun(Time &t)
{
    t.hour = 18;
}

int main(int argc, const char * argv[])
{
    Time t1(10,13,56);
    fun(t1);
    cout <<t1.hour<<endl;
    return 0;
}
