#include<stdio.h>
int a[100][100], n, m, ind[100], h;
void citire() {
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
}

void minParElemLinesInd() {
    int min, nrPare;
    for(int i=0; i<n; i++) {
        nrPare = 0;
        for(int j=0; j<m; j++) {
            if(a[i][j]%2==0) {
                nrPare++;
            }
        }
        if(nrPare<min || i==0) {        //Conditia i==0 este pentru a initializa min cu numarul de elemente pare de pe prima linie
            min = nrPare;
            h=0;
            ind[h] = i;
        } else if(nrPare==min) {
            h++;
            ind[h] = i;
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
    minParElemLinesInd();
    afisareInd();
    return 0;
}
