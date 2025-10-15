#include <iostream>

int x[6];
int ticket = 0;

int main()
{
  for (int i = 0; i <= 999999; i++)
  {
	int a = i;
	for (int g = 5; g >= 0; g--)
	{
		x[g] = a % 10;
		a = a / 10;
	}

	int first = x[0] + x[1] + x[2];
	int second = x[3] + x[4] + x[5];

	if (first == second)
	{
		ticket++;
	}
  }
  std::cout << ticket;
}
