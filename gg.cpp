#include <iostream>
using namespace std;

int main ()
{
long long tablica[50*1000+10];
int n,y;
cin >>n;

for (int z=0; z<n; z++)
    cin >>tablica[z];

for (int i=n-2; i>=0; i--)
  tablica [i]+=tablica [i+1];

for (int i=0; i<n; i++)
  cout << tablica[i] << " ";






}
