#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;

//function to calculate arrival and departure timings
void calc(vector<int> &A, vector<int> &D, int &N){
    unordered_map<int, int> mp;
    
    for( int i=0; i<N; i++){
        mp[A[i]]++;
    }
    for( int i=0; i<N; i++){
        mp[D[i]]++;
    }

    int runway= 0;
    
    for(auto itr=mp.begin(); itr!=mp.end(); itr++){
        //cout<<itr->first<<" "<<itr->second<<endl;
        runway = max(runway,itr->second);
        
    }
    cout<<runway;
}


int main() {
	// your code goes here
	int T;
	cin>> T;
    int N;
	for(int i = 0; i<T; i++){
	    cin>>N;
	    vector<int> A;
        int element;
	    for(int i=0; i<N; i++){
            cin>>element;
            A.push_back(element);
        }
	        
	    vector<int> D;
	    for(int i=0; i<N; i++){
            cin>>element;
            D.push_back(element);
        }
	        
        calc(A, D, N);
        cout<<endl;
	}
	return 0;
}
