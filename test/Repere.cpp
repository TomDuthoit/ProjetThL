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
	//this->drawPoint(100,100);
	for(auto i = x+lx; i < videoMode->width; i+=lx){
		drawScaleX(i,y);
		drawScaleX(2*x-i,y);

	}
	for(auto i = y+ly; i < videoMode->height; i+=lx){
		drawScaleY(x,i);
		drawScaleY(x,2*y-i);

	}
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
	sf::RectangleShape rectangle(sf::Vector2f(10, 10));
	rectangle.setPosition(x, y);
	rectangle.setFillColor(absColor);


	window->draw(rectangle);


}

void Repere::drawScaleX(double x, double y){
	auto absColor = sf::Color(0, 0, 0, 255);

   // définit un rectangle de 120x50
	sf::RectangleShape rectangle(sf::Vector2f(1, 5));
	rectangle.setPosition(x-0.5, y-2.5);
	rectangle.setFillColor(absColor);


	this->window->draw(rectangle);

}
void Repere::drawScaleY(double x, double y){
	auto absColor = sf::Color(0, 0, 0, 255);

   // définit un rectangle de 120x50
	sf::RectangleShape rectangle(sf::Vector2f(5, 1));
	rectangle.setPosition(x-2.5, y-0.5);
	rectangle.setFillColor(absColor);


	this->window->draw(rectangle);

}

