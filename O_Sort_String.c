#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    if (scanf("%d", &N) != 1 || N < 1) {
        return 1;
    }
char *S = (char *)malloc((N + 1) * sizeof(char));
    if (S == NULL) {
        return 1;
    }

if (scanf("%s", S) != 1) {
        free(S);
        return 1;
    }
int len = 0;
    while (S[len] != '\0') {
        len++;
    }
if (len != N) {
        free(S);
        return 1;
    }
    for (int i = 0; i < N; i++) {
        if (S[i] < 'a' || S[i] > 'z') {
            free(S);
            return 1;
        }
    }
 int freq[26] = {0};
    for (int i = 0; i < N; i++) {
        freq[S[i] - 'a']++;
    }
    int index = 0;
    for (char c = 'a'; c <= 'z'; c++) {
        for (int j = 0; j < freq[c - 'a']; j++) {
            S[index++] = c;
        }
    }
    S[index] = '\0';

    printf("%s\n", S);
    free(S);
    return 0;
}
