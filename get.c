#include <stdio.h>

int arr[5] = {1, 5, 4, 8, 6};
int low = 0;
int high = 4;
int mid;
int element_to_find;

void display(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void sort(int arr[])
{
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int binary_search(int arr[], int element)
{
    printf("Enter the element to find: ");
    scanf("%d", &element_to_find);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element_to_find)
        {
            return mid;
        }
        else if (arr[mid] < element_to_find)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    display(arr);
    sort(arr);
    display(arr);

    int index = binary_search(arr, element_to_find);
    if (index != -1)
    {
        printf("Element found at index: %d\n", index);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}