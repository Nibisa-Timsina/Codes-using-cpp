#include<iostream>
using namespace std;
class DynamicArray {
	int * data;
	int size;
	public:
		DynamicArray(int sz)
		{
			this->size=sz;
			this->data= new int(size);
			cout << "DynamicArray created by size=" << size <<endl; 
		}
		~DynamicArray()
		{
			delete[] data;
			cout << "DynamicArray deallocated" << endl; 
		}
		void initialize(int value)
		{
			for(int i=0; i<size; i++)
			{
				data[i]=value;
			}
		}
		void display()
		{
			for(int i=0; i<size; i++)
			{
				cout << " " << data[i] << endl;
			}
		}
};
int main()
{
	DynamicArray *array= new DynamicArray(3);
	array->initialize(10);
	array->display();
	return 0;
}
