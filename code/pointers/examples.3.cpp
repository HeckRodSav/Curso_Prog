float mediaN1(int N, float *V)
{
	float acc = 0;
	for(int i = 0; i<N; i++) acc += V[i];
	return acc/float(N);
}
//...
#define SIZE 50
int main()
{
	float vetor[SIZE]{};
	float media;
	//...								//Atribui valor ao vetor
	media = mediaN1(SIZE, vetor);
	//...
	return 0;
}