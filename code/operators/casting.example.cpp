//...
bool ehNaturalI(float N)
{
	int valor(N);			//Casting implícito
	float M(valor);
	return M == N;
}

bool ehNaturalE(float N)
{
	return N == float(int(N));	//Casting explícito
}
//...