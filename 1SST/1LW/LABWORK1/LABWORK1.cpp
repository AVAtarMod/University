// LABWORK1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

//#include "stdafx.h"
//
//
// int main()
//{
//    return 0;
//}

#include "pch.h"
#include "stdafx.h"
#include <iostream>

int main()
{
    int test; //���������� �������� ���������� ����� ���� ������� �����������
    int x, y; //���������� ����������
    printf("Input x and y: "); //�������� ����� ���������� � � �
    scanf_s("%d %d", &x, &y); //���� � � �
    printf("%d + %d = %d", x, y, x + y); //�������� � � � � ����� �� � �������
    scanf_s("%d", &test); //�������� ����� ���������� test
    return 0; //��������� ���������
}
