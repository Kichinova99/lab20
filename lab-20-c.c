#include <stdlib.h>
#include <stdio.h>
int main()
{
        int sum = 1770;
        int hc = 31;
        int bc = 21;
        int max_b = sum / bc;
        printf("%s %s\n", "Horse", "Bull");
        for (int n = max_b; n >= 0; n--){
                int pb = n * bc;
                int pan = sum - pb;
                int ph = pan / hc;
                if (pan % hc != 0) continue;
                printf("%d %d\n", ph, n);
        }
}

