/*
统计元音字母——输入一个字符串，统计处其中元音字母的数量。更复杂点的话统计出每个元音字母的数量。
注：元音字母：a，e，i，o，u
*/
#include <iostream>
#include <string>

using namespace std;

int statical_vowel_letters()
{
	string str;
	cin >> str;
	//string vowel = "aeiou";//仅算小写的，AEIOU不包含在内
	int count = 0;//设置计数器，初值为0
	int count_a = 0;
	int count_e = 0;
	int count_i = 0;
	int count_o = 0;
	int count_u = 0;
	for (int i = 0; i < str.size(); i++)
	{
		switch (str[i])
		{
		case 'a':
			count++;
			count_a++;
			break;
		case 'e':
			count++;
			count_e++;
			break;
		case 'i':
			count++;
			count_i++;
			break;
		case 'o':
			count++;
			count_o++;
			break;
		case 'u':
			count++;
			count_u++;
			break;
		default:
			break;
		}
	}

	cout << "元音字母个数：" << count << endl;
	cout << "元音字母a的个数：" << count_a << endl;
	cout << "元音字母e的个数：" << count_e << endl;
	cout << "元音字母i的个数：" << count_i << endl;
	cout << "元音字母o的个数：" << count_o << endl;
	cout << "元音字母u的个数：" << count_u << endl;
	return 0;
}