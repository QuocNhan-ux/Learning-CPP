#include <iostream>

void MainMenu() {

  std::cout << "Main Menu: \n";
  std::cout << "1. Check out book \n";
  std::cout << "2. Check in book \n";
  std::cout << "3. Add book \n";
}

void LoginMenu()
{
  std::cout << "Menu:\n";
  std::cout << "1. Create Account\n";
  std::cout << "2. Sign in\n";
  std::cout << std::endl;
}


int main()
{

  std::cout << R"(

      __        __   _                              
      \ \      / /__| | ___ ___  _ __ ___   ___  
       \ \ /\ / / _ \ |/ __/ _ \| '_ ` _ \ / _ \ 
        \ V  V /  __/ | (_| (_) | | | | | |  __/ 
         \_/\_/ \___|_|\___\___/|_| |_| |_|\___| 
                                                          
  )" << std::endl;

  LoginMenu();

  std::string name;

  std::cout << "Enter your name: ";
  std::getline(std::cin, name);

  std::cout << "Hello " << name << "!!!" << std::endl;

  std::cout << "Test again";



  return 0;

}
