#include <iostream>
using namespace std;

void printarry(arry[],size)
{
	for(int i=0; i<size; i++)
	{
		cout<<arry[i]<< " "<<endl;
	}
}
int main()
{
	int arry[]={4,13,1,2,34,32,5,44};
	int size = sizeof(arry)/sizeof(arry[0]);
	printarry(arry,size);
	for(int k=1; k<size; k++)
	{
		int temp= arry[k];
		int j=k-1;
		while(j>=0 && temp<=arry[j])
		{
			arry[j+1] =arry[j];
			
		}
		arry[j+1] temp;
	}
	cout<<"after sorting"<<endl;
	printarry(arry,size);
	return 0;
	}
