#ifndef NOVEL_H
#define NOVEL_H

#include <iostream>
#include <string>

using namespace std;

class Novel
{
	public:
		Novel();

		Novel(string title_1, string author_1, string genre_1, string year_1)
		{
			title = title_1;
			author = author_1;
			genre = genre_1;
			year = year_1;
		}

		string get_title();
		string get_author();
		string get_genre();
		string get_year();

	private:
		string title;

		string author;

		string genre;

		string year;

};

#endif