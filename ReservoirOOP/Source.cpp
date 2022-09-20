#include"Reservoir.h"
#include"Header.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    Reservoir R(1, 1, 1, true);
    Interface OBJ(2);
    OBJ.print(2);
}