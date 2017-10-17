//...
int acc(0);
for (int i(0); i < 10; i++)	acc += i; //Soma todos os números de 0 a 9

int A(13);
int B(-13);
for (int i(A); i > 0; i--)	B += 1;

for (; A > B; B++) ; //Note como o ponto-e-vírgula está sozinho, ou seja, o comando é vazio, porém B é incrementado

int sum(0);
for (int i(0), j(0); i < 10; i++)	for (int k(0); k < 10; k++, j++) sum += i * j; //Aninhamento

long prod(1);
for (A = 25, B = 50; A < B; A++, B -= 2)
{
	prod *= B;
	prod /= A;
}
//...