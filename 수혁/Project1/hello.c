//���� 5622��
#include <stdio.h>
int main() {

	char input[15];  //14���� &  \0�����ؼ� 15��(�� ���Ṯ��)
	int sum = 0;
	int len = 0;

	scanf("%s", input);
	// �Է��� '\0'(�ι���)�� �ƴҶ� ����
	for (int i = 0; input[i] != '\0'; i++)
	{
		// 2�� ������ A, B, C�϶�
		if (input[i] == 'A' || input[i] == 'B' || input[i] == 'C')
		{
			sum += 3;		// 2��(+1�ʸ� �������)
		}
		// �Ʒ��� ���� ��İ� ���� ...
		if (input[i] == 'D' || input[i] == 'E' || input[i] == 'F')
		{
			sum += 4;
		}

		if (input[i] == 'G' || input[i] == 'H' || input[i] == 'I')
		{
			sum += 5;
		}

		if (input[i] == 'J' || input[i] == 'K' || input[i] == 'L')
		{
			sum += 6;
		}

		if (input[i] == 'M' || input[i] == 'N' || input[i] == 'O')
		{
			sum += 7;
		}

		if (input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S')
		{
			sum += 8;
		}

		if (input[i] == 'T' || input[i] == 'U' || input[i] == 'V')
		{
			sum += 9;
		}

		if (input[i] == 'W' || input[i] == 'X' || input[i] == 'Y' || input[i] == 'Z')
		{
			sum += 10;
		}

	}
	// ��� ���
	printf("%d", sum);
	return 0;

}
