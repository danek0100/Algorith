//��������� ������� ����
//����������� ��� ����� ���������� ������������� ������� � �������� �������, ������ �� ����� � �� ��� ��������� � �������� �������
//UTF-16


//ASKII - 7/��� �� ������ 2^7 = 128 ��������

//UTF-8 ������������� �����������, ���������������� ������, ����� ������ ������������� in place


//Ansi � C ������
//ANSI
//����� ������ �� ����� ��������� 255 ��������

//� ������
//����� ������ �����, �� ������������� �������
//'\0' - ������� ����, ������������ ������, ����� ������
//���������� ����� ��������� �������� �� �������� � ��, ����� ������ �������� ��������� ������� ��� ������

#define _CRT_SECURE_NO_WARRNIGS
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>

//����� char
//int main(){
//	const char* s = "Hello, World! ";
//	printf("%s\n", s);
//	printf("%d\n", strlen(s));
//	int times_to;
//	scanf("%d", &times_to);
//	size_t buffer_length = strlen(s) * times_to + 1;
//	char* buffer = (char*)malloc(buffer_length * sizeof(char));
//	buffer[0] = '\0';
//
//	for (int i = 0; i < times_to; i++) {
//		strcat(buffer, s);
//	}
//	printf("%s\n", buffer);
//
//	free(buffer);
//}

//int main()
//{
//	//������������� ��� ��������� ����� �������������� ������
//	std::ios_base::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	std::string hello = "Hello, world! ";
//	std::string result;
//
//	int times_to_concatenate;
//	std::cin >> times_to_concatenate;
//
//	for (int i = 0; i < times_to_concatenate; i++) {
//		result += hello;
//	}
//
//	std::cout << result << std::endl;
//	return 0;
//}

//��������� �����������

//��������� �������� 
//'A B C D
//B C C D ��������� ����� 2
