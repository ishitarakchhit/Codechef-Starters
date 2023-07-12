#include <iostream>
using namespace std;

void calc(int A, int B, int X, int Y){
    int messi = 2*A + B;
    int ronaldo = 2*X + Y;
    
    if(messi > ronaldo)
        cout<<"Messi";
    else if(messi < ronaldo)
        cout<<"Ronaldo";
    else 
        cout<<"Equal";
}
int main() {
	// your code goes here
	int A, B, X, Y;
	cin>> A>>B>>X>>Y;
	
	calc(A,B,X,Y);
	return 0;
}
