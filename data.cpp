#include <iostream>
using namespace std;

int main() {
  
    int d;
    int m;
    int y;
    

    
    cin >> d >> m >> y;
    if (d < 0 || m < 0 || y <= 0){
        cout << "NIE";
        return 0;
    }
    
    
    if (d > 31){
        cout << "NIE";
    }
    else if (m>12){
        cout << "NIE";
    }
    else if (m==2){
        if (y%4 == 0 && (y%100 != 0 || y%400 == 0)){
            if (d >= 1 && d<=29)
                cout << "TAK";
            else
                cout << "NIE";
        }
        else{
            if (d >= 1 && d<=28)
                cout << "TAK";
            else
                cout << "NIE";
            

        }
    }
    else{
        if ((m == 1 ||  3 ||  5 || 7 || 8 || 10|| 12)&& (d>=1 && d<=31)){
            cout << "TAK";
        }
        else{
            
            cout << "NIE";
        }
        
    }

} 
