#include<stdio.h>
int a[100][100], n;
void citire() {
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
}

void diagPrinc() {
    int suma = 0;
    for(int i=0; i<n-1; i++) {
        suma+=a[i][i];
        printf("%d+", a[i][i]);
    }
    //Am eliminat cazul n-1 din for pentru a nu afisa + dupa ultimul element al diagonalei
    suma+=a[n-1][n-1];
    printf("%d", a[n-1][n-1]);

    printf("=%d", suma);
}

void diagSec() {
    int suma=0;
    for(int i=0; i<n-1; i++) {
        suma+=a[i][n-1-i];
        printf("%d+", a[i][n-1-i]);
    }
    //Am eliminat cazul n-1 din for pentru a nu afisa + dupa ultimul element al diagonalei
    suma+=a[n-1][(n-1)-(n-1)];
    printf("%d", a[n-1][(n-1)-(n-1)]);

    printf("=%d", suma);
}

int main() {
    freopen("date.in", "r", stdin);
    freopen("date.out", "w", stdout);
    citire();
    diagPrinc();
    printf("\n");
    diagSec();
    return 0;
}
