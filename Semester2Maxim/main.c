#include <stdio.h>
#include <math.h>
#include "functions.h"
#include "Euler.h"

/* ���� ���������, ������� ������ ���� � �����. �������� �������: 
	�� ���� ����� ���������� ������� �� �������,
	���������� ���������� ��� ��� ���,
	�� ���� ���� - ������� ���-�� ��������� ���� � ������ ����
*/
int main()
{
	int number = 0;

	printf("Enter the number ");
	scanf_s("%d", &number);

	//printf("The difference between the sum of the squares of the first ten natural numbers and the square of the sum is %f\n", Problem_6(number));

	printf("The %d prime number is %d", number, Problem_7(number));

	return 0;
}