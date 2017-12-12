template <class T> class alpha
{
private:
	int N;
	T *P;
public:
	alpha(int n)
	{
		N = n;
		P = new T[N];
	}
	~alpha()
	{
		delete[] P;
	}
};