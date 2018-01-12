#include <iostream>
#include <stdlib.h>
#define MAX 5

using namespace std;

class array
{
	int *arr;
public:
	void *operator new(size_t size)
	{
		void *p = (int*)malloc(sizeof(int)*5);
		return p;
	}
	void operator delete(void *p)
	{
		free(p);
	}
	void get_data()
	{
		for(int i=0 ; i<MAX ; i++)
			cin >> *(arr+i);
	}
	void show_data()
	{
		for(int i=0 ; i<MAX ; i++)
			cout <<  *(arr+i) << " ";
	}
};

int main()
{
	array *a = new array;
	a->get_data();
	a->show_data();
	delete a;
}