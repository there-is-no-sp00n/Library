#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include "Library.h"
#include "File.h"

using namespace std;

class Controller
{
	public:
		Controller();

		void run_prog();

	private:
		vector <Comic> main_comic;
};

#endif