#include <stdlib.h>
#include <stdio.h>
int main()
{
        int num = 64; //na otsenku 3
        int lg = 2;
        int lr = 4;
        int max_g = num / lg;

        for (int ng = 0; ng <= max_g; ng++){
                int pg = ng * lg;
                int pf = num - pg;
                int nr = pf / lr;

                if (pf % lr != 0) continue;
                printf("%d %d\n", ng, nr);
        }
}
