#include "my_vector.h"
#include <iostream>
using  std::cout;
using std::endl;
void main()
{
	my_vector<int> vec;
	auto it = vec.begin();
	for (int i = 0; i <= 100; i++)
	{
		vec.push_back(i);
		cout << *it << endl;
		++it;

	}
	--it;
	--it;
	--it;
	my_vector<int>vec2;
	vec2.swap(vec);
	my_vector<int> vec1(vec2);
	auto iter3 = vec1.end();
	vec = vec2;
	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	{
		cout << "    " << *iter << endl;

	}

	for (auto iter2 = vec1.begin(); 
		iter2 != vec1.end();
		++iter2)
	{
		cout << "          " << *iter2 << endl;

	}

	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	{
		cout << "    " << *iter << endl;

	}
	for (auto iter2 = vec1.begin(); iter2 != vec1.end(); ++iter2)
	{
		cout << "          " << *iter2 << endl;

	}
	cout << endl;
	for (auto iter = vec.begin(); 
		iter != vec.end();
		++iter)
	{
		cout << "    " << *iter << endl;

	}


	for (auto iter = vec.begin(); iter != vec.end(); )
	{
		vec.pop_back();

	}

}