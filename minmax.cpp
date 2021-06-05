#include<iostream>
using namespace std;

int minmax(int ar1[], int ar2[],int l1,int l2,int k)
{
	int y=0,x=0;
	for(int i= 0;i<l1;i++)
	{ if( ar1[i]<k )
	     x++;
	}
	
	for(int i= 0 ;i<l2;i++)
	{  if(ar2[i]>k)
	      y++;
	}
    if(x>y)
	 return x;
	else 
	  return y;	
	
}

int main()
{
	int l1,l2,z;
	cout<<"enter length of both arrays";
	cin>>l1>>l2;
	int ar1[l1], ar2[l2];
	cout<<"array 1";
	for(int i= 0;i<l1;i++)
	  cin>>ar1[i];
	cout<<"array 2";
	for(int i= 0;i<l2;i++)
	  cin>>ar2[i];
	cout<<"enter elem to comp";
	cin>>z;
	cout<<minmax(ar1,ar2,l1,l2,z)   ;
	return 0;
}


