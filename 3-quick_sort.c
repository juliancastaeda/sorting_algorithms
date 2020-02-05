#include "sort.h"
/**
* partition - partition_array
* @array: array
* @low: low
* @high: high
* @size: size
* Return:
**/
int partition(int *array, int low, int high, size_t size)
{
int x = array[high], y = (low), a;
int temp = 0;

for (a = low; a < high; a++)
{
if (array[a] < x)
{
if (array[a] != array[y])
{
temp = array[y];
array[y] = array[a];
array[a] = temp;
print_array(array, size);
}
y++;
}
}
if (array[high] != array[y])
{
temp = array[y];
array[y] = array[high];
array[high] = temp;
print_array(array, size);
}
return (y);
}

/**
* recursion - recursion
* @array: array
* @low: low
* @high: high
* @size: size
**/
void recursion(int *array, int low, int high, size_t size)
{
int x;

if (low < high)
{
x = partition(array, low, high, size);
recursion(array, low, x - 1, size);
recursion(array, x + 1, high, size);
}
}

/**
* quick_sort - quick
* @array: array
* @size: size
**/
void quick_sort(int *array, size_t size)
{
int x = 0, y = (size - 1);

if (array != NULL && size != 0)
recursion(array, x, y, size);
}
