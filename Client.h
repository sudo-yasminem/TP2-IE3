#include <iostream>

class Client{
    public:
    std::string id;
    std::string nom;
    std::string prenom;
    std::string id();
    std::string nom();
    std::string prenom();
    void updateNom(std::string nom);
    void updatePrenom(std::string prenom);
    private:
    std::string _id;
    std::string _nom;
    std::string _prenom;
    
};