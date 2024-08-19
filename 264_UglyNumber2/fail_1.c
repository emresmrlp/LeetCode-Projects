// Fail (Time Limit Exceeded)

int isUgly(int n)
{
	while (n % 2 == 0)
		n /= 2;
	while (n % 3 == 0)
		n /= 3;
	while (n % 5 == 0)
		n /= 5;
	if (n == 1)
		return 1;
	return 0;
}

int nthUglyNumber(int n)
{
	if (n <= 0)
		return 0;
	int uglyCounter = 0;
	int i = 1;
	if (n <= 1690 && n >= 1)
	{
		while (uglyCounter < n)
		{
			if (isUgly(i) == 1)
				uglyCounter++;
			i++;
		}
		return i - 1;
	}
	return 0;
}
