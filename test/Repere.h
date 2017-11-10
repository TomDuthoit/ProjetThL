#ifndef POINT_H
#define POINT_H

#include <iostream>

class Repere
{
public:
  // Constructeurs
  Repere(sf::RenderWindow *window,sf::VideoMode *videoMode);

  //Accesseurs et mutateurs
  void setX(double x);
  void setY(double y);
  double getOrigX() const;
  double getOrigY() const;

  void drawPoint(double, double);
  void drawScaleX(double x, double y);
  void drawScaleY(double x, double y);

  // Autres méthodes
  void afficher() const;

private: 
  double x,y,lx,ly;                     //X et y sont les coordonée du centre du repèrre. lx et ly sont les longueur en pixel pour normé le repère.
  sf::RenderWindow *window;
  sf::VideoMode *videoMode;

};

#endif