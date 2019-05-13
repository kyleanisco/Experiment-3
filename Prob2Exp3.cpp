#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int k,i,arr1[i],arr2[i],arr3[i],arr[k];
 
	cout<<"Enter all temperature for a week of Province A, Province B and then Province C. \n";
	i=1;
   for(i = 0; i < 7; i++)
    {
       cout << "Province A, Day " << i + 1 << " : ";
       cin >> arr[k];
       k++;
   }
   i=1;
   for(i = 0; i < 7; i++)
    {
       cout << "Province B, Day " << i + 1 << " : ";
       cin >> arr[k];
       k++;
   }
   i=1;
   for(i = 0; i < 7; i++)
    {
       cout << "Province C, Day " << i + 1 << " : ";
       cin >> arr[k];
       k++;
   }
   cout<<"Displaying values:"<<endl;
   cout<<"Province A, Day 1 = "<<arr[0]<<endl;
   cout<<"Province A, Day 2 = "<<arr[1]<<endl;
   cout<<"Province A, Day 3 = "<<arr[2]<<endl;
   cout<<"Province A, Day 4 = "<<arr[3]<<endl;
   cout<<"Province A, Day 5 = "<<arr[4]<<endl;
   cout<<"Province A, Day 6 = "<<arr[5]<<endl;
   cout<<"Province A, Day 7 = "<<arr[6]<<endl;
   cout<<"Province B, Day 1 = "<<arr[7]<<endl;
   cout<<"Province B, Day 2 = "<<arr[8]<<endl;
   cout<<"Province B, Day 3 = "<<arr[9]<<endl;
   cout<<"Province B, Day 4 = "<<arr[10]<<endl;
   cout<<"Province B, Day 5 = "<<arr[11]<<endl;
   cout<<"Province B, Day 6 = "<<arr[12]<<endl;
   cout<<"Province B, Day 7 = "<<arr[13]<<endl;
   cout<<"Province C, Day 1 = "<<arr[14]<<endl;
   cout<<"Province C, Day 2 = "<<arr[15]<<endl;
   cout<<"Province C, Day 3 = "<<arr[16]<<endl;
   cout<<"Province C, Day 4 = "<<arr[17]<<endl;
   cout<<"Province C, Day 5 = "<<arr[18]<<endl;
   cout<<"Province C, Day 6 = "<<arr[19]<<endl;
   cout<<"Province C, Day 7 = "<<arr[20]<<endl;


getch();
return 0;
}

