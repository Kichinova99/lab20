#include <stdlib.h>
#include <stdio.h>
int main()
{
        int sum;
        printf("Vvedite summu v kopeykah: ");
        scanf("%d", &sum);

        int k2 = 2;
        int k5 = 5;
        int k10 = 10;
        int max_k2 = sum / k2;

        for (int nk2 = 0; nk2 <= max_k2; nk2++){
                int pk2 = nk2 * k2;
                int max_k5 = (sum - pk2) / k5;
                for (int nk5 = 0; nk5 <= max_k5; nk5++){
                        int pk5 = nk5 * k5;
                        int pk = sum - pk2 - pk5;
                        int pk10 = pk / k10;
                        if (pk % k10 != 0) continue;
                        printf("%d %d %d\n", nk2, nk5, pk10);
                }
        }
}
