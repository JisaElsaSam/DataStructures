#include <stdio.h>
#include <stdbool.h>
int longestSubstringLength(char* s) {
    int char_index[128] = {0};
    int max_length = 0, start = 0;
    for (int end = 0; s[end]; end++) {
        start = (char_index[s[end]] > start) ? char_index[s[end]] : start;
        char_index[s[end]] = end + 1;
        max_length = (max_length > end - start + 1) ? max_length : end - start + 1;
    }
    return max_length;
}
int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
printf("Length of the longest substring without repeating characters: %d\n", longestSubstringLength(s));
    return 0;
}