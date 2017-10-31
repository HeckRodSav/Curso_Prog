int A, B;

void MDCab(void)
{
	while(B!=0)
	{
		int R(A%B);
		A=B;
		B=R;
	}
}

int main()
{
	A = 93;
	B = 45;
	MDCab();
	int C(A);	//C vale 3
	return 0;
}