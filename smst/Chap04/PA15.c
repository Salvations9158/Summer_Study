#include <stdio.h>

#define Exc_Fee 1.75

int Exchange_rate();
void CalculateExchangeRate(const int* basic_rate, const double* pre_exc_rate, double* final_exchange_rate);

int main()
{
	Exchange_rate();
	return 0;
}

int Exchange_rate()
{
	int br = 0;
	double per = 0.0;
	double USD = 0.0;
	double KRW = 0.0;
	double result_exchange_rate = 0.0;

	printf("��/�޷� �Ÿű�����? ");
	scanf_s("%d", &br);

	printf("ȯ�������(0~100%%) ");
	scanf_s("%lf", &per);

	CalculateExchangeRate(&br, &per, &result_exchange_rate);

	printf("�޷� �� �� ȯ���� %f�Դϴ�\n", result_exchange_rate);

	printf("������ �޷�(USD)? ");
	scanf_s("%lf", &USD);

	KRW = result_exchange_rate * USD;

	printf("USD %.2lf �� �� ==> KRW %.2lf\n", USD, KRW);
	return 0;
}

void CalculateExchangeRate(const int* basic_rate, const double* pre_exc_rate, double* final_exchange_rate)
{
	double exchange_fee = 0.0;
	exchange_fee = *basic_rate * (Exc_Fee * (1.0 - (*pre_exc_rate / 100.0))) / 100.0;
	*final_exchange_rate = *basic_rate + exchange_fee;
}