#include "main.h"
/**
* alloc_grid - is function
* @width: is pointer
* @height: is pointer
* Return: 0
*/
int **alloc_grid(int width, int height)
	{
	if (width <= 0 || height <= 0)
	return (NULL);
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	int *ptr;

	while (i < width)/* column*/
	i++;
	while (j < height)/*rows*/
	j++;
	ptr = (int *)malloc(sizeof(int) * width * height);
	while (x < i && y < j)
	ptr[x][y];
	return (ptr);
