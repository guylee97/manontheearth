#include <stdio.h>
int rfibo(int);
int sfibo(int);
static int before = 1;
static int now = 1;

int main()
{
	int a=0;
	int n=3;

	for (n = 3; n <= 45; n+=2)
	{
		printf("rfibo(%d) : %d \n",n, rfibo(n));
		printf("sfibo(%d) : %d \n\n",n, sfibo(n));


	}




	system("pause");
	return 0;

}


int rfibo(int n)
{
	if (n <= 0)
		return 0;

	else if (n == 1)
	{
		return 1;
	}

	return rfibo(n - 1) + rfibo(n - 2);
}



int sfibo(int p)
{
	int i = 0;
	int box = 0;
	if (p == 3)
		return 2;

	else
	for (i = 2; i >= 1; i--)
	{
		box = before;
		before = now;
		now = box + now;
	}

	 return before + now;
}