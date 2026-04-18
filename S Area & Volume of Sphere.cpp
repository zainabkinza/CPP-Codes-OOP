#include<iostream>
using namespace std;
	
	float surfacearea(float r){
		float area;
		area = 4 * 3.142 * r * r;
		return area;
	}
	
	float volume(float r){
		float vol;
		vol = (4.0/3)*3.142*r*r*r;
		return vol;
	}
	
	int main(){
		int r;
		cout<<"Enter radius: ";
		cin>>r;
		surfacearea (r);
		cout<<"Surface area of sphere = "<<r<<endl;
		volume (r);
		cout<<"Volume of sphere = "<<r<<endl;
		
		return 0;
	}