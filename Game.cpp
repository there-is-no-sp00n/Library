#include "Game.h"

using namespace std;

Game::Game()
{

}

string Game::get_title()
{
	return title;
}

string Game::get_publisher()
{
	return publisher;
}

string Game::get_year()
{
	return year;
}

string Game::get_platform()
{
	return platform;
}

string Game::get_genre()
{
	return genre;
}