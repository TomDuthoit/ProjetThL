#ifndef POINT_H
#define POINT_H

#include <iostream>

class Repere
{
public:
  // Constructeurs
  Repere();
  Repere(double x, double y);

  //Accesseurs et mutateurs
  void setX(double x);
  void setY(double y);
  double getOrigX() const;
  double getOrigY() const;

  // Autres méthodes
  void afficher() const;

private: 
  double x,y;
};

#endif