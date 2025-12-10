#include <stdio.h>
int main() 
{
    int a[50], n, key, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    for (i = 0; i < n && a[i] != key; i++);
    if (i < n) printf("Found at %d", i);
    else printf("Not found");
    return 0;
}

