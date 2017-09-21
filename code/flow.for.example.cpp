//...

int A(13);
int B(-13);

for (int i(A); i >= 0; i++)	B = B - 1; //incrementa B conforme o valor de A vai sendo decrementado

for (; B < 256; B = B + 2); //não inicializa nada, mas incrementa B de 2 em 2 enquanto B<256 for verdadeiro

for (A = 25, B = 50; A < B; A++, B = B - 2)
{
	B = B + 1; //incrementa B em 1
} //incrementa A em 1 e decrementa B em 2 a cada iteração, enquanto A<B for verdadeiro

//...