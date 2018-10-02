#include <iostream>
using namespace std;
int main ()

{

cout << "Dammi il numero " ;
int n;
cin >> n;
int f;
int x;
int j;

j = 1; 
f = n;

if ( n == 0) {

cout << "Il fattoriale di " << n << " vale " << x << endl;

} else {

while ( f > 1 ) {

f = f - 1;

j = j * f;

}

x = j * n;

cout << "Il fattoriale di " << n << " vale " << x << endl;
}
return 0;
}
