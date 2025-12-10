#include <stdio.h>
int main() 
{
    int a[100], n, key, low, high, mid, i;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter elements (sorted): ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter number to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high) 
    {
        mid = (low + high) / 2;

        if (a[mid] == key) 
        {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    printf("Element not found\n");
    return 0;
}

