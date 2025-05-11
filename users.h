#ifndef USER_H
#define USER_H

#include <string>

class Users {
public:
    Users(std::string nm, int ID, std::string user, std::string pass);
    Users();

    std::string getname() const;
    std::string getUsername() const;
    std::string getPassword() const;
    int getpatronID() const;
    float getFineBalance() const;
    int getNumBooks() const;

    void setName(std::string nm);
    void setUsername(std::string user);
    void setPassword(std::string pass);
    void setPatronID(int ID);
    void getFineBalance(float fine);
    void getNumBooks(int num);


private:
    std::string name;
    std::string username;
    std::string password;
    int patronID;
    float fineBalance;
    int numBooks;
    int numCDs;
};






#endif