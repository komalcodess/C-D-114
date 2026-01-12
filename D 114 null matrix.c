#include <stdio.h>

int main() {
    int r, c, i, j;
    int flag = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);

            if(a[i][j] != 0) {
                flag = 0;
            }
        }
    }

    if(flag == 1) {
        printf("Matrix is a Null Matrix\n");
    } else {
        printf("Matrix is NOT a Null Matrix\n");
    }

    return 0;
}
