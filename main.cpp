#include <iostream>

using namespace std;

void spausdinimas();

int main()
{
  spausdinimas();
  return 0;
}

void spausdinimas()
{
  int n;
  string a;
  cout << "Irasykite savo varda:\n";
  cin >> a;
  n = a.length() + 13;
  for(int i=0; i<n; i++)
  {
  cout <<"*";
  }
  cout << "\n";
  cout <<"*";
  for(int i=0; i<n-2; i++)
  {
  cout <<" ";
  }
  cout <<"*\n";
  cout <<"* Sveikas, "<< a <<" *\n";
  cout <<"*";
  for(int i=0; i<n-2; i++)
  {
  cout <<" ";
  }
  cout <<"*\n";
  for(int i=0; i<n; i++)
  {
  cout <<"*";
  }
  cout <<"\n";
}
