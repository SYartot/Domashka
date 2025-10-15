#include <iostream>
const int n1 = 4;
const int n2 = 44;
int total =0;

int main()
{
int i;

  for(i = n1; i <= n2; i++)
  {
	if (i % 4 == 0)
	total = total; + i;
  }
std::cout << total;
}
