ѕрограмма реализует мою версию вектора.программа состоит из двух файлов кода. ¬ my_vector.h 
находитс€ реализаци€ вектора ,а в main.cpp представлены примеры работы вектора.
¬ектор реализован на основе динамического массива.
¬ вектор вход€т такие методы:
public:
	my_vector()
	my_vector(my_vector<T>& copy)
	~my_vector()
	void reserve(size_t n)- резервирует пам€ть дл€ n элементов если n больше количества элементов в векторе
	void push_back(T elem)-добавление элемента в конец
	void pop_back()-удаление последнего элемента
	iterator begin() - возвращает итератор указывающий на первый элемент 
	iterator end() -возвращает итератор на место после последнего
        void insert(T elem, iterator it)-добавл€ет в вектор элемент на место указаное итератором 
	void erase(iterator it)-удаление элемента на который указывает итератор
	size_t size_vec() -возвращает размер вектора
	size_t capacite_vec() -возвращает размер зан€той массивом пам€ти
	T operator[](long long n) -возвращает значение элемента под номером n
	bool operator ==(my_vector vec)-сравнение векторов
	bool operator !=(my_vector vec) -сравнение векторов
	void swap(my_vector &vec)-вектора обмениваютс€ содержимым 
	void operator =(my_vector& vec)
“ак же в векторе присутствует класс итератор ,в него вход€т такие методы:
public:

	iterator(T** poi, size_t*num, long long num_it)
	long long num() - номер элемента на который ссылаетс€  итератора в массиве
	T** point() -возвращает указатель на указатель на массив
	T operator*() - возвращает содержимое итератора если итератор вышел из диапазона выходит из программы
	void operator++() 
	void operator--() 
	bool operator == (iterator it) 
	bool operator != (iterator it) 
	void operator= (T elem)- приравнивает значение итератору  

