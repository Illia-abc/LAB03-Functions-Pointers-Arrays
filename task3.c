#include <stdio.h>
#include <math.h>

int main()
{
    /* мої дані: група 79, варіант 2, курс 4 */
    double group = 79;
    double variant = 2;
    double course = 4;
    int i;

    /* значення після обчислень із завдання 1 */
    double sum = group + variant + course;          /* 85 */
    double product = group * variant * course;      /* 632 */
    double result = sin(sum);                       /* синус суми, бо варіант парний */

    /* масив у скороченому оголошенні: 1, 2 і три нові значення */
    double arr[] = {1, 2, sum, product, result};

    printf("Array before changes: [");
    for (i = 0; i < 5; i++)
    {
        printf("%g ", arr[i]);
    }
    printf("]\n");

    /* замість 1 і 2 записуємо номер групи і курсу */
    arr[0] = group;
    arr[1] = course;

    /* додаємо номер варіанта до кожного елемента */
    for (i = 0; i < 5; i++)
    {
        arr[i] = arr[i] + variant;
    }

    printf("Array after changes: [");
    for (i = 0; i < 5; i++)
    {
        printf("%g ", arr[i]);
    }
    printf("]\n");

    return 0;
}