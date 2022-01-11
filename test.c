#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 0;
//	float min = 0.0;
//	float max = 100.0;
//	float ave = 0.0;
//	float sum = 0.0;
//	float score = 0.0;
//	scanf("%d", &n);
//	int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%f", &score);
//			sum += score;
//			if (score > max)
//				max = score;
//			if (score < min)
//				min = score;
//		}
//		ave = sum / n;
//		printf("%.2f %.2f %.2f\n", max, min, ave);
//		return 0;
//}

//int main()
//{
//	char arr1[100] = {0};
//	char arr2[100] = {0};
//	scanf("%s%s", &arr1, &arr2);
//	if (strcmp(arr1, arr2) == 0)
//		printf("same\n");
//	else
//		printf("different\n");
//	return 0;
//}

//int main()
//{
//	int N = 0;
//	int M = 0;
//	scanf("%d%d", &N, &M);
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int sum = 0;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < M; j++)
//		{
//			scanf("%d", &tmp);
//			if (tmp > 0)
//				sum += tmp;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int pos = 0;
//	int neg = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] < 0)
//			neg++;
//		else
//			pos++;
//	}
//	printf("pos:%d\nneg:%d", pos, neg);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int max = 0;
//	int min = 100;
//	int score = 0;
//	int i = 0;
//	scanf("%d", &n);
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &score);
//			if (score > max)
//				max = score;
//			if (score < min)
//				min = score;
//		}
//		printf("%d", max - min);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[50] = { 0 };
//	int flag1 = 0;//Éý
//	int flag2 = 0;//½µ
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", arr[i]);
//		if (i > 0)//2ÔªËØ
//		{
//			if (arr[i] > arr[i - 1])
//				flag1 = 1;
//			else if (arr[i] < arr[i - 1])
//				flag2 = 1;
//		}
//	}
//	if (flag1 + flag2 > 1)
//		printf("unsorted\n");
//	else
//		printf("sorted\n");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int del = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &del);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[i] == arr[j + 1])
//			{
//				int k = 0;
//				for (k = j; k < n - 1; k++)
//				{
//					arr[k] = arr[k + 1];
//				}
//				n--;
//				j--;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int arr1[5000] = { 0 };
	int arr2[5000] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int j = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			printf("%d ", arr1[i]);
			i++;
		}
		else
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}
	if (i == n)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", arr2[j]);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d ", arr1[i]);
		}
	}
	return 0;
}