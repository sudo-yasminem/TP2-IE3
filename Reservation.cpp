#include "Reservation.h"
#include "Date.h"
#include <iostream>
#include <vector>
#include "Hotel.h"


Reservation::reservation(Date date_debut, int nb_nuits, int id_hotel){
    _nb_nuits = nb_nuits;
    _id_hotel = id_hotel;
   _date_debut = date_debut
}

Date Reservation::date_debut(){
    return _date_debut;
}

int Reservation::nb_nuits(){
    return _nb_nuits;
}

int Reservation::id_hotel(){
    return _id_hotel;
}

int Reservation::id_chambre(){
    return _id_chambre;
}

int Reservation::id_client(){
    return _id_client;
}

int Reservation::prix_total(){
    return _prix_total;
}

void Reservation::updateDateDebut(Date date){

}

void Reservation::updateNbNuits(int nb_nuits){
    _nb_nuits = nb_nuits;
}

int getPrixChambre(Reservation a, std::vector <Chambre> chambres){
    /*int val;
    Chambre Chambre;
    a.id_chambre() = val;
    if (a.id_chambre() == val){
        if(Chambre.type()=="Single"){
            return 100;
        else if(Chambre.type()=="Double"){
            return 125;
        }
        else if(Chambre.type()=="Suite"){
            return 200;
        }
        }
    }*/
 }

void setIdHotel(int id2, Hotel hotel){
    tmp = hotel.id();
    tmp = id2;
    Hotel::SetId(id2);
}


int Reservation::montant_total(Reservation a){
    //Get PrixChambre
    //int total = a._nb_nuits*a.getPrixChambre(); 
    return 0;
}