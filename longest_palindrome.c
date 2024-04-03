#include <stdio.h>
#include <string.h>
int is_palindrome(char s[], int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
void longest_palindromic_substring(char s[], char *result) {
    int max_len = 0;
    int start_index = 0;
    int length = strlen(s);
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            if (is_palindrome(s, i, j) && j - i + 1 > max_len) {
                max_len = j - i + 1;
                start_index = i;
            }
        }
    }
    strncpy(result, s + start_index, max_len);
    result[max_len] = '\0';
}
int main() {
    char s[100];
    char result[100];
    printf("Enter a string: ");
    scanf("%s", s);
    longest_palindromic_substring(s, result);
    printf("Longest palindromic substring: %s\n", result);
    return 0;
}