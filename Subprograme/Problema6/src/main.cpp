#include<stdio.h>
#include<math.h>
int a[100][100], n, m, ind[100], h=-1;
void citire() {
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
}

void afisareLinie(int i) {
    for(int j=0; j<m; j++) {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}

void linieCresc() {
    int nrElem;
    for(int i=0; i<n; i++) {
        nrElem = 0;
        for(int j=1; j<m; j++) {
            if(a[i][j]>a[i][j-1]) {
                nrElem++;
            }
        }
        if(nrElem==m-1) {
            afisareLinie(i);
        }
    }
}

int main() {
    freopen("date.in", "r", stdin);
    freopen("date.out", "w", stdout);
    citire();
    linieCresc();
    return 0;
}
