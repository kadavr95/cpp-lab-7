#include <iostream.h>
#include <conio.h>
#include <string>


void main()
{
	int a[100][50],n,m,i,j,k,t;
	cout<<"Enter number of rows and columns: ";
	cin>>n>>m;
	cout<<"Enter elements of array:\n";
	for (i = 0; i <= n-1; i++)
	{
		for (j = 0; j <= m-1; j++)
		{
			cin>>a[i][j];
		}
	}
	for (k = 0; k <= n-1; k++)
	{
		for (j = 1; j <= m-1; j++)
		{
			for (i = 0; i <= m-j-1; i++)
			{
				if (a[k][i]>a[k][i+1])
				{
					t=a[k][i];
					a[k][i]=a[k][i+1];
					a[k][i+1]=t;
				}
			}
		}
	}
	cout<<"Result:\n";
	for (i = 0; i <= n-1; i++)
	{
		for (j = 0; j <= m-1; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	getch();
}

