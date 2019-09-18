#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string chirp;

  do
  {

    cout<<"Please enter your Chirp:"<<endl;
    getline(cin,chirp);

    if( chirp.length() > 100 )
    {
      cout<<"Sorry, Chirps must be under 100 characters.\n";
      cout<<"Yours was "<<chirp.length()-100<<" too long!\n";
    }
  }while( chirp.length() > 100 );

  return 0;
}
