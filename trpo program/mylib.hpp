#ifndef MY_LIBRARY_H_INCLUDED
#define MY_LIBRARY_H_INCLUDED

#include <cstdlib>

//��������� �����
int read_number();

//�������� ������� �������� �����
// ��������� �� � ������, ��� ����� ��� �������
void factorize(int number, int *Divisor, int *Divisor_top);

//������� �����
void print_number(int number);

//������������� ������ ������� A_size � ����� ������ ����� TAB
void print_array(int A[], size_t A_size);

#endif // MY_LIBRARY_H_INCLUDED