int C(0);

void MDCab(int A, int B)
{
	while(B!=0)
	{
		int R(A%B);
		A=B;
		B=R;
	}
	C = A;
}

int main()
{
	int A(93);
	int B(45);
	MDCab(A,B);
	//C vale 3
	return 0;
}