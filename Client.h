#include <iostream>

class Client{
    public:
    Client(int id, std::string nom, std::string prenom);
    int id();
    std::string nom();
    std::string prenom();
    void updateNom(std::string nom);
    void updatePrenom(std::string prenom);
    //friend std::ostream& operator<< (ostream& os, Client &c);
    private:
    int _id;
    std::string _nom;
    std::string _prenom;
    
};