#ifndef COMIC_H
#define COMIC_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Comic
{
	public:
		Comic();

		Comic (string title_1, string publisher_1, string year_1, string author_1, string illustrator_1, string issue_1)
		{
			title = title_1;
			publisher = publisher_1;
			year = year_1;
			author = author_1;
			illustrator = illustrator_1;
			issue = issue_1;
		}

		string get_title();
		string get_pub();
		string get_year();
		string get_author();
		string get_illustrator();
		string get_issue();


	private:
		string title;
		
		string publisher;

		string year;

		string author;

		string illustrator;

		string issue;
};


#endif