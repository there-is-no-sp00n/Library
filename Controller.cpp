#include "Controller.h"
#include "Library.h"

using namespace std;

Controller::Controller()
{

}

void Controller::run_prog()
{
	int flag = 1;
	Library lib_1;

	while (flag)
	{
		int choice;
		
		

		cout << "Press 1 to add comic" << endl;
		cout << "Press 2 to add media" << endl;
		cout << "Press 2 to add games" << endl;
		cout << "Press 0 to exit" << endl;
	
		cout << "What is your choice? " << endl;

		cin >> choice;

		cout << endl;

		if (choice == 1)
		{
			lib_1.add_comic();
		}

		if (choice == 2)
		{
			lib_1.print_all_comics();
		}

	}

	
}