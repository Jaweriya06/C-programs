#include <stdio.h>

void bubbleSort(int a[], int n) {
    int i, j, t;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
            }
}

int main() {
    int a[50], n, key, i, low, high, mid, s = -1, l = -1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    bubbleSort(a, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nEnter key: ");
    scanf("%d", &key);
low = 0; high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            printf("Found at index %d", mid);
            return 0;
        } else if (a[mid] < key) {
            s = a[mid];
            low = mid + 1;
        } else {
            l = a[mid];
            high = mid - 1;
        }
    }

    printf("Not found\n");
    if (s != -1) printf("Smaller: %d\n", s);
    if (l != -1) printf("Larger: %d\n", l);

    return 0;
}