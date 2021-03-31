#ifndef PUISSANCE4_CPP
#define PUISSANCE4_CPP

#include "Grille.h"
#include "Puissance4.h"
#include <iostream>


    Puissance4::Puissance4() : _symboleCourant('X') {}

    void Puissance4::afficheGrille(){
        _grilleDeJeu.affiche();
    }

    void Puissance4::ajouteSymbole(int x, int y){
        _grilleDeJeu.setContent(x,y,_symboleCourant);
    }

    bool Puissance4::testeVictoireVerticale(){
        for(int i=0;i<7;i++){
            for (int j = 0; j<3; j++){ 
                if(_grilleDeJeu.getContent(j,i)==_grilleDeJeu.getContent(j,i) && _grilleDeJeu.getContent(j,i)==_grilleDeJeu.getContent(j,i) && _grilleDeJeu.getContent(j, i)==_grilleDeJeu.getContent(j,i) && _grilleDeJeu.getContent(j,i)!=' '){
                    return true;
                }
            }
        }
        return false;
    }

    bool Puissance4::testeVictoireHorizontale(){
        for(int i=0;i<6;i++){
            for(int j = 0; j < 4; j++){
                if(_grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i,j) && _grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i,j) && _grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i,j) && _grilleDeJeu.getContent(i,j)!=' '){
                    return true;
                }
            }
        }
        return false;   
    }

    bool Puissance4::testeVictoireDiagonale(){
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 3; j++){
                if (_grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i+1, j+1) && _grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i+2,j+2) &&  _grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i+3,j+3) && _grilleDeJeu.getContent(i,j)!=' '){
                    return true;
                }
                if (_grilleDeJeu.getContent(i,j+1)==_grilleDeJeu.getContent(i+1,j+2) && _grilleDeJeu.getContent(i,j+1)==_grilleDeJeu.getContent(i+2,j+3) && _grilleDeJeu.getContent(i,j+1)==_grilleDeJeu.getContent(i+3,j+4) && _grilleDeJeu.getContent(i,j+1)!= ' '){
                    return true;
                }
                if (_grilleDeJeu.getContent(i,j+2)==_grilleDeJeu.getContent(i+1,j+3) && _grilleDeJeu.getContent(i,j+2)==_grilleDeJeu.getContent(i+2,j+4) && _grilleDeJeu.getContent(i,j+2)==_grilleDeJeu.getContent(i+3,j+5) && _grilleDeJeu.getContent(i,j+1)!= ' '){
                    return true;
                }
                if (_grilleDeJeu.getContent(i,j+3)==_grilleDeJeu.getContent(i+1,j+4) && _grilleDeJeu.getContent(i,j+3)==_grilleDeJeu.getContent(i+2,j+5) && _grilleDeJeu.getContent(i,j+3)==_grilleDeJeu.getContent(i+3,j+6) && _grilleDeJeu.getContent(i,j+1)!= ' '){
                    return true;
                }
            }
        }
    }

    bool Puissance4::testeJeuNul(){
        return _numeroTour==10;
        }

    void Puissance4::finTour(){
        _symboleCourant=='X'?_symboleCourant='O':_symboleCourant='X';
        _numeroTour++;
   }

#endif