#include <stdio.h>
void productExceptSelf(int nums[], int n, int result[]) {
    for (int i = 0; i < n; i++) {
        result[i]=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                result[i]*=nums[j];
            }
            else
            continue;
        }
        }
    }
int main() {
    int nums[100]; 
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int result[n];
    productExceptSelf(nums, n, result);
    printf("Result array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}