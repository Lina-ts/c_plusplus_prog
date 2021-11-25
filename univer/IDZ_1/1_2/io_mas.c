void in_mas (double mas[], int n)
{
	int i=0;
	if (n < 6)
		//ручной режим тестирования
	for (; n > 0; n--)
		scanf("%lf", mas++);
	else
		//автоматический режим тестирования - заполнение случайными числами
		for (; n > 0; n--)
			mas[i++] = rand()%100-50;
}
void out_mas (double mas[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%8.2lf",*mas++);
	printf("\n");
}