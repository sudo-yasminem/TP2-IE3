#include <iostream>
#include <vector>
#include "Client.h"
#include "Hotel.h"



int main(){
    
   std::vector <Client> vclients;
   std::vector <Chambre> vhotel;

   for(int i=0; i<=3; i++){
    Chambre c(i,"Single",100);
    vhotel.push_back(c);
    for (auto i: vhotel);{
        std::cout << "Numéro de chamrbre: " << c.numero_chambre() << std::endl;
        std::cout << "Type : " << c.type() << std::endl;
        std::cout << "Prix : " << c.prix_chambre() << std::endl;
    }
   } 

   

    /*for(int i=0;i<H.nb_chambres();i++){
        std::cout << chambres[i].type() << std::endl;

    }*/
   //std::cout<<client;

    
    return 0;
}