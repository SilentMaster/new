#include <iostream>
#include <MyString.h>

int main(int nArgc, char **ppArgs)
{
	TCHAR *t = _T("abc");
	std::wcout << t << std::endl;
	char * a = "abc";
	std::cout << a << std::endl;
	CMyString str, s(_T("abc"));
	CMyString st(s);
	str.CMyStringCpy(st);
	str.CMyStringLen();
	str.CMyStringCat(st);
	str.CMyStringLen();
	str.CMyStringResize(4);
	str.CMyStringLen();
	system("pause");
	return 0;
}
