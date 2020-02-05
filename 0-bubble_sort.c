#include "sort.h"
/**
* bubble_sort - array and integers
* @array: array
* @size: size
**/
void bubble_sort(int *array, size_t size)
{
unsigned int x = 0, y = 0;
size_t a = 0, b = 0;

if (array == NUll)
if (size > 1)
{
for (b = 0; b < size; b++)
{
for (a = 0; a <= (size - 2); a++)
{
x = array[a];
y = array[a + 1];
if (x > y)
{
array[a] = y;
array[a + 1] = x;
print_array(array, size);
}
}
}
}
}
