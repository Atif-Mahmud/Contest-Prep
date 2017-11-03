#ifndef HACKEREARTH_BITMANIPULATION_H
#define HACKEREARTH_BITMANIPULATION_H
#include <iostream>

class BitManipulation{
public:
    void run(){
    }

private:


    //Traditional Method [O(logN)]:
    bool tradIsPowerOfTwo(int x){
        if(x==0)
            return false;
        else{
            while(x%2 == 0) x /= 2;
            return (x==1);
        }
    }

    bool isPowerOfTwo(int x) {
        //x && makes sure that it's non zero, !(x & (x-1)) returns 1 if it is a power of 2, and 0 if it's not. Backwards for efficiency.
        return (x && !(x & (x - 1)));
    }
};
#endif //HACKEREARTH_BITMANIPULATION_H
