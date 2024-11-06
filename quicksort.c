#include <stdio.h>

int partition(int a[], int low, int high)
{

    int piviot = a[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (a[i] <= piviot)
        {
            i++;
        }
        while (a[j] > piviot)
        {
            j--;
        }
        if (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

    } while (i < j);

    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}

void quick(int a[10], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        quick(a, low, partitionIndex - 1);
        quick(a, partitionIndex + 1, high);
    }
}

int main(int argc, char const *argv[])
{
    int a[10] = {1, 2, 5, 8, 4, 9, 7, 3, 6, 0};

    for (int i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");

    quick(a, 0, 9);

    for (int i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
