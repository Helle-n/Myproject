#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
/*������ �� 10 ����� ����� ��������� ���������� ������� �� -5 �� 5. ���������� ���������� �������. 
������� �� ����� �������� � ��������������� �������. ����������� �� �������� ������ �������*/ 
 
int main ()
{
    const int size= 10;
    int a[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++)
       a[i] = rand() % 11 - 5;
    for (int i = 0; i < size; i++)
       cout << a[i] << "  ";
    for (int i = 0; i < size; i++)
       for (int j = i+1; j < size; j++)
          if (a[i] < a[j])
          {
             int buf = a[i];
             a[i] = a[j];
             a[j] = buf;
          }
    cout << endl << endl;
    for (int i = 0; i < size; i++)
       cout << a[i] << "  ";
    system("PAUSE > NULL");
    return 0;
}