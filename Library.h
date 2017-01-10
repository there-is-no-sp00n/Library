#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include <iomanip>

#include "Comic.h"
#include "Game.h"
#include "Novel.h"
#include "Media.h"

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

		void sort_comic(vector <Comic> from_cont);

		void search_comic(vector <Comic> from_cont);


		//pertaining to games
		void add_game(vector <Game> from_cont);

		void print_all_games(vector <Game> print_game);

		void delete_game(vector <Game> ze_list);

		vector <Game> get_game_vec();

		void sort_game(vector <Game> from_cont);

		void search_game(vector <Game> from_cont);


		//pertaining to novels
		void add_novel(vector <Novel> from_cont);

		void print_all_novels(vector <Novel> print_novel);

		void delete_novel(vector <Novel> novel_list);

		vector <Novel> get_novel_vec();

		void sort_novel(vector <Novel> from_cont);

		void search_novel(vector <Novel> from_cont);


		//pertaining to media

		void add_media(vector <Media> from_cont);

		void print_all_media(vector <Media> print_media);

		void delete_media(vector <Media> media_list);

		vector <Media> get_media_vec();

		void sort_media(vector <Media> from_cont);
		
		void search_media(vector <Media> from_cont);

	private:
		vector <Comic> all_comic;
		vector <Game> all_game;
		vector <Novel> all_novel;
		vector <Media> all_media;
};

#endif