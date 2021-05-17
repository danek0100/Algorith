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
#include <string>
#include <iostream>

//через char
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
//	//Используеться для ускорения ввода автоматических тестов
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

//Растояние Левинштейна

//Растояние Хаффмана 
//'A B C D
//B C C D растояние равно 2
//Растояние в количестве редакционных ошибок
#include <algorithm>
#include <vector>

int levenstein_distance(std::string a, std::string b) {
	std::vector<std::vector<int>> L; // 2D array of answers
	L.resize(a.length() + 1);
	for (int i = 0; i <= a.length(); i++)
		L[i].resize(b.length() + 1);

	for (int i = 0; i <= a.length(); i++) {
		L[i][0] = i;
	}
	for (int k = 0; k <= b.length(); k++)
		L[0][k] = k;

	for (int i = 1; i <= a.length(); i++) {
		for (int k = 1; k <= b.length(); k++) {
			if (a[i - 1] == b[k - 1]) // Last chars are the same!
				L[i][k] = L[i - 1][k - 1];
			else
				L[i][k] = std::min(std::min(L[i - 1][k], L[i][k - 1]), L[i-1][k-1]) + 1;
		}
	}


	return L[a.length][b.length];
}


//int main() {
//	std::string a, b;
//	std::cin >> a;
//	std::cin >> b;
//	
//	std::cout << levenstein_distance(a, b) << '\n';
//
//	return 0;
//}

// Сущетсвет три пути для работы с файлами
// через дескриптор, указатели, объекты

//Лекция 15
//Контейнеры и итераторы
// Массив, вектор, список -> контейнер


// Указатель -> итератор (объект)
//*p - разъименование
//++p --p - итерирование
//p+s - произвольный доступ

// std::vector
//Динамический массив переменного размера с автоматической реаллокцией
//и автоматическим освобождением памяти

//Проблемы со вставкой в середину и расширение в начало
//insert()

// std::list
//Двусвязаный список
//Легче вставить в середину. Перемещение с помощью итератора.

#include <list>
#include <string>
#include <iostream>

//int main() {
//	std::list<std::string> words;
//	std::vector<std::string> words_v;
//	std::string word;
//
//	getline(std::cin, word);
//	while (word != "") {
//		words.push_back(word);
//		words_v.push_back(word);
//		getline(std::cin, word);
//	}
//
//	for (auto word : words) {
//		std::cout << word << '\t';
//	}
//	std::cout << std::endl;
//
//	std::list<std::string>::iterator p;
//	for (p = words.begin(); p != words.end(); ++i) {
//		std::cout << *p << '\t';
//	}
//	std::cout << std::endl;
//
//	for (auto p = words.begin(); p != words.end(); ++i) {
//		std::cout << *p << '\t';
//	}
//	std::cout << std::endl;
//
//	for (int i = 0; i < words_v.size(); i++) {
//		std::cout << words_v[i] << '\t';
//	}
//	std::cout << std::endl;
//
//	std::vector<std::string>::iterator p_v;
//	for (p_v = words_v.begin(); p_v != words_v.end(); ++i) {
//		std::cout << *p_v << '\t';
//	}
//	std::cout << std::endl;
//
//	return 0;
//}

// Наивный поиск вхождения шаблона в строку
// O((N-M+1) * M) == O(N*M) худший случай
// Полная проверка строки на каждое вхождение шаблона.

// Алгоритм поиска 
// Через конечный автомат

//Pi - функция строки(префикс функция) КМП - алгоритм
// Собств. Сфуффикс
// Pi - функция - максимальная длина собстевнного суфикса совпадающая с префиксом
// abacabadabacabaaabbabacabacabada b   a 
// 00101230123456711201234567455789(10)(11)...
 

#include <string>
#include <iostream>
#include <vector>


//abacaba#accabacbabacabacabaabac
//0010123010012340123456745671123
//Там где 7, значит мы встретили нашу подстроку

std::vector<int> prefix_function_kmp(std::string s) {
	int n = s.length();
	std::vector<int> pi(n, 0);
	for (int i = 1; i < n; ++i) {
		int k = pi[i - 1];
		while (k > 0 && s[i] != s[k]) {
			k = pi[k - 1];
		}
		if (s[i] == s[k])
			k += 1;
		pi[i] = k;
	}
	return pi;
}

//int main() {
//	std::string line;
//	getline(std::cin, line);
//	std::string tmp;
//	getline(std::cin, tmp);
//
//	std::string summary = tmp + '#' + line;
//	std::vector<int> pi = prefix_function_kmp(summary);
//
//	int counter;
//	for (auto x : pi) {
//		if (x == tmp.size())
//			counter++;
//	}
//
//	std::cout << counter << std::endl;
//}	


//Z - функция строки и z - алгоритм
// zi = max

// Суть поиска, как у Pi функции, но сразу нужна вся строка для проверки, а вот pi функцию можно вычислять динамически

// Пройдены контейнеры и объекты с классами. 15-16 лекции

//Анализ скобочных выражений (делали на 1 курсе в курсе С)
// Для скобок одного вида можно просто считать количество открывающихся (+1) и закрывающихся (-1), в конце должен быть 0, в середине
// не вылазить в -1

//Для нескольких видов скобок через Стэк

// Конечные автоматы

// Машина Тьюринга
// Подсчёт числа слов с помощью конечного автомата (с использование go to) 
// или с помощью switch


// Регулярные выражения
// * - любое число вхождений
// ? - одно вхождение
// [a-z]* - поиск вхождения таких букв
// [a-z]*[0-9]? - сколько-то букв, а в конце одно число

// Хеш функции
// Алгоритм Рабина_Карпа

#include <iostream>
#include <string>


//const int P = 257;
//
//uint32_t hash(std::string s) {
//	uint32_t sum = 0;
//	uint32_t factor = 1;
//	 
//	for (int i = s.length() - 1; i >= 0; i--) {
//		sum += s[i] * factor;
//		factor *= P;
//	}
//}

//Хэш-таблицы в с++ undored_map
//Красно-чёрные деревья двоичного поиска map
//set - множество, где важен только ключ и не важно значение

// Базы данных
//mysql mariaysql и дуругие (примера не будет, нужно ставить отдельно и учиться)

// Графовые алгоритмы
// Проверка смежности, задача Эллера, перебор смежных вершин
// Представения графов: матрица смежности (двумерный массив), 

// Модульность
// Этапы компиляции
// Макросы
// Сборка из нескольких файлов
// Cmake

//Способы хранения графов 

#include <set>

typedef int32_t vertex_t;
typedef std::set<vertex_t> SetOfVertexes;

class Graph {
public:
	int vertexes_number = 0;
	int edges_number = 0;
	std::set < std::pair<vertex_t, vertex_t> > set_of_edges;

	

	void input() {
		std::cin >> vertexes_number;
		std::cin >> edges_number;
		set_of_edges.clear();

		for (vertex_t i = 0; i < vertexes_number; i++) {
			vertex_t a, b;
			std::cin >> a >> b;
			set_of_edges.insert(std::make_pair(a, b));
		}
	}

	void print() const {
		std::cout << vertexes_number << std::endl;
		for (auto edge : set_of_edges) {
			std::cout << "(" << edge.first << ", " << edge.second << ") ";
		}
		std::cout << std::endl;
	}

};
typedef std::set<std::pair<vertex_t, vertex_t>> SetOfEdges;