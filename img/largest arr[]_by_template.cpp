#include<iostream>
using namespace std;
template<typename T> T Largest(T arr[],int n)
{
	T large=arr[0];
	for(int i=0; i<=n; i++)
	{
		if(large<arr[i])
		{
			large=arr[i];
		}
		
	}
	return large;
}
int main()
{
	int int_arr[]={22333,2222,222};
	cout << "Largest among all is:" << Largest(int_arr,3);
	return 0;
}

