// ƒано л≥терний р€док, €кий м≥стить
// посл≥довн≥сть символ≥в s0, Е, sn, Е .
// 1. ¬и€снити, чи Ї в ц≥й посл≥довност≥ так≥
// елементи s[i], s[i + 1] що s[i] Ц це кома(У, Ф), 
// а s[i + 1] Ц тире(УЦФ), та обчислити њх к≥льк≥сть.
// 2. «ам≥нити кожну групу символ≥в У,ЦФ з≥рочкою У* Ф.

#include <iostream>
using namespace std;
int Count(char* s)
{
	int k = 0,
		pos = 0;
	char* t;
	while (t = strchr(s + pos, ','))
	{
		pos = t - s + 1;
		if (s[pos] == '-')
			k++;
	}
	return k;
}
char* Change(char* s)
{
	char* t = new char[strlen(s)];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	*t = 0;
	while (p = strchr(s + pos1, ','))
	{
		if (s[p - s + 1] == '-')
		{
			pos2 = p - s + 2;
			strncat_s(t, 101, s + pos1, pos2 - pos1 - 2);
			strcat_s(t, 101, "*");
			pos1 = pos2;
		}
	}
	strcat_s(t, 101, s + pos1);
	strcpy_s(s, 101, t);
	return t;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Count(str) << " groups of ',-'" << endl;
	char* dest = new char[151];
	dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}