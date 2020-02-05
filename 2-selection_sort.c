#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @array: array of data of input
 * @size: size of array
 **/
void selection_sort(int *array, size_t size)
{
size_t x, y, a, b;
int n = 0;

if (array == NULL)
return;
if (size > 1)
{
for (x = 0; x < (size - 1); x++)
{
a = x;
for (y = x + 1; y < size; y++)
{
if (array[y] < array[a])
{
a = y;
n = 1;
}
}
if (n == 1)
{
b = array[a];
array[a] = array[x];
array[x] = b;
print_array(array, size);
n = 0;
}
}
}
}
