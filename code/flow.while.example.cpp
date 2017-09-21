//...
int A(60);
int B(12);

while(B!=0)
{
	int Q(A / B);
	int R(A % B);

	A = B;
	B = R;
}
//...