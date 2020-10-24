//largest number or maximum number
#include<iostream>
using namespace std;
int main()
{
	float arr[5]={23.4,34.5,55.5,33.5,6.5};
	int i;
	float smallest=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]<smallest)
		{
		 smallest=arr[i];
		}
	}
	cout<<"smallest value is ="<<smallest<<endl;
	return 0;
}
