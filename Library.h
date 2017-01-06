#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include <iomanip>
#include "Comic.h"
#include "Game.h"
#include "Novel.h"

using namespace std;

class Library
{
	public:
		Library();

		//pertaining to comics
		void add_comic(vector <Comic> from_controller);

		void print_all_comics(vector <Comic> print_com);

		void delete_comic(vector <Comic> arrive_cont);

		vector <Comic> get_comic_vec();


		//pertaining to games
		void add_game(vector <Game> from_cont);

		void print_all_games(vector <Game> print_game);

		void delete_game(vector <Game> ze_list);

		vector <Game> get_game_vec();


		//pertaining to novels
		void add_novel(vector <Novel> from_cont);

		void print_all_novels(vector <Novel> print_novel);

		void delete_novel(vector <Novel> novel_list);

		vector <Novel> get_novel_vec();

	private:
		vector <Comic> all_comic;
		vector <Game> all_game;
		vector <Novel> all_novel;
};

#endif