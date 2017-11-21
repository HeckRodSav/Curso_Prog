class alpha
{
private:
	int N, *P;
public:
	alpha(int n)
	{
		N = n;
		P = new int[N];
	}
	~alpha()
	{
		delete[] P;
	}
};

int main()
{
	alpha A(10);
}