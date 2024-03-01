#include <iostream>
#include <string>
using namespace std;

int main() {
	
    string a;
    string b;
    cin>>a;
    cin>>b;
  
    // size of the string
    int a_len = a.size();
    int b_len = b.size();
  
    cout<<a_len<<" "<<b_len<<endl;
    
    // concatenate two string
    string c = a+b;  
    cout<<c<<endl;
    
    // swaping
    
    swap(a[0],b[0]);
    
    cout<<a<<" "<<b;
    return 0;
}
