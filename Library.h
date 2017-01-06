#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include <iomanip>
#include "Comic.h"

using namespace std;

class Library
{
	public:
		Library();

		void add_comic(vector <Comic> from_controller);

		void print_all_comics(vector <Comic> print_com);

		void delete_comic(vector <Comic> arrive_cont);

		vector <Comic> get_comic_vec();

	private:
		vector <Comic> all_comic;

};

#endif