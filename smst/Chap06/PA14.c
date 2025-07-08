/* 파일명: assignment14.c
* 내용: PA14. 연, 월, 일을 인자로 전달받아 유효한 날짜인지 검사하는 함수를 만드시오
* 작성자: 전민규
* 날짜: 2025.7.8
* 버전: v1.0
*/
#include <stdio.h>

void ily(const int* y_ptr, int* r_ptr);
void gdm(const int* m_ptr, const int* y_ptr, int* dim_ptr);
void cd(const int* y_ptr, const int* m_ptr, const int* d_ptr, int* v_ptr);
int pa14();

int main()
{
	pa14();
	return 0;
}

int pa14()
{
	int y, m, d;
	int v;

	do
	{
		printf("날짜 (년 월 일)? ");
		scanf_s("%d %d %d", &y, &m, &d);

		cd(&y, &m, &d, &v);

		if (v == 0)
		{
			printf("잘못 입력하셨습니다. 유효한 날짜를 입력하세요.\n");
		}
	} while (v == 0);

	printf("입력한 날짜는 %d년 %d월 %d일입니다.\n", y, m, d);

	return 0;
}

void ily(const int* y_ptr, int* r_ptr)
{
	*r_ptr = (*y_ptr % 4 == 0 && (*y_ptr % 100 != 0 || *y_ptr % 400 == 0)) ? 1 : 0;
}

void gdm(const int* m_ptr, const int* y_ptr, int* dim_ptr)
{
	int ls = 0;
	ily(y_ptr, &ls);

	switch (*m_ptr)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		*dim_ptr = 31;
		break;
	case 4: case 6: case 9: case 11:
		*dim_ptr = 30;
		break;
	case 2:
		*dim_ptr = (ls == 1) ? 29 : 28;
		break;
	default:
		*dim_ptr = 0;
		break;
	}
}

void cd(const int* y_ptr, const int* m_ptr, const int* d_ptr, int* v_ptr)
{
	*v_ptr = 1;

	if (*y_ptr <= 0)
	{
		*v_ptr = 0;
		return;
	}

	if (*m_ptr < 1 || *m_ptr > 12)
	{
		*v_ptr = 0;
		return;
	}

	int maxdinm = 0;
	gdm(m_ptr, y_ptr, &maxdinm);

	if (*d_ptr < 1 || *d_ptr > maxdinm)
	{
		*v_ptr = 0;
		return;
	}
}