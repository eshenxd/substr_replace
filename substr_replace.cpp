#include "substr_replace.h"

using namespace std;

string&   replaceAll(string&   str, const   string&   old_value, const   string&   new_value)
{
	while (true)   {
		string::size_type   pos(0);
		if ((pos = str.find(old_value)) != string::npos)
			str.replace(pos, old_value.length(), new_value);
		else   break;
	}
	return   str;
}