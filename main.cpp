#include <iostream>
#include<sstream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    int m;
    int Deadline;
    int Profit;
    int Max_Profit;


//_____________________________________________inputs array_________________________________________

    cout<<"Please Enter Number of Jops: "<<endl;
    cin>>n;
    cout<<endl;
    string arr[n][3];


    for (int i = 0; i < n; i++)
    {
        cout<<"Please Enter IDs of the Jop ("<<i+1<<") and it Deadline , Profit: "<<endl;
        cin>> arr[i][0];
        cin>> arr[i][1];
        cin>> arr[i][2];
    }

//_______________________________________________print INFOR________________________________________


    cout <<endl<<endl<<">> The inf of Jops  is: "<<endl;
    cout <<"JopID  Deadline   Profit "<<endl;


    for (int i = 0; i < n; i++)

    {

        cout<< arr[i][0]<<"        ";
        cout<< arr[i][1] <<"          ";
        cout<<  arr[i][2]<<"        ";
        cout<<endl;

    }

    //________________________________________operation_____________________________________________
int arr_Max_Profit[n];
int arr_Deadline[n];
int arr_Profit[n];
int arr_fenish_dedline[n];
    for (int i = 0; i < n; i++)
    {
        istringstream(arr[i][1])>>arr_Deadline[i];
        istringstream(arr[i][2])>> arr_Profit[i];
    }

int temp=0;
int Sorted_profit[n];
cout<<"The profit : ";
    for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr_Profit[i] < arr_Profit[j])
			{
				temp = arr_Profit[i];
				arr_Profit[i]=arr_Profit[j];
				arr_Profit[j]=temp;
				Sorted_profit[i]=arr_Profit[i];
			}
		}
						cout<<endl<<Sorted_profit[i];

	}

		cout<<endl<<endl<<"The final :"<<endl;				\


	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		    for(int k=0;k<n;k++)
		    {
		        if(Sorted_profit[0]==arr_Profit[j])
		{
		    arr_fenish_dedline[arr_Deadline[j]]=arr_Deadline[j];
		}
		else if(arr_Deadline[j]==arr_Deadline[k])
        {}
        else if(arr_Deadline[j]>arr_Deadline[k])
        {arr_fenish_dedline[arr_Deadline[j]]=arr_Deadline[j];}
        else if(arr_Deadline[j]<arr_Deadline[k])
        {arr_fenish_dedline[arr_Deadline[j]]=arr_Deadline[k];}
		else
		{return 0;}
		    }

		}
		cout<<arr[1][0];				\
	}


    return 0;
}
