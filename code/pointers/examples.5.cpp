float mediaN2(int N, float *V)
{
	float acc = 0;
	//Dê atenção aos argumentos do for a seguir
	for(float *aux(V + N); V<aux; V++) acc += *V;
	return acc/float(N);
}
//...
#define SIZE 50
int main()
{
	float vetor[SIZE]{};
	float media;
	//...								//Atribui valor ao vetor
	media = mediaN2(SIZE, vetor);
	//...
	return 0;
}