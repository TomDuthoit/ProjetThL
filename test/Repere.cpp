#include <cmath>
#include <iostream>
#include "Repere.h"

using namespace std;

Repere::Repere() : x(0), y(0)
{}

Repere::Repere(double x, double y) : x(x), y(y)
{}

void Repere::setX(double x)
{
	this->x = x;
}

void Repere::setY(double y)
{
	this->y = y;
}

double Repere::getOrigX() const
{
	return this->x;
} 

double Repere::getOrigY() const
{
	return this->y;
} 

void Repere::afficher() const
{
	cout << "L'abscisse vaut " << this->x << endl;
	cout << "L'ordonnée vaut " << this->y << endl;
}