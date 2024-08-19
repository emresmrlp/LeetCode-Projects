int minSteps(int n) {
	if (n <= 1)
		return 0;
	int factor = 2;
	int steps = 0;
	while (factor * factor <= n)
	{
		if (n % factor == 0)
		{
			steps += factor;
			n /= factor;
		}
		else
			factor++;
	}
	if (n > 1)
		steps += n;
	return steps;
}