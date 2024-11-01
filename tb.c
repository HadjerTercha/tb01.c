include<stdio.h>
int main(){
int M[4][5] = {{1, 2, 3, 4, 5},
               {9, 7, 8, 6, 5},
               {5, 6, p, n, 8},
               {2, 9, t, m, k}};

for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
        printf("%d ", M[i][j]);
    }
    printf("\n");
}


for (int i = 0; i < 4; i += 2) { 
    for (int j = 0; j < 5; j++) {
        printf("%d ", M[i][j]);
    }
    printf("\n");
}

for (int i = 0; i < 4; i++) {
    for (int j = 1; j < 5; j += 2) { 
        printf("%d ", M[i][j]);
    }
    printf("\n");
}


}
