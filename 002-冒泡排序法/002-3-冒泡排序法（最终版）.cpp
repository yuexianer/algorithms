#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1e4 + 10;
int q[N], n;

void bubble_sort(int q[], int n)
{
	int flag = false;	// 未排序好
	int j = 0;	// 记录排序好的元素个数
	while (!flag)
	{
		flag = true;	// 假设已经排序好
		for (int i = 0; i < n - 1 - j; i ++)
		{
			if (q[i] > q[i + 1])
			{
				swap(q[i], q[i + 1]);
				flag = false;	// 设置为未排序
			}
		}

		j ++;	// 每次排序必有一个已经归位
	}
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i ++)
		scanf("%d", &q[i]);

	bubble_sort(q, n);

	for (int i = 0; i < n; i ++)
		printf("%d ", q[i]);
	printf("\n");
	return 0;
}