#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

using namespace std;

class Game
{
	public:
		Game();

		Game(string title_1, string publisher_1, string year_1, string platform_1, string genre_1)
		{
			title = title_1;
			publisher = publisher_1;
			year = year_1;
			platform = platform_1;
			genre = genre_1;
		}

		string get_title();
		string get_publisher();
		string get_year();
		string get_platform();
		string get_genre();


	private:
		string title;

		string publisher;

		string year;

		string platform;

		string genre;

};


#endif