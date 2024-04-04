#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
void groupAnagrams(char strs[][MAX_LENGTH], int strsSize) {
    for (int i = 0; i < strsSize; i++) {
        sortString(strs[i]);
        printf("%s ", strs[i]);
    }
}
int main() {
    int strsSize;
    printf("Enter the number of strings: ");
    scanf("%d", &strsSize);
    char strs[strsSize][MAX_LENGTH];
    printf("Enter the strings:\n");
    for (int i = 0; i < strsSize; i++) {
        scanf("%s", strs[i]);
    }
    printf("Grouped Anagrams:\n");
    groupAnagrams(strs, strsSize);
    return 0;
}
