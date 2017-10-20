
#ifndef CCC_96S1_H
#define CCC_96S1_H

#include <iostream>

class _96s1{
    public:
        void run() {
            int T, n, i, sum;
            scanf("%d", &T);
            while (T--) {
                scanf("%d", &n);
                sum = 0;
                for (i = 1; i < n; i++)
                    if (n % i == 0)
                        sum += i;
                printf("%d is a", n);
                if (sum < n)
                    printf(" deficient ");
                else if (sum == n)
                    printf(" perfect ");
                else
                    printf("n abundant ");
                printf("number.\n\n");
            }
        }
};
#endif //CCC_96S1_H
