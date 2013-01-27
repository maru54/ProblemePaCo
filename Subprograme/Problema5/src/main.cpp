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

int prim(int nr) {
    if(nr==1) {
        return 1;
    }
    int prim = 1, i=2;
    while(i<=sqrt(nr) && prim) {
        if(nr%i==0) {
            prim=0;
        }
        i++;
    }
    return prim;
}

void primElemColInd() {
    int nrElem;
    for(int i=0; i<m; i++) {
        nrElem=0;
        for(int j=0; j<n; j++) {
            if(prim(a[j][i])) {
                nrElem++;
            } else {
                j=n;        //Daca nu este prim j=n si trece la coloana urmatoare
            }
        }
        if(nrElem==n) {
            h++;
            ind[h]=i;
        }
    }
}

void afisareInd() {
    for(int i=0; i<=h; i++) {
        printf("%d ", ind[i]);
    }
}

int main() {
    freopen("date.in", "r", stdin);
    freopen("date.out", "w", stdout);
    citire();
    primElemColInd();
    afisareInd();
    return 0;
}
