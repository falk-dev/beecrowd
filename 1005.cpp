// 1005 - MÉDIA 1 | RESOLVIDO EM C++

#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 double A;
    double B;
    double media;
    
    cin >> A;
    cin >> B;
    
    media = (3.5 * A + 7.5 * B) / 11;
    
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << media << endl;
 
    return 0;
}