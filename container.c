#include <stdio.h>
int maxArea(int* height, int heightSize) {
    int max_area = 0;
    int left = 0;
    int right = heightSize - 1;
    while (left < right) {
        int current_area = (right - left) * (height[left] < height[right] ? height[left] : height[right]);
        if (current_area > max_area)
            max_area = current_area;
        if (height[left] < height[right])
            left++;
        else
            right--;
    }
    return max_area;
}
int main() {
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int heightSize = sizeof(height) / sizeof(height[0]);
    int max_area = maxArea(height, heightSize);
    printf("Maximum area: %d\n", max_area);
    return 0;
}