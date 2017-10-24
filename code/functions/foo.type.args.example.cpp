int MDCab(int primeiro, int segundo)
{
	while(segundo!=0)
	{
		int resto(primeiro%segundo);
		primeiro=segundo;
		segundo=resto;
	}
	return primeiro;
}

int main()
{
	int A(93);
	int B(45);
	int C(MDCab(A,B));
	return 0;
}