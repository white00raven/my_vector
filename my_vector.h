#pragma once
#include <new>
using namespace std;
template<typename T>
class my_vector
{
private:

	size_t size;
	size_t capacite;
	T*p;
public:
	my_vector();
	my_vector(my_vector<T>& copy);
	~my_vector();
	class iterator;
	void reserve(size_t n);
	void push_back(T elem);
	void pop_back();
	iterator begin() { T**temp_p = &p; size_t*temp_size = &size; return iterator(temp_p, temp_size, 0); };
	iterator end() { T**temp_p = &p; size_t*temp_size = &size; return iterator(temp_p, temp_size, size); };
	void insert(T elem, iterator it);
	void erase(iterator it);
	size_t size_vec() { return size; };
	size_t capacite_vec() { return capacite; };
	T operator[](long long n) { return p[n]; }
	bool operator ==(my_vector vec)
	{
		return size == vec.size ||
			capacite == vec.capacite || vec.p == p;
	}
	bool operator !=(my_vector vec) { return !(this == vec); }
	void swap(my_vector &vec);
	void operator =(my_vector& vec);
};
template<typename T>
my_vector<T>::my_vector(my_vector<T>& copy)
{

	size = 0;
	capacite = 1;
	this->p = new T[1];

	for (auto it = copy.begin(); it != copy.end(); ++it)
	{

		this->push_back(*it);
	}


}
template<typename T>
void my_vector<T>::operator=(my_vector<T>& copy)
{
	if (*this == copy)
		return;
	size = 0;
	capacite = 1;
	for (auto it = copy.begin(); it != copy.end(); ++it)
	{

		this->push_back(*it);
	}


}
template<typename T>
my_vector<T>::my_vector()
{
	p = new T[2];
	size = 0;
	capacite = 1;
}
template<typename T>
void my_vector<T>::reserve(size_t n)
{
	if (n < size)
		return;
	T *q = new T[n]();

	for (size_t i = 0; i < size; i++)
	{
		q[i] = p[i];
	}
	delete[] p;
	p = q;
	q = nullptr;
	capacite *= 2;
}
template<typename T>
void my_vector<T>::push_back(T elem)
{
	if (capacite == size + 1 || capacite < size + 1)
	{
		reserve(capacite * 2);

	}
	p[size] = elem;
	size++;
}
template<typename T>
void my_vector<T>::pop_back()
{
	size--;
	auto temp = p + size;
	*temp = -879976;
	temp = nullptr;
}
template<typename T>
class my_vector<T>::iterator
{
private:
	long long it_num;
	T ** it_point;
	size_t * size_point;
public:

	iterator(T** poi, size_t*num, long long num_it) { it_num = num_it; it_point = poi; size_point = num; }
	long long num() { return it_num; };
	T** point() { return it_point; };
	T operator*() { if (it_num >= *size_point && it_num < 0)exit(1); auto temp = *it_point; return temp[it_num]; };
	void operator++() { ++it_num; };
	void operator--() { --it_num; };
	bool operator == (iterator it) { if (it.it_point == it_point) return it.it_num == it_num ? true : false; else return false; };
	bool operator != (iterator it) { if (it.it_point == it_point) return it.it_num == it_num ? false : true; else return false; };
	void operator= (T elem) { auto temp = *it_point; temp[it_num] = elem; };
};
template<typename T>
void my_vector<T>::insert(T elem, iterator it)
{

	T j, temp;
	j = *it;
	it = elem;
	auto it_end = this->end();
	for (++it; it != it_end; ++it)
	{
		temp = *it;
		it = j;
		j = temp;
	}

	this->push_back(j);
}
template<typename T>
void my_vector<T>::erase(iterator it)
{

	T j, temp;
	auto it_end = end();
	--it_end;
	j = *it_end;
	--it;
	for (; it != it_end; --it_end)
	{
		temp = *it_end;
		it_end = j;
		j = temp;
	}
	pop_back();

}
template <typename T>
my_vector<T>::~my_vector()
{
	size_t i = 0;
	delete[] p;

}
template <typename T>
void my_vector<T>::swap(my_vector &vec)
{
	auto temp_point = vec.p;
	vec.p = p;
	p = temp_point;
	temp_point = nullptr;
	size_t temp;
	temp = size;
	size = vec.size;
	vec.size = temp;
	temp = capacite;
	capacite = vec.capacite;
	vec.capacite = temp;
}
