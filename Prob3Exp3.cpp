#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int size;
	char arr[100],i,j,comp;
	
	cout <<"Size of the array: ";
	cin>>size;

	cout<<"Array elements: ";
	for (i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"=========================================================="<<endl;

for(i=0; i<size; i++)
{
	for (j=i+1;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if (arr[i]>arr[j])
			{
				comp=arr[i];
				arr[i]=arr[j];
				arr[j]=comp;
			}
		}
	}
}
cout<<"Output: '";
for (i=0;i<size;i++){

	cout<<arr[i]<<",";

}
	cout<<"'"<<endl;
	cout<<"Size of the array is: "<< size;
getch();
return 0;
}

