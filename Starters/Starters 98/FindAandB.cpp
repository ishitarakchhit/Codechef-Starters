#include <iostream>
using namespace std;

bool checkAB(int A, int B){
    if(B == 0)
        return false;
    if(A%B == 0){
        cout<<A<<" "<<B;
        return true;
    }
    return false;
}

//function to print numbers A and B 
void findnumbers(int X, int Y, int Z){
    long A, B;
    
    B = X;
    A = Y*Z;
    if(checkAB(A, B))
        return;
    
    B = Y;
    A = X*Z;
    if(checkAB(A, B))
        return;
    
    B = Z;
    A = X*Y;
    if(checkAB(A, B))
        return;
    else
        cout<<"-1";
    
}
int main() {
	// your code goes here
	int T;
	int X, Y, Z;
	cin>> T;
	
	for(int i=0; i<T; i++){
	    cin>>X>>Y>>Z;
	    findnumbers(X, Y, Z);
	    cout<<endl;
	}
	return 0;
}
