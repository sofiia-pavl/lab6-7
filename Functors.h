#pragma once

template<class T>
class Predicate
{
public:
	virtual bool operator () (T x) = 0;
};

template <class T>                 
class Zero : public Predicate<T>   
{
public:
	virtual bool operator () (T x)
	{
		T zero = T();
		return x == zero;
	}
};

template<class T>					
class Positive : public Predicate<T>
{
public:
	virtual bool operator () (T x)
	{
		return x > 0;
	}
};

template<class T>					
class Negative : public Predicate<T>
{
public:
	virtual bool operator () (T x)
	{
		return x < 0;
	}
};

template<class T>					
class Even : public Predicate<T>    
{
public:
	virtual bool operator () (T x)
	{
		return (int)x % 2 == 0;
	}
};

template<class T>					
class Odd : public Predicate<T>    
{
public:
	virtual bool operator () (T x)
	{
		return (int)x % 2 != 0;
	}
};

template<class T>
void revers_copy(T* begin, T* end, T* to)
{
	for (T* from = end; from >= begin; from--)
	{ 
		*to = *from;
		to++;
	}

}
template<class T>
int revers_copy_if(T* begin, T* end,T* to, Predicate<T>& p)
{
	int n = 0; 
	for (T* from = end; from >= begin; from--)
	{ 
		if (p(*from))
		{
			*to = *from;
			to++; 
			n++;
		}
	}
	return n;

}