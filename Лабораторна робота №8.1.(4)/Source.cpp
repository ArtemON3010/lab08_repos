// ƒано л≥терний р€док, €кий м≥стить
// посл≥довн≥сть символ≥в s0, Е, sn, Е .
// 1. ¬и€снити, чи Ї в ц≥й посл≥довност≥ так≥
// елементи s[i], s[i + 1] що s[i] Ц це кома(У, Ф), 
// а s[i + 1] Ц тире(УЦФ), та обчислити њх к≥льк≥сть.
// 2. «ам≥нити кожну групу символ≥в У,ЦФ з≥рочкою У* Ф.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
	{
		pos++;
		if (s[pos] == '-')
			k++;
	}
	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
		if (s[pos + 1] == '-')
			s.replace(pos, 2, "*");
	return s;
}
int main()
{
	string str;

	cout << "Enter string:" << endl;
	getline(cin, str);

	cout << "String contained " << Count(str) << " groups of ',-'" << endl;

	string dest = Change(str);

	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;

	return 0;
}