#include<iostream>
using namespace std;
int main()
{
	int subject,i;
	float marks,totalmarks,average,percentage;
	cout<<"enter the no.of subjects";
	cin>>subject;
	cout<<"\nenter the marks of each sujcect";
	for(i=0;i<subject;i++)
	{
		
		cin>>marks;
		totalmarks+=marks;
	}
	average=totalmarks/subject;
	percentage=(totalmarks/(subject*100))*100;
	cout<<"total marks"<<totalmarks<<endl;
	cout<<"average"<<average<<endl;
	cout<<"percentage"<<percentage<<endl;
	return 0;
}
