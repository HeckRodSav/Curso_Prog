template <class T> class alpha
{
	//...
public:
	//...
	T operator[](int i)
	{
		return P[i];
	}
	void setItem(T item);
};

template <class T> void alpha::setItem(T item, int i)
{
	P[i] = T;
}