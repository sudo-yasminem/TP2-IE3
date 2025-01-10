
#include <iostream>
#include <vector>
#include "Client.h"
#include "Hotel.h"
#include "Reservation.h"





int main(){
    
   std::vector <Client> vclients;
   std::vector <Chambre> vhotel;

   Client a;

   /* std::cout << "Entrez votre prénom" << std::endl;
    //Marche pas à cause de >> 
    std::cin >> a.prenom();
    std::cout << "Entrez votre nom" << std::endl;
    std::cin >> a.nom();
    */

    for (auto i: vclients){
        //recherche du client a dans vclients
            //if (std::find(vclients.begin(),vclients.end(),a) != vclients.end())
            vclients.push_back(a);
            std::cout << "Bienvenue chez nous, M/Mme" << a.prenom() << "  " << a.nom() << std::endl;
            
            /*else{
                return "Rebonjour, M/Mme" + a._prenom + " " + a._nom;
            }*/
        
    }
   

   

//Surcharge d'opérateur pour afficher les objets Client dans le vecteur
    /*for (auto i: vclients){
        std::cout<<i;
    }*/
    

   for(int i=1; i<4; i++){
    Chambre c(i,"Single",100);
    vhotel.push_back(c);
    //std::cout<<c; 
    }



   for(int i=4; i<=8; i++){
    Chambre c(i,"Double",125);
    vhotel.push_back(c);
    //std::cout<<c;
   }  

    for(int i=8; i<10; i++){
    Chambre c(i,"Suite",210);
    vhotel.push_back(c);
    //std::cout<<c;
   } 


   
    return 0;
}

