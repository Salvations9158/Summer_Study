/* ���ϸ�: assignment18.c
* ����: PA18. 17���� ������ ���α׷��� ���� �ð��� 0�� �Էµ� �� ���� �ݺ� �����ϵ��� �����Ͻÿ� 
* �ۼ���: ���α�
* ��¥: 2025.7.8
* ����: v1.0
*/
#include <stdio.h>

int PA17();
void C(const int* minutesInput, int* totalFee);

int main()
{
	PA18();
	return 0;
}

int PA18()
{
	int m = 0;
	int result = 0;
	const int MAX_MINUTES = 1440; // 24�ð� = 1440��

	while (1)
	{
		printf("���� �ð�(��)? ");
		scanf_s("%d", &m);

		if (m == 0)
		{
			break;
		}

		if (m > MAX_MINUTES)
		{
			printf("���� �ð��� �ִ� 24�ð�(1440��)�� ���� �� �����ϴ�.\n");
			continue;
		}

		C(&m, &result);

		printf("���� ���: %d��\n", result);
	}

	return 0;
}

void C(const int* minuteInput, int* total)
{
	int CM = *minuteInput;
	*total = 0;

	if (CM <= 0)
	{
		*total = 0;
	}
	else if (CM <= 30)
	{
		*total = 2000;
	}
	else
	{
		*total = 2000;
		int RM = CM - 30;
		int add = (RM + 9) / 10;
		*total += add * 1000;
	}

	if (*total > 25000)
	{
		*total = 25000;
	}
}