#ifndef TOPCODERPOWERUP_SRM208_H
#define TOPCODERPOWERUP_SRM208_H

#include <iostream>
#include <vector>
#include <algorithm>

#define all(c) (c).begin(), (c).end()
#define tr(c, it) for(typeof((c).begin()) it = (c).begin(); it != (c).end(); it++)
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

using namespace std;

class SRM208 {
public:
    int i, j, x, rownum, columnnum;
    void run(){
        ios::sync_with_stdio(false);

        cin >> rownum;
        cin >> columnnum;

        vvi table;

        for(i = 0; i < rownum; ++i){
            vi items;
            for(j = 0; j < columnnum; ++j){
                cin >> x;
                items.push_back(x);
            }
            table.push_back(items);
        }

        cout << tos(table) << endl;
        cout << sot(table) << endl;
    }
private:
    int tos(vvi table){
        vi shortest;
        tr(table, row){
            shortest.push_back(*min_element(all(*row)));
        }
        return *max_element(all(shortest));
    }

    int sot(vvi table){
        vi tallest;
        for(i = 0; i < columnnum; ++i){
            vi column;
            tr(table, row){
                column.push_back(*(row->begin()+i));
            }
            tallest.push_back(*max_element(all(column)));
        }
        return *min_element(all(tallest));
    }
};

#endif //TOPCODERPOWERUP_SRM208_H
