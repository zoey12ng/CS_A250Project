#include "Testing.h"

using namespace std;

void createCookieList(CookieList& cookieList)
{
	string name;
	size_t calories = 0;
	set<string> ingredients;
	size_t servings = 0;

	for (size_t i = 0; i < TOTAL_COOKIES; ++i)
	{
		getData(name, calories, ingredients, servings, i);
		cookieList.addCookie(name, calories, ingredients, servings);
	}

}