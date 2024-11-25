//백준 5622번
#include <stdio.h>
int main() {

	char input[15];  //14글자 &  \0까지해서 15개(널 종료문자)
	int sum = 0;
	int len = 0;

	scanf("%s", input);
	// 입력이 '\0'(널문자)가 아닐때 까지
	for (int i = 0; input[i] != '\0'; i++)
	{
		// 2의 범위인 A, B, C일때
		if (input[i] == 'A' || input[i] == 'B' || input[i] == 'C')
		{
			sum += 3;		// 2번(+1초를 해줘야함)
		}
		// 아래도 위의 방식과 동일 ...
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
	// 결과 출력
	printf("%d", sum);
	return 0;

}
