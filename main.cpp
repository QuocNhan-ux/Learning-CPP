#include <iostream>
using namespace std;

void Mainmenu()
{
  cout << "Main Menu:\n";
  cout << "1. Create Account\n";
  cout << "2. Sign in\n";
  cout << endl;
}


int main()
{

  cout << R"(

      __        __   _                              
      \ \      / /__| | ___ ___  _ __ ___   ___  
       \ \ /\ / / _ \ |/ __/ _ \| '_ ` _ \ / _ \ 
        \ V  V /  __/ | (_| (_) | | | | | |  __/ 
         \_/\_/ \___|_|\___\___/|_| |_| |_|\___| 
                                                          
  )" << std::endl;

  Mainmenu();
  
  string name;

  cout << "Enter your name: ";
  getline(cin, name);

  cout << "Hello " << name << "!!!" << endl;



  return 0;

}
