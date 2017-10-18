void MDCab(int A, int B)
{
	while(B!=0)
	{
		int R(A%B);
		A=B;
		B=R;
	}
	return B;
}

int main()
{
	int A(93);
	int B(45);
	int C(MDCab(A,B));
	return 0;
}