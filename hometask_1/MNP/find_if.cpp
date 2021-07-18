#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>
#include <vector> 
// Наша функция возвратит true, если элемент найден
bool containsNut(std::string_view str)
{	

  // std::string_view::find возвращает std::string_view::npos, если он не нашел подстроку.
  // В противном случае, он возвращает индекс, где происходит вхождение подстроки в строку str
  return (str.find("892184") != std::string_view::npos);
}
 
int main()
{
 // std::array<std::string_view, 4> arr{ "apple", "banana", "walnut", "lemon" };
    
	
	std::vector
  // Сканируем наш массив, чтобы посмотреть, содержат ли какие-либо элементы подстроку "nut"
  auto found{ std::find_if(arr.begin(), arr.end(), containsNut) };
 
  if (found == arr.end())
  {
    std::cout << "No nuts\n";
  }
  else
  {
    std::cout << "Found " << *found << '\n';
  }
 
  return 0;
}
