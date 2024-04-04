#include <stdio.h>
void mergeIntervals(int intervals[][2], int intervalsSize, int* returnSize) {
    if (intervalsSize <= 0) {
        *returnSize = 0;
        return;
    }
    for (int i = 0; i < intervalsSize - 1; i++) {
        for (int j = 0; j < intervalsSize - i - 1; j++) {
            if (intervals[j][0] > intervals[j + 1][0]) {
                int tempStart = intervals[j][0];
                int tempEnd = intervals[j][1];
                intervals[j][0] = intervals[j + 1][0];
                intervals[j][1] = intervals[j + 1][1];
                intervals[j + 1][0] = tempStart;
                intervals[j + 1][1] = tempEnd;
            }
        }
    }
    *returnSize = 1;
    for (int i = 1; i < intervalsSize; i++) {
        if (intervals[i][0] <= intervals[*returnSize - 1][1]) {
            intervals[*returnSize - 1][1] = (intervals[i][1] > intervals[*returnSize - 1][1]) ? intervals[i][1] : intervals[*returnSize - 1][1];
        } else {
            intervals[*returnSize][0] = intervals[i][0];
            intervals[*returnSize][1] = intervals[i][1];
            (*returnSize)++;
        }
    }
}
void printIntervals(int intervals[][2], int intervalsSize) {
    for (int i = 0; i < intervalsSize; i++) {
        printf("[%d, %d] ", intervals[i][0], intervals[i][1]);
    }
    printf("\n");
}
int main() {
    int intervalsSize;
    printf("Enter the number of intervals: ");
    scanf("%d", &intervalsSize);
    int intervals[intervalsSize][2];
    printf("Enter the intervals (start and end separated by space):\n");
    for (int i = 0; i < intervalsSize; i++) {
        scanf("%d %d", &intervals[i][0], &intervals[i][1]);
    }
    int returnSize;
    printf("Original intervals: ");
    printIntervals(intervals, intervalsSize);
    mergeIntervals(intervals, intervalsSize, &returnSize);
    printf("Merged intervals: ");
    printIntervals(intervals, returnSize);
    return 0;
}