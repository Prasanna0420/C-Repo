#include <stdio.h>
int main() {
    int start, end;
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        if (i < end) {
            printf("%d ", i);
        } else {
            printf("%d", i);
        }
    }
}