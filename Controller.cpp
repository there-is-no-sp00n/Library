#include "Controller.h"
//#include "Library.h"

using namespace std;

Controller::Controller()
{

}

void Controller::run_prog()
{
	int flag = 1;
	Library lib_1;
	File to_file;
	//vector <Comic> temp;
	main_comic = to_file.comic_to_vector();


	while (flag)
	{
		//to_file.open_all();
		int choice;
		//main_comic = to_file.comic_to_vector();
		
		cout << endl;
		cout << "Press 1 to add comic" << endl;
		cout << "Press 2 to add media" << endl;
		cout << "Press 2 to add games" << endl;
		cout << "Press 0 to exit" << endl;
	
		cout << "What is your choice? " << endl;

		cin >> choice;

		cout << endl;

		if (choice == 1)
		{
			lib_1.add_comic(main_comic);
			main_comic = lib_1.get_comic_vec();
			
			

		}

		if (choice == 2)
		{
			lib_1.print_all_comics(main_comic);
		}

		if (choice == 3)
		{
			lib_1.delete_comic(main_comic);
			main_comic = lib_1.get_comic_vec();
		}

		if (choice == 0)
		{
			vector <Comic> pass = lib_1.get_comic_vec();
			to_file.comic_to_file(pass);
		}

	}

	
}