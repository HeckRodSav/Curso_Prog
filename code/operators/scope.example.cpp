class A
{
	public:
		static int a;
		static int getA(){return a;}
} alpha, beta;

int A::a = 10;

int main()
{
	A::a=10;
	int B = A::getA();
	return 0;
}