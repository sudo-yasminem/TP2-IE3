#include <iostream>

class Chambre{
    public:
    int numero;
    std::string type;
    int prix;
    int numero();
    int prix();
    std::string type();

    private:
    int _numero;
    std::string _type;
    int _prix;

};