#include <iostream>
using namespace std;

int main() {
    //Write your code here
	char cha;
    	
	// cout<<"Enter any character";
     cin >> cha;
    if(cha>='A' && cha<='Z'){
		cout<<1;
	}
	else if(cha>='a' && cha<='z'){
		cout<<0;
	}
	else{
		cout<<-1;
	}
    return 0;
}