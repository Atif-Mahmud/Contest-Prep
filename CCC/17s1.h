#ifndef CCC_17S1_H
#define CCC_17S1_H

#include <iostream>
#include <array>

using namespace std;

class _17s1{
public:
    void run(){
        ios::sync_with_stdio(false);

        int numGames, A, sum1, sum2;
        sum1 = 0;
        sum2 = 0;
        A = 0;
        cin >> numGames;

        int team1 [numGames], team2 [numGames];

        for(int i = 0; i < numGames; i++){
            cin >> team1[i];
        }
        for(int i = 0; i < numGames; i++){
            cin >> team2[i];
        }

        for(int i = 0; i < numGames; ++i){

            sum1 += team1[i];
            sum2 += team2[i];

            if(sum1 == sum2){
                A = i + 1;
            }

        }

        cout << A;
    }
};
#endif //CCC_17S1_H
