#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;
class Array
{
	int array[100000];
	int size;
	time_t start,end;
	public:
	void insert();
	void display();
	void bubble_sort();
	void insertion_sort();
	void Linear_search();
	void Binary_search();
	void insertion();
	void deletion();
	void choice();
};
void Array::Binary_search()
{
	bubble_sort();
	int lower=0, upper=size-1,midle,item;
	cout<<"Enter the item which you want to search\n";
	cin>>item;
	while(lower<=upper)
	{
		midle=(lower+upper)/2;
		if(item==array[midle])
		{
			cout<<"Element Found at : "<<midle;
			getch();
			return;
		}
		else if(item<array[midle])
		{
			upper=midle-1;
		}
		else
		{
			lower=midle+1;
		}

	}
	cout<<"Item not found\n";
	getch();
}
void Array::insertion_sort()
{
	int i,j,temp;
	for(i=1;i<size;i++)
	{
		temp=array[i];
		for(j=(i-1);j>=0 && temp<array[j];j--)
		{
				array[j+1]=array[j];
		}
		array[j+1]=temp;
	}
}
void Array::insert()
{
	int i,temp;
	cout<<"Enter number of elements of the array\n";
	cin>>size;
	temp=size;
	for(i=0;i<size;i++)
	{
	  array[i]=temp--;
	}
}
void Array::deletion()

{
	int delnum,i,j;
	cout<<"Enter the number which you want to delete\n";
	cin>>delnum;
	for(i=0;i<size;i++)
	{
		if(array[i]==delnum)
		{
			for(j=i+1;j<size;j++)
			{
				array[j-1]=array[j];
			}
			break;
		}
	    if(array[i]!=delnum && i==size-1)
	    {
	    	cout<<"Element not found\n";
	    	getch();
	    }
	}
	size=size-1;
}
void Array::display()
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
}
void Array::bubble_sort()
{
	int temp,i,j;
	for(i=0;i<size;i++)
	{
		for(j=1;j<size-i;j++)
		{
			temp=array[j-1];
			if(temp>array[j])
			{
				array[j-1]=array[j];
				array[j]=temp;
			}
		}
	}
}
void Array::insertion()
{
	int data,index,i;
	cout<<"Enter the element which you want to insert\n";
	cin>>data;
	cout<<"Enter the position where you want to enter\n";
	cin>>index;
	if(index<size)
	{
	for(i=size;i>index;i--)
	{
		
			array[i]=array[i-1];
	}
	array[index]=data;
	size=size+1;
    }
    else
      cout<<"Position is invalid\n";
}
void Array::Linear_search()
{
	int number,i;
	cout<<"Enter the element you want to search\n";
	cin>>number;
	for(i=0;i<size;i++)
	{
		if(array[i]==number)
		{
			cout<<"Element Found : "<<i;
			break;
		}
		if(array[i]!=number && i==size-1)
		{
			cout<<"Element not found\n";
		}
	}
}
void Array::choice()
{
	int k;
	while(1)
	{	
	system("cls");
cout<<"1.Insert Elements in the array\n2.Display the elements\n3.Bubble Sort\n4.Insertion Sort\n5.Linear Search\n6.Binary Search\n7.Insertion\n8.Delete the element from the array\n9.Exit\nEnter Your choice\n";
cin>>k;
switch(k)
{
	Array A1;
	case 1:
		A1.insert();
		break;
	case 2:
		start=time(NULL);
		A1.display();
		end=time(NULL);
		cout<<"Execution time to display the element is=\n"<<(end-start);
		getch();
		break;
	case 3:
		start=time(NULL);
		A1.bubble_sort();
		end=time(NULL);
		cout<<"Execution time in bubble sorting is=\n"<<(end-start);
		getch();
		break;
	case 4:
		start=time(NULL);
		A1.insertion_sort();
		end=time(NULL);
		cout<<"Execution time in insertion sorting is=\n"<<(end-start);
		getch();
		break;
	case 5:
		start=time(NULL);
		A1.Linear_search();
		end=time(NULL);
		cout<<"Execution time in Linear search is=\n"<<(end-start);
		getch();
		break;
	case 6:
		start=time(NULL);
		A1.Binary_search();
		end=time(NULL);
		cout<<"Execution time in Binary search is=\n"<<(end-start);
		getch();
		break;
	case 7:
		A1.insertion();
		break;
	case 8:
		A1.deletion();
		break;
	case 9:
		exit(0);
	default:
		cout<<"\nWrong choice\n";
}
}
}
int main()
{
	Array A1;
	A1.choice();
	return 0;
}
