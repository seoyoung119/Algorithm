#include <iostream>
using namespace std; 

int main(){
    int n;
    int min = 100;
    int odd=0;
        
    for(int i=0; i<7; i++){
        cin >> n;
        if(n%2 != 0){
            odd += n;
            if(n<min)
                min = n;
        }
        
    }
    
    if(odd == 0)
        cout<< -1;
    
    cout << odd << endl;
    cout << min << endl;
    return 0;
}