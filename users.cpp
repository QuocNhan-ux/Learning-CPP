#include "users.h"
#include <iostream>

Users::Users(std::string nm, int ID, std::string user, std::string pass)
: name(nm), patronID(ID), username(user), password(pass), fineBalance(0.0), numBooks(0), numCDs(0)  {}

Users::Users() : patronID(0), fineBalance(0.0), numBooks(0), numCDs(0) {}