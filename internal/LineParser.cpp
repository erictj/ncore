#include <LineParser.h>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

void LineParser::parse(const string& _in)
{
  istringstream iss(_in);
  copy(istream_iterator<string>(iss),
	   istream_iterator<string>(),
	   back_inserter<vector<string> >(*this));
}
// vim:cin:ai:sts=2 sw=2 ft=cpp