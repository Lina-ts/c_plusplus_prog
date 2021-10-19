#include <iostream>
#include <string>
/*template < class T >
int compare (T a, T b)
{
    return a > b ? 1 : a < b ? -1 : 0;
}
*/
int main()
{
	/*int i = compare("1+1","2");
	
	std::cout << i << std::endl;
*/

	std::string a = "1+1";
	std::string b = "2";
	

	std::cout << a.compare(b) << std::endl;
	return 0;
}
