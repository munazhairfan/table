#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number you want the table of.\n";
	cin>>num;
	for(int i=1;i<11;i++){
		int table = num*i;
		cout<<num<<'x'<<i<<'='<<table<<endl;
	}
}
