//...

int A(50);
int B(25);
int C(15);

if (A<B) C = C * 2; //C recebe o valor 30

if (C<A)
{
	B = A;
	A = C;
	C = B;
}