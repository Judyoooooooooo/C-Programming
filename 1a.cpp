//
//  main.cpp
//  0513205_1a.cpp
//
//  Created by Judy Ou on 2017/4/3.
//  Copyright © 2017年 Judy Ou. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a five-digit number: ";
    cin >> num;
        
    cout << num / 10000 <<endl;
    num = num % 10000;
    cout << num /1000 <<endl;
    num = num % 1000;
    cout << num /100 <<endl;
    num = num % 100;
    cout << num /10 <<endl;
    num = num % 10;
    cout << num << endl;
    return 0;
}
