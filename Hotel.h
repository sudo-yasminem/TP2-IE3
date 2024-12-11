#include <iostream>
#include "Chambre.h"

class Hotel{
    public:
    std::string id;
    std::string nom;
    std::string ville;
    Chambre tab[];
    std::string id();
    std::string nom();
    std::string ville();

    private:
    std::string _id;
    std::string _nom;
    std::string _ville;
    
};