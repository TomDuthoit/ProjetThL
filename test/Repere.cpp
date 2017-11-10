#include <cmath>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Repere.h"

using namespace std;

Repere::Repere(sf::RenderWindow *window, sf::VideoMode *videoMode)
{
	this->x = videoMode->width/2;
	this->y = videoMode->height/2;
	auto absColor = sf::Color(0, 0, 0, 255);

	sf::Vertex ordone[] =
	{
		sf::Vertex(sf::Vector2f(videoMode->width/2, 0),absColor),
		sf::Vertex(sf::Vector2f(videoMode->width/2, videoMode->height),absColor)
	};

	sf::Vertex absice[] =
	{
		sf::Vertex(sf::Vector2f(0, videoMode->height/2),absColor),
		sf::Vertex(sf::Vector2f(videoMode->width, videoMode->height/2),absColor)
	};


	window->draw(ordone, 2, sf::Lines);
	window->draw(absice, 2, sf::Lines);
	this->window = window;
	this->videoMode = videoMode;
	this->lx = 30;
	this->ly = 30;

		drawScaleX(x+lx,y);

	
}



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


void Repere::drawPoint(double x, double y){
	auto absColor = sf::Color(0, 0, 0, 255);

   // définit un rectangle de 120x50
	sf::RectangleShape rectangle(sf::Vector2f(x, y));
	rectangle.setFillColor(absColor);

// change sa taille en 100x100
	rectangle.setSize(sf::Vector2f(10, 10));

	this->window->draw(rectangle);


}

void Repere::drawScaleX(double x, double y){
	cout << "salut" << endl;
	auto absColor = sf::Color(0, 0, 0, 255);

   // définit un rectangle de 120x50
	sf::RectangleShape rectangle(sf::Vector2f(x, y));
	rectangle.setFillColor(absColor);

// change sa taille en 100x100
	rectangle.setSize(sf::Vector2f(10, 10));

	this->window->draw(rectangle);

}

