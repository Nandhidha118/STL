#include <iostream>

#include<array>
using namespace std;
int main()
{
     int size1,c=0,j;
     int num[10];
  cout<<"enter the size of array:\n";
  cin>>size1;
  cout<<"enter the elements:\n";
  for(int i=0;i<size1;i++)
  {
      cin>>num[i];
  }
for(int i=0;i<size1;i++)
{
    for(j=i;j<size1-1;j++)
    {
        if(num[i]!=num[j])
        {
            c=c+1;
        }
    }
}
    cout<<"The number of unique elements of the array is : "<<c;

    return 0;
}
