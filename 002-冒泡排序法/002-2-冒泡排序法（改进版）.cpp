#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1e3 + 10;
int q[N], n;

void bubble_sort(int q[], int n)
{
	int flag = false;	// δ�����
	while (!flag)
	{
		flag = true;	// �����Ѿ������
		for (int i = 0; i < n - 1; i ++)
		{
			if (q[i] > q[i + 1])
			{
				swap(q[i], q[i + 1]);
				flag = false;	// ����Ϊδ����
			}
		}
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