#include <stdio.h>
int main() {
    int m,n;
    int A[10][10];
    printf("Enter size of matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the %dx%d matrix:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n/ 2; j++) {
            int temp = A[i][j];
            A[i][j] = A[i][m - 1 - j];
            A[i][n - 1 - j] = temp;
        }
    }
    printf("Matrix after rotation:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
