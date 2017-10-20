//
// Created by atifmahmud on 12/10/17.
//

#ifndef CODERBYTE_FACTORIAL_H
#define CODERBYTE_FACTORIAL_H

#include <iostream>

using namespace std;

class factorial{
    long n;
public:
    void run(){
        cin >> n;
        cout << f(n);
    }
private:
    int f(int num){
        int temp;
        if(num <= 1)
            return 1;
        else
            temp = num*f(num-1);
        return temp;
    }
};
#endif //CODERBYTE_FACTORIAL_H
