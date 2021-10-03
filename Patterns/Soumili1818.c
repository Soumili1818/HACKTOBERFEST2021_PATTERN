#include <stdio.h>
void AdjTrianglePtt(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 2 * (n - i); j >= 0; j--) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the Number of Rows: \n");
    scanf("%d", &n);

    printf("\n");
    AdjTrianglePtt(n);
    return 0;
}
