#ifndef CCC_17S3_H
#define CCC_17S3_H

#include <iostream>
#include <algorithm>

class _17s3{
public:
    int N, i, j, l;
    long a, b;
    long lengths[2001] = {};
    long sums[4001] = {};
    void run(){
        std::ios::sync_with_stdio(false);
        std::cin >> N;
        for(i = 0; i < N; i ++){
            std::cin >> l;
            lengths[l]++;
        }

        for (i = 1; i < 2001; i++){
            if(lengths[i]){
                for(j = i; j < 2001; j++){
                    if(i==j)
                        sums[i+j] += lengths[i] >> 1;
                    else if(lengths[j])
                        sums[i+j] += std::min(lengths[i], lengths[j]);
                }
            }
        }

        for(i = 0; i < 4001; i++){
            if(sums[i] > a){
                a = sums[i];
                b = 1;
            } else if (sums[i] == a){
                b++;
            }
        }
        std::cout << a << " " << b;
    }

private:
    void Atif(){
        /*
        int N, i,x, hi, lo, max = 0, ways = 0;
        bool nodupes = false;
        void run(){
            std::ios::sync_with_stdio(false);

            std::cin >> N;
            int l[N];

            for(i = 0; i < N; i ++){
                std::cin >> l[i];
            }

            std::sort(l, l+N);

            int s[4000] = {0};

            lo = 0; hi = N;
            for(i = 0; i < (N/2)+1; i++){
                int pwsum = l[lo++] + l[hi--];
                s[pwsum] ++;
                if (s[pwsum] > 1) nodupes = false;
            }

            if (nodupes){
                std::cout << 1 << " ";
                std::cout << f(N-1);
            } else {
                for(i = 0; i < 4001; i++){
                    if(s[i] > max){
                        max = s[i];
                        ways = 1; //Reset Number of Ways
                    } else if(s[i] == max){
                        ways ++; //Adds to the number of Ways
                    }
                }
            }
            std::cout << max << " " << ways;
        }

        int f(int n){
            if(n > 1){
                return n*f(n-1);
            } else {
                return 1;
            }
        }
        */
    }
};

#endif //CCC_17S3_H
