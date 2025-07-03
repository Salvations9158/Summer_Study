#include <stdio.h>

int ElectricityBill();
void CalculateElectricityBill(const int* baseFee, const int* monthlyUsage, int* totalFee);

int main()
{
	ElectricityBill();
	return 0;
}

int ElectricityBill()
{
	int basicFee = 0;
	int usageKwh = 0;
	int finalFee = 0;

	printf("�⺻ ���? ");
	scanf_s("%d", &basicFee);

	printf("�� ��뷮(kwh)? ");
	scanf_s("%d", &usageKwh);

	CalculateElectricityBill(&basicFee, &usageKwh, &finalFee);

	printf("���� ���: %d��\n", finalFee);

	return 0;
}

void CalculateElectricityBill(const int* baseFee, const int* monthlyUsage, int* totalFee)
{
	const int pricePerKwh = 190;
	*totalFee = *baseFee + (*monthlyUsage * pricePerKwh);
}