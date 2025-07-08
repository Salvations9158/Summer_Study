/* ���ϸ�: assignment17.c
* ����: PA17. ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��������� ���� 30���� 2000��
* �� ���Ĵ� 10�д� 1000�������� ����ϸ�, �Ϸ� �ִ� 25000���� ���� �� ����. ���� �ð��� 24�ð��� ���� ���� ���ٰ� �����Ѵ�.
* �ۼ���: ���α�
* ��¥: 2025.7.8
* ����: v1.0
*/
#include <stdio.h>

int PA17();
void C(const int* minutesInput, int* totalFee);

int main()
{
	PA17();
	return 0;
}

int PA17()
{
	int m = 0;
	int result = 0;

	printf("���� �ð�(��)? ");
	scanf_s("%d", &m);

	C(&m, &result);

	printf("���� ���: %d��\n", result);

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