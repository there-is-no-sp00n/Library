#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include "Comic.h"

using namespace std;

class Library
{
	public:
		Library();

		void add_comic();

		void print_all_comics();

		vector <Comic> get_comic_vec();

	private:
		vector <Comic> all_comic;

};

#endif