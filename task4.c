#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    int i;
    int tmp;

    printf("Enter the array size N: ");
    scanf("%d", &n);

    int arr[n];          /* масив розміром N */
    int *ptr;            /* вказівник для проходу по масиву */
    int *min_ptr;        /* адреса мінімального елемента */
    int *max_ptr;        /* адреса максимального елемента */

    srand(time(NULL));

    /* заповнюємо масив випадковими числами (без arr[i]) */
    ptr = arr;
    for (i = 0; i < n; i++)
    {
        *(ptr + i) = rand() % 100;
    }

    /* 1. виводимо початковий масив і адреси */
    printf("\n=== 1. Initial array ===\n");
    ptr = arr;
    for (i = 0; i < n; i++)
    {
        printf("Element %d: value = %d | address = %p\n", i, *ptr, (void *)ptr);
        ptr++;
    }

    /* шукаємо мінімум і максимум */
    min_ptr = arr;
    max_ptr = arr;
    ptr = arr;
    for (i = 0; i < n; i++)
    {
        if (*ptr < *min_ptr)
        {
            min_ptr = ptr;
        }
        if (*ptr > *max_ptr)
        {
            max_ptr = ptr;
        }
        ptr++;
    }

    /* 2. виводимо результати пошуку */
    printf("\n=== 2. Search results ===\n");
    printf("Minimum element: value = %d | address = %p\n", *min_ptr, (void *)min_ptr);
    printf("Maximum element: value = %d | address = %p\n", *max_ptr, (void *)max_ptr);

    /* міняємо місцями мінімум і максимум */
    tmp = *min_ptr;
    *min_ptr = *max_ptr;
    *max_ptr = tmp;

    /* 3. виводимо масив після обміну */
    printf("\n=== 3. The resulting array after the swap ===\n");
    ptr = arr;
    for (i = 0; i < n; i++)
    {
        printf("Element %d: value = %d | address = %p\n", i, *ptr, (void *)ptr);
        ptr++;
    }

    return 0;
}