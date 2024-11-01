#include<stdio.h>
int main(){
int N[4][4] = {{1, 2, 3, 4},
               {5, 6, 7, 8},
               {9, 10, 11, 12},
               {13, 14, 15, 16}};

for (int i = 1; i < 4; i++) {
    for (int j = 0; j < i; j++) {
        int temp = N[i][j];
        N[i][j] = N[j][i];
        N[j][i] = temp;
    }
}
for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
        printf("%d ", N[i][j]);
    }
    printf("\n");
}
}
