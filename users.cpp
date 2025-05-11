#include "users.h"
#include <iostream>

Users::Users(std::string name, int ID, std::string user, std::string pass) 
: name(name), patronID(ID), username(user), password(pass), fineBalance(0.0)  {}