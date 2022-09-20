#include"Header.h"
Interface::Interface()
{
	R = nullptr;
	size = 0;
}
Interface::Interface(int _size) : size{ _size }, R{ new Reservoir[_size]}
{  
	for (int i = 0; i < size; i++)
	{
		double temp, temp2, temp3;
		cout << "Введите длину: "; cin >> temp;
		R[i].set_lenght(temp);
		cout << "Введите ширину: "; cin >> temp2;
		R[i].set_width(temp2);
		cout << "Введите глубину: "; cin >> temp3;
		R[i].set_depth(temp3);
	}
}

void Interface::push_back(Reservoir& object)
{
	++size; 
	Reservoir* tempR = new Reservoir[size];
	for (int i = 0; i < size-1; i++) tempR[i] = R[i];
	tempR[size - 1] = object;
	delete[]R;
	R = tempR;
	tempR = nullptr;
}

void Interface::print(const Interface& I)
{
	for (int i = 0; i < size; i++)
		cout << I.R[i].get_length() << endl;
	for (int j = 0; j < size; j++)
		cout << I.R[j].get_width() << endl;
	for (int g = 0; g < size; g++)
		cout << I.R[g].get_depth() << endl;
	for (int h = 0; h < size; h++)
		cout << I.R[h].get_isWaterMoving() << endl;
}


