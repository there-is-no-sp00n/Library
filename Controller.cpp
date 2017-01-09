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
	main_comic = to_file.comic_to_vector();
	main_game = to_file.game_to_vector();
	main_novel = to_file.novel_to_vector();

	while (flag)
	{
		int choice;
		
		cout << endl;
		cout << "---------------------------------" << endl;
		cout << "Press 1 for Comic Menu" << endl;
		cout << "Press 2 for Game Menu" << endl;
		cout << "Press 3 for Book Menu" << endl;
		cout << "Press 4 for Media Menu" << endl;

		cout << endl;
	
		cout << "What is your choice? ";

		cin >> choice;
		while(cin.fail())
		{
			cout << "ERROR INVALID INPUT" << endl;
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter valid input: ";
			cin >> choice;
		}

		cout << endl;

		if (choice == 1)
		{
			while (true)
			{
				cout << "---------------------------------" << endl;
				cout << "Press 1 to add a comic" << endl;
				cout << "Press 2 to view all comics" << endl;
				cout << "Press 3 to delete a comic" << endl;
				cout << "Press 4 to sort comics" << endl;
				cout << "Press 5 to search comics" << endl;
				cout << "Press 0 to save and exit" << endl;

				cout << endl;

				cout << "What is your choice? ";

				cin >> choice;

				while(cin.fail())
				{
					cout << "ERROR INVALID INPUT" << endl;
					cin.clear();
					cin.ignore(256, '\n');
					cout << "Please enter valid input: ";
					cin >> choice;
				}

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

				if (choice == 4)
				{
					lib_1.sort_comic(main_comic);
					main_comic = lib_1.get_comic_vec();
				}

				if (choice == 5)
				{
					lib_1.search_comic(main_comic);
				}

				if (choice == 0)
				{
					vector <Comic> pass = lib_1.get_comic_vec();
					to_file.comic_to_file(pass);
					break;
				}
			}

		}


		if (choice == 2)
		{
			while (true)
			{
				cout << "---------------------------------" << endl;
				cout << "Press 1 to add a game" << endl;
				cout << "Press 2 to view all games" << endl;
				cout << "Press 3 to delete a game" << endl;
				cout << "Press 4 to sort games" << endl;
				cout << "Press 5 to search games" << endl;
				cout << "Press 0 to save and exit" << endl;

				cout << endl;

				cout << "What is your choice? ";

				cin >> choice;

				while(cin.fail())
				{
					cout << "ERROR INVALID INPUT" << endl;
					cin.clear();
					cin.ignore(256, '\n');
					cout << "Please enter valid input: ";
					cin >> choice;
				}

				cout << endl;

				if (choice == 1)
				{
					lib_1.add_game(main_game);
					main_game = lib_1.get_game_vec();			
				}

				if (choice == 2)
				{
					lib_1.print_all_games(main_game);
				}

				if (choice == 3)
				{
					lib_1.delete_game(main_game);
					main_game = lib_1.get_game_vec();
				}

				if (choice == 4)
				{
					lib_1.sort_game(main_game);
					main_game = lib_1.get_game_vec();
				}

				if (choice == 5)
				{
					lib_1.search_game(main_game);
				}

				if (choice == 0)
				{
					vector <Game> pass = lib_1.get_game_vec();
					to_file.game_to_file(pass);
					break;
				}
			}

		}

		if (choice == 3)
		{
			while (true)
			{
				cout << "---------------------------------" << endl;
				cout << "Press 1 to add a book" << endl;
				cout << "Press 2 to view all books" << endl;
				cout << "Press 3 to delete a book" << endl;
				cout << "Press 4 to sort books" << endl;
				cout << "Press 5 to search books" << endl;
				cout << "Press 0 to save and exit" << endl;

				cout << endl;

				cout << "What is your choice? ";

				cin >> choice;

				while(cin.fail())
				{
					cout << "ERROR INVALID INPUT" << endl;
					cin.clear();
					cin.ignore(256, '\n');
					cout << "Please enter valid input: ";
					cin >> choice;
				}

				cout << endl;

				if (choice == 1)
				{
					lib_1.add_novel(main_novel);
					main_novel = lib_1.get_novel_vec();			
				}

				if (choice == 2)
				{
					lib_1.print_all_novels(main_novel);
				}

				if (choice == 3)
				{
					lib_1.delete_novel(main_novel);
					main_novel = lib_1.get_novel_vec();
				}

				if (choice == 4)
				{
					lib_1.sort_novel(main_novel);
					main_novel = lib_1.get_novel_vec();
				}

				if (choice == 5)
				{
					lib_1.search_novel(main_novel);
				}

				if (choice == 0)
				{
					vector <Novel> pass = lib_1.get_novel_vec();
					to_file.novel_to_file(pass);
					break;
				}
			}

		}

		

	}

	
}