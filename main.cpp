
#include <iostream>
#include <vector>
#include "Client.h"
#include "Hotel.h"





int main(){
    
   std::vector <Client> vclients;
   std::vector <Chambre> vhotel;

   Client a(100, "Jean", "Caissetou");
   Client b(320, "Joris", "Lemaire");

    vclients.push_back(a);
    vclients.push_back(b);

//Surcharge d'opérateur pour afficher les objets Client dans le vecteur
    for (auto i: vclients){
        std::cout<<i;
    }
    

   for(int i=1; i<4; i++){
    Chambre c(i,"Single",100);
    vhotel.push_back(c);
    std::cout<<c; 
    }



   for(int i=4; i<=8; i++){
    Chambre c(i,"Double",125);
    vhotel.push_back(c);
    for (auto i: vhotel);{
        std::cout << "Numéro de chamrbre: " << c.numero_chambre() << std::endl;
        std::cout << "Type : " << c.type() << std::endl;
        std::cout << "Prix : " << c.prix_chambre() << " EUR" << std::endl;
    }
   }  

    for(int i=8; i<10; i++){
    Chambre c(i,"Suite",210);
    vhotel.push_back(c);
    for (auto i: vhotel);{
        std::cout << "Numéro de chamrbre: " << c.numero_chambre() << std::endl;
        std::cout << "Type : " << c.type() << std::endl;
        std::cout << "Prix : " << c.prix_chambre() << std::endl;
    }
   } 


   
    return 0;
}

