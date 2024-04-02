#include <stdio.h>
#include <stdbool.h>
bool isValid(char* s) {
    char stack[100]; 
    int top = -1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            stack[++top] = s[i];
        else if (top == -1 || 
                 (s[i] == ')' && stack[top--] != '(') ||
                 (s[i] == '}' && stack[top--] != '{') ||
                 (s[i] == ']' && stack[top--] != '['))
            return false;
    }
    return top == -1;
}
int main() {
    char s[100];
    printf("Enter a string containing only '(', ')', '{', '}', '[', and ']': ");
    scanf("%s", s);
    if (isValid(s))
        printf("The input string is valid.\n");
    else
        printf("The input string is not valid.\n");
    return 0;
}