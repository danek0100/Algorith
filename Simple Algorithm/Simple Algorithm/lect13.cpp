//Вспомнили условие Фано
//Равномерный код имеет возможость произвольного доступа к символам массива, однако он жёский и не даёт добавлять и изменять символы
//UTF-16


//ASKII - 7/бит на символ 2^7 = 128 символов

//UTF-8 неравномерное кодирование, последовательный доступ, очень тяжело редактировать in place


//Ansi и C строки
//ANSI
//Длина строки не может превышать 255 символов

//С строки
//Длина строки любая, до терминального символа
//'\0' - нулевой байт, терминальный символ, конца строки
//Необходимо очень осторожно работать со строками в Си, нужно всегда постояно проверять размеры под строки

#define _CRT_SECURE_NO_WARRNIGS
#include <cstring>
#include <cstdio>
#include <cstdlib>

int main(){
	const char* s = "Hello, World! ";
	printf("%s\n", s);
	printf("%d\n", strlen(s));
	int times_to;
	scanf("%d", &times_to);
	size_t buffer_length = strlen(s) * times_to + 1;
	char* buffer = (char*)malloc(buffer_length * sizeof(char));
	buffer[0] = '\0';

	for (int i = 0; i < times_to; i++) {
		strcat(buffer, s);
	}
	printf("%s\n", buffer);

	free(buffer);
}
