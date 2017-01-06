#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include "Comic.h"

using namespace std;

class File
{
	public:
		File();

		vector <Comic> comic_to_vector();

		void comic_to_file(vector <Comic> c_file);

	private:
		ofstream comic_file;
		ifstream comic_input;
};


#endif