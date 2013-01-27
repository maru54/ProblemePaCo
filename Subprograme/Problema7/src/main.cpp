#include<stdio.h>
int a[100][100], n, m;
void citire() {
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
}

int cons(int i) {
    for(int j=2; j<m; j++) {
        if(a[i][j]==a[i][j-1] && a[i][j-1]==a[i][j-2] && a[i][j]==1) {
            return 1;
        }
    }
    return 0;
}

int sumElemCol(int j) {
    int s=0;
    for(int i=0; i<n; i++) {
        s+=a[i][j];
    }
    return s;
}

int main() {
    freopen("date.in", "r", stdin);
    freopen("date.out", "w", stdout);
    citire();
    for(int i=0; i<n; i++) {
        if(cons(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    for(int j=0; j<m; j++) {
        if(sumElemCol(j)>n/2) {
            printf("%d ", j);
        }
    }
    return 0;
}
