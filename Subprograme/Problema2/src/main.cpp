#include<stdio.h>
int a[100][100][100], m, n, kc;
void citire() {
    scanf("%d%d%d", &n, &m, &kc);
    for(int k=0; k<kc; k++) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                scanf("%d", &a[i][j][k]);
            }
        }
    }
}

int matrPoz() {
    int elemPoz, matrPoz = 0;

    for(int k=0; k<kc; k++) {
        for(int i=0; i<n; i++) {
            elemPoz = 0;
            for(int j=0; j<m; j++) {
                if(a[i][j][k]>=0) {
                    elemPoz++;
                }else{
                    j=m;
                }
            }
            if(elemPoz==m) {
                matrPoz++;
                i=n;
            }
        }
    }

    return matrPoz;
}

int matrProg() {
    int matrProg = 0, d, nrElem;
    for(int k=0; k<kc; k++) {
        for(int i=0; i<n; i++) {
            d=a[i][1][k]-a[i][0][k];
            nrElem = 0;
            for(int j=2; j<m; j++) {
                if(a[i][j][k]-a[i][j-1][k]==d) {
                    nrElem++;
                }
            }
            if(nrElem==m-2) {
                matrProg++;
                i=n;
            }
        }
    }
    return matrProg;
}

int matrCresc() {
    int matrCresc = 0, nrElem;
    for(int k=0; k<kc; k++) {
        for(int i=0; i<n; i++) {
            nrElem = 0;
            for(int j=1; j<m; j++) {
                if(a[i][j][k]>a[i][j-1][k]) {
                    nrElem++;
                }
            }
            if(nrElem==m-1) {
                matrCresc++;
                i=n;
            }
        }
    }
    return matrCresc;
}

int main() {
    freopen("date.in", "r", stdin);
    freopen("date.out", "w", stdout);
    citire();
    printf("%d %d %d", matrPoz(), matrProg(), matrCresc());
    return 0;
}
