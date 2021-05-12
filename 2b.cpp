//
//  main.cpp
//  0513205_2b.cpp
//
//  Created by Judy Ou on 2017/4/3.
//  Copyright © 2017年 Judy Ou. All rights reserved.
//

#include <iostream>

using namespace std;
int main()
{
    int count;
    for(count=1;count<=100;count++)
    {
        if(count%3==0||count%7==0)
            continue;
        cout<<count<<" ";
    }
}
