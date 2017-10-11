//...
int A(50), B(25), C(15);
if (A<B) C *= 2;	//Alteração de valor condicionada
if (C<A)					//Inversão de valores de variáveis
{
	B = A;
	A = C;
	C = B;
}
//...