��������� ��������� ��� ������ �������.��������� ������� �� ���� ������ ����. � my_vector.h 
��������� ���������� ������� ,� � main.cpp ������������ ������� ������ �������.
������ ���������� �� ������ ������������� �������.
� ������ ������ ����� ������:
public:
	my_vector()
	my_vector(my_vector<T>& copy)
	~my_vector()
	void reserve(size_t n)- ����������� ������ ��� n ��������� ���� n ������ ���������� ��������� � �������
	void push_back(T elem)-���������� �������� � �����
	void pop_back()-�������� ���������� ��������
	iterator begin() - ���������� �������� ����������� �� ������ ������� 
	iterator end() -���������� �������� �� ����� ����� ����������
        void insert(T elem, iterator it)-��������� � ������ ������� �� ����� �������� ���������� 
	void erase(iterator it)-�������� �������� �� ������� ��������� ��������
	size_t size_vec() -���������� ������ �������
	size_t capacite_vec() -���������� ������ ������� �������� ������
	T operator[](long long n) -���������� �������� �������� ��� ������� n
	bool operator ==(my_vector vec)-��������� ��������
	bool operator !=(my_vector vec) -��������� ��������
	void swap(my_vector &vec)-������� ������������ ���������� 
	void operator =(my_vector& vec)
��� �� � ������� ������������ ����� �������� ,� ���� ������ ����� ������:
public:

	iterator(T** poi, size_t*num, long long num_it)
	long long num() - ����� �������� �� ������� ���������  ��������� � �������
	T** point() -���������� ��������� �� ��������� �� ������
	T operator*() - ���������� ���������� ��������� ���� �������� ����� �� ��������� ������� �� ���������
	void operator++() 
	void operator--() 
	bool operator == (iterator it) 
	bool operator != (iterator it) 
	void operator= (T elem)- ������������ �������� ���������  

