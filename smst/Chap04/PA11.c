#include <stdio.h>

int ProductDiscount();
void CalculateDiscount(const int* originalPrice, const int* discountRate, int* discountedPrice, int* discountAmount);

int main()
{
	ProductDiscount();
	return 0;
}

int ProductDiscount()
{
	int price = 0;
	int rate = 0;
	int finalPrice = 0;
	int amountOff = 0;

	printf("��ǰ�� ����? ");
	scanf_s("%d", &price);

	printf("������(%%)? ");
	scanf_s("%d", &rate);

	CalculateDiscount(&price, &rate, &finalPrice, &amountOff);

	printf("���ΰ�: %d�� (%d�� ����)\n", finalPrice, amountOff);

	return 0;
}

void CalculateDiscount(const int* originalPrice, const int* discountRate, int* discountedPrice, int* discountAmount)
{
	*discountAmount = *originalPrice * (*discountRate / 100.0);
	*discountedPrice = *originalPrice - *discountAmount;
}