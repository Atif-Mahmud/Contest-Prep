#ifndef CCC_17S1_H
#define CCC_17S1_H

#include <iostream>

using namespace std;

class _17s1{
    int N, K, i;
    int t1, t2;
    void run(){
        ios::sync_with_stdio(false);

        cin >> N;

        int x[N+1], y[N+1];

        for(i = 0; i < N; i++)
            cin >> x[i];
        for(i = 0; i < N; i++)
            cin >> y[i];

        for(i = 0; i<N; i++){
            if((t1 += x[i])==(t2+=y[i]))
                K = i+1;
        }
        cout << K;
    }
};
#endif //CCC_17S1_H
