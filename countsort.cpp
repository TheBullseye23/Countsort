#include <iostream>

using namespace std;

void countsort(int a[],int n)
{ int output[100];
  int max=a[0];
  int i;
  for(i=1;i<n;i++)
  if(a[i]>a[i-1])
  max=a[i];
  int count[101];

  for(i=0;i<101;i++)
  count[i]=0;

  for(i=0;i<n;i++)
  count[a[i]]++;

  for(i=1;i<100;i++)
  count[a[i]]+=count[a[i-1]];
  
  for(i=100;i>=0;i--)
  { output[count[a[i]]]=a[i];
    count[a[i]]--;
  }

  for(i=0;i<100;i++)
  a[i]=output[i];
}

int main()
{   int a[100];
    int i,n;
    cout<<"Enter number of elements ";
    cin>>n;
    cout<<"\nEnter the elements";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"\nThe sorted array is :";
    countsort(a,n);
    for(i=0;i<n;i++)
    cout<<a[i]<<"  ";
    return 0;
}
