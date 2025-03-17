char* removeDuplicates(char* s) 
{
    int n = strlen(s);
    char* stack = malloc(sizeof(char) * (n + 1));
    int i = 0;
    for (int j = 0; j < n; j++) {
        char ch = s[j];
        if (i && stack[i - 1] == ch) {
            i--;
        } else {
            stack[i++] = ch;
        }
    }
    stack[i] = '\0';
    return stack;
}
