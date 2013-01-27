#include<stdio.h>
int n;

void afisare(int k) {
    printf("\n");
    if(k!=0) {
        for(int i=1; i<=k; i++) {
            printf("%d ", i);
        }
        afisare(k-1);
    }
}

int main() {
    scanf("%d", &n);
    afisare(n);
    return 0;
}
