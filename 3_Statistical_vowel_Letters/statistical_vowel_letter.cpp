/*
ͳ��Ԫ����ĸ��������һ���ַ�����ͳ�ƴ�����Ԫ����ĸ�������������ӵ�Ļ�ͳ�Ƴ�ÿ��Ԫ����ĸ��������
ע��Ԫ����ĸ��a��e��i��o��u
*/
#include <iostream>
#include <string>

using namespace std;

int statical_vowel_letters()
{
	string str;
	cin >> str;
	//string vowel = "aeiou";//����Сд�ģ�AEIOU����������
	int count = 0;//���ü���������ֵΪ0
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

	cout << "Ԫ����ĸ������" << count << endl;
	cout << "Ԫ����ĸa�ĸ�����" << count_a << endl;
	cout << "Ԫ����ĸe�ĸ�����" << count_e << endl;
	cout << "Ԫ����ĸi�ĸ�����" << count_i << endl;
	cout << "Ԫ����ĸo�ĸ�����" << count_o << endl;
	cout << "Ԫ����ĸu�ĸ�����" << count_u << endl;
	return 0;
}