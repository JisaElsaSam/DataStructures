#include <stdio.h>
int main() {
    int A[100];
    int n, target,f=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter the target: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] + A[j] == target) {
                printf("Indices: %d, %d\n", i, j);
                f=1;
            }
        }
    }
    if(f==0){
        printf("no indices found");
    }
    return 0;
}