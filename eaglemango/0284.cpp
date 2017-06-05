#include <stdio.h>

int n, m, i, j;
int main() {
    scanf("%d", &n);
    int a[n];
    for (; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &m);
    while (m--) {
        scanf("%d%d", &i, &j);
        for (int k = i-1; k < j; k++) printf("%d ", a[k]);
        printf("\n");
    }
}
