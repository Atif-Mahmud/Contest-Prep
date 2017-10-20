#ifndef CCC_17S2_H
#define CCC_17S2_H
#include <iostream>
#include <algorithm>

using namespace std;

class _17s2{
public:
    int N, i;
    void run(){
        ios::sync_with_stdio(false);

        cin >> N;
        int l[N];

        for(i = 0; i < N; i ++){
            cin >> l[i];
        }

        sort(l, l+N);

        int low=(N-1)/2, high=low+1;
        for(i = 0; i < N; i ++){
            if(i%2==0)
                cout << l[low--] << " ";
            else
                cout << l[high++] << " ";
        }
    }
};
#endif //CCC_17S2_H
