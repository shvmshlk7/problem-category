#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {   
        int x;
        cin>>x;
        
        if(x>=1 && x<100)
        {
            cout<<"EASY"<<endl;
        }
        else if (x>=100 && x<200)
        {
            cout<<"MEDIUM"<<endl;
        }
        else if (x>=200 && x<=300)
        {
            cout<<"HARD"<<endl;
        }
    }
	// your code goes here
	return 0;
}
