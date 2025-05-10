#include "main.h"

void MainMenu() {

	std::cout << "Main Menu: \n";
	std::cout << "1. Check out book\n";
	std::cout << "2. Check in book\n";
	std::cout << "3. Add book\n";
	std::cout << "4. Log out\n";
	std::cout << std::endl;
}

void LoginMenu() {
	std::cout << R"(
Menu:
1. Create Account
2. Sign in
3. Quit )" << std:: endl;

}


int main() {
	
	std::cout << R"(

      __        __   _                              
      \ \      / /__| | ___ ___  _ __ ___   ___  
       \ \ /\ / / _ \ |/ __/ _ \| '_ ` _ \ / _ \ 
        \ V  V /  __/ | (_| (_) | | | | | |  __/ 
         \_/\_/ \___|_|\___\___/|_| |_| |_|\___| 
                                                          
  )" << std::endl;

	int choice = 0;

	while(choice != 3) {
  
    LoginMenu();

    std::string username;
    std::string password;

    std::cout << "Enter your choice: ";
    std::cin >> choice;

	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input! Please enter a number.\n";
		continue;
	}

    if (choice == 1) {
      std::cout << "Create your username: ";
      std::getline(std::cin, username);
      std::cout << "Creatte your password: ";
      std::cin >> password;
      std::getline(std::cin, password);

    }
    else if (choice == 2) {
      std::cout << "Enter your username: ";
      std::getline(std::cin, username);
      std::cout << "Enter your password: ";
      std::getline(std::cin, password);

    }
    else if (choice == 3) {
		std::cout << "Quiting program. Goodbye!!!\n";
    }

    else {
      std::cout << "Invalid choice, try again." << std::endl;
    }


  }

  return 0;

}
