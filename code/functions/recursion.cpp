unsigned int fatorial(unsigned int N)
{
	if(N<=1) return 1;
	else return N*fatorial(N-1);
}