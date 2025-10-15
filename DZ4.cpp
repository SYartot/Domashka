#include <iostream>

const int a = 124125;
int b;
int c = a;		
int i;		
int g;			

int main()
{
  char x[20];	
  char y[20];		
  while (c > 0)		
  {
	b = c % 10;
	c = c / 10;
	x[i] = '0'+b;
	i++;
  }
  int p = i;		
  for (g = 0; g < p; g++)
  {
	y[g] = x[i-1];
	i--;
  }
  y[g] = '\0';		

  std::cout << y;
}
