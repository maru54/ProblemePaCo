#include<stdio.h>
int n;

void afisare(int k) {
    printf("\n");
    if(k!=n+1) {
        for(int i=1; i<=k; i++) {
            printf("%d ", i);
        }
        afisare(k+1);
    }
}

int main() {
    scanf("%d", &n);
    afisare(1);
    return 0;
}
