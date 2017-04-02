//The Collatz conjecture
//Simone Cimolato, 09/08/2016

#include <iostream>
using namespace std;

long long n;                     //you can change the variable to long double if you want to try with bigger numbers, but it will print the number in scientific notation 
int count,ver;                   //try changing n into 63728127 :)

bool even (int n);

int main() {
cout<<"Enter a number: ";
cin>>n;
cout<<n<<endl;

if (n>0) {
	ver=1;
}

while (n!=1 and n!=-1 and n!=0) {

if(n<0 and ver==1) {
		cout<<"Overflow, your number is too large."<<endl;
		return 1;
}

 if (even(n)) {
 	n/=2;                   //n/2
 	cout<<n<<endl;
 	count++;
 }
 else {
 	n=(n*3)+1;              //3n+1
 	cout<<n<<endl;
	n/=2;                   //after 3n+1 we always get an even number, n=n/2 without checking again
	count+=2;
	cout<<n<<endl;
 }
}
cout<<endl;
cout<<"Total steps required: "<<count<<endl
	<<endl;
system("PAUSE");
return 0;
}


bool even(int n) {              //this function recognize if n is odd or even
	if (n%2==0) return true;    //even
	else return false;          //odd
}
