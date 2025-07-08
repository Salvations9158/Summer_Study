#include <stdio.h>

void ec(const double* mu_ptr, long long* tc_ptr);
int pa20();

int main()
{
	pa20();
	return 0;
}

int pa20()
{
	double mu = 0.0;
	long long tc = 0;

	while (1)
	{
		printf("월 사용량(kwh)? ");
		scanf_s("%lf", &mu);

		if (mu == -1)
		{
			break;
		}

		ec(&mu, &tc);

		printf("전기 요금: %lld원\n", tc);
	}

	return 0;
}

void ec(const double* mu_ptr, long long* tc_ptr)
{
	double bf = 0.0;
	double er = 0.0;

	if (*mu_ptr <= 200.0)
	{
		bf = 910.0;
		er = *mu_ptr * 93.3;
	}
	else if (*mu_ptr <= 400.0)
	{
		bf = 1600.0;
		er = (200.0 * 93.3) + ((*mu_ptr - 200.0) * 187.9);
	}
	else
	{
		bf = 7300.0;
		er = (200.0 * 93.3) + (200.0 * 187.9) + ((*mu_ptr - 400.0) * 280.6);
	}

	*tc_ptr = (long long)(bf + er + 0.5);
}