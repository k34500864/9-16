#include<stdio.h>
#include<stdlib.h>
int rgb_rand(int a[][5]);
int plus_(int a[][5]);
int minus_(int a[][5]);
int print(int a[][5]);
int main(void) {
	int r[4][5], g[4][5], b[4][5], i, j;
	rgb_rand(r);
	rgb_rand(g);
	rgb_rand(b);
	plus_(r);
	minus_(g);
	print(r);
	print(g);
	print(b);
}
int rgb_rand(int a[][5]) {
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			a[i][j] = rand() % 255 + 1;
		}
	}
}
int plus_(int a[][5]) {
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			a[i][j] = rand() % 255 + 1;
			a[i][j] += 30;
			if (a[i][j] > 255)
				a[i][j] = 255;
		}
	}
}
int minus_(int a[][5]) {
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			a[i][j] = rand() % 255 + 1;
			a[i][j] -= 30;
			if (a[i][j] < 0)
				a[i][j] = 0;
		}
	}
}
int print(int a[][5]) {
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("% 4d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}