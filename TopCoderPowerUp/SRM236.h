#ifndef TOPCODERPOWERUP_SRM236_H
#define TOPCODERPOWERUP_SRM236_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class SRM236 {
public:
    int N, i, val;
    void run(){
        ios::sync_with_stdio(false);
        vector<string> list;

        cin >> N;
        cin >> val;

        for(i=0; i < N; i++){
            string x;
            cin >> x;
            list.push_back(x);
        }

        int pos = 0;
        while(list.size() > 1){
            pos = (pos + val)%list.size();
            list.erase(list.begin()+pos);
            if(pos == list.size())
                pos = 0;
        }

        cout << *list.begin();
    }
};
#endif //TOPCODERPOWERUP_SRM236_H
