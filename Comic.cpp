#include "Comic.h"

using namespace std;

Comic::Comic()
{

}

string Comic::get_title()
{
	return title;
}

string Comic::get_pub()
{
	return publisher;
}

string Comic::get_year()
{
	return year;
}

string Comic::get_author()
{
	return author;
}

string Comic::get_illustrator()
{
	return illustrator;
}

string Comic::get_issue()
{
	return issue;
}