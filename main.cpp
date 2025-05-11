#include "main.h"
#include "users.h"

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
	std::string username, password, firstname, lastname;
	while(choice != 3) {
    LoginMenu();
    std::cout << "Enter your choice: ";
    std::cin >> choice;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input! Please enter a number.\n";
		continue;
	}

    if (choice == 1) {
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	  std::cout << "Enter your first name: ";
	  std::getline(std::cin, firstname);
	  std::cout << "Enter your last name: ";
	  std::cin >> lastname;
	  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Create your username: ";
      std::cin >> username;
	  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Creatte your password: ";
      std::cin >> password;

	  std::cout << "Name: " << firstname << " " << lastname << std::endl;
	  std::cout << "Username: " << username << std::endl;
	  std::cout << "Password: " << password << std::endl;

    } else if (choice == 2) {
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Enter your username: ";
      std::cin >> username;
	  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Enter your password: ";
      std::cin >> password;
    } else if (choice == 3) {
      	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Quiting program. Goodbye!!!\n";
    } else {
      std::cout << "Invalid choice, try again." << std::endl;
    }


  }

  return 0;

}
