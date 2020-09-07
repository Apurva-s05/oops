#include <iostream>
using namespace std;

#define AREA(l,b) (l*b)   //Macro parameter
#define UPPER_LIMIT 10   //Macro defination

int main() {
	cout << "Area of rectangle: " <<AREA(6,9)<< endl;

	for(int i=0;i<UPPER_LIMIT;i++){
		if(i%2==0){
			cout<<"Even Number: "<<i<<endl;
		}else{
			cout<<"Odd number: "<<i<<endl;
		}
	}
	return 0;
}
