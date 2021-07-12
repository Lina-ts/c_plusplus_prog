#include <iostream>

class IntArray
{
private:
    //int indx = 10;
    int m_array[10];

public:
    void setValue(int index, int value)
    {
	if (index < 0 || index >= 10)
		return	m_array[index] = value;
    }
};

int main()
{	
	IntArray array;
//array.m_array[16] = 2;
	int kek = setValue(6, 2)
	std::cout << "array " << kek << std::endl;
	return 0;
}
