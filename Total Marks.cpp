#include<iostream>
using namespace std;
int main(){
	
	int rollno;
	float marks[5], totalmarks=0, percentage;
	cout<<"Enter your roll number:";
	cin>>rollno;
	for(int i=0; i<5; i++){
	cout<<"Enter marks of subject "<<i+1<< ": ";  
	cin>>marks[i];
	totalmarks+= marks[i];
	}
	percentage = (totalmarks/500.0)*100;
	
	cout<<"Total marks= "<<totalmarks<<endl;
	cout<<"Percentage= "<<percentage<<"%";
	
	
	
	return 0;
}
