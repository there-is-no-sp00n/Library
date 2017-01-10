#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <fstream>
#include <iomanip>

#include "Comic.h"
#include "Game.h"
#include "Novel.h"
#include "Media.h"

using namespace std;

class File
{
	public:
		File();

		//comic
		vector <Comic> comic_to_vector();
		void comic_to_file(vector <Comic> c_file);

		//game
		vector <Game> game_to_vector();
		void game_to_file(vector <Game> g_file);

		//novel
		vector <Novel> novel_to_vector();
		void novel_to_file(vector <Novel> n_file);

		//media
		vector <Media> media_to_vector();
		void media_to_file(vector <Media> m_file);

	private:
		ofstream comic_file;
		ifstream comic_input;

		ofstream game_file;
		ifstream game_input;

		ofstream novel_file;
		ifstream novel_input;

		ofstream media_file;
		ifstream media_input;
};


#endif