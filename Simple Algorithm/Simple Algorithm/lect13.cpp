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
//��������� � ���������� ������������ ������
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

// ��������� ��� ���� ��� ������ � �������
// ����� ����������, ���������, �������

//������ 15
//���������� � ���������
// ������, ������, ������ -> ���������


// ��������� -> �������� (������)
//*p - ��������������
//++p --p - ������������
//p+s - ������������ ������

// std::vector
//������������ ������ ����������� ������� � �������������� �����������
//� �������������� ������������� ������

//�������� �� �������� � �������� � ���������� � ������
//insert()

// std::list
//����������� ������
//����� �������� � ��������. ����������� � ������� ���������.

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

// ������� ����� ��������� ������� � ������
// O((N-M+1) * M) == O(N*M) ������ ������
// ������ �������� ������ �� ������ ��������� �������.

// �������� ������ 
// ����� �������� �������

//Pi - ������� ������(������� �������) ��� - ��������
// ������. ��������
// Pi - ������� - ������������ ����� ������������ ������� ����������� � ���������
// abacabadabacabaaabbabacabacabada b   a 
// 00101230123456711201234567455789(10)(11)...
 

#include <string>
#include <iostream>
#include <vector>


//abacaba#accabacbabacabacabaabac
//0010123010012340123456745671123
//��� ��� 7, ������ �� ��������� ���� ���������

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


//Z - ������� ������ � z - ��������
// zi = max

// ���� ������, ��� � Pi �������, �� ����� ����� ��� ������ ��� ��������, � ��� pi ������� ����� ��������� �����������

// �������� ���������� � ������� � ��������. 15-16 ������

//������ ��������� ��������� (������ �� 1 ����� � ����� �)
// ��� ������ ������ ���� ����� ������ ������� ���������� ������������� (+1) � ������������� (-1), � ����� ������ ���� 0, � ��������
// �� �������� � -1

//��� ���������� ����� ������ ����� ����

// �������� ��������

// ������ ��������
// ������� ����� ���� � ������� ��������� �������� (� ������������� go to) 
// ��� � ������� switch


// ���������� ���������
// * - ����� ����� ���������
// ? - ���� ���������
// [a-z]* - ����� ��������� ����� ����
// [a-z]*[0-9]? - �������-�� ����, � � ����� ���� �����

// ��� �������
// �������� ������_�����

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

//���-������� � �++ undored_map
//������-������ ������� ��������� ������ map
//set - ���������, ��� ����� ������ ���� � �� ����� ��������

// ���� ������
//mysql mariaysql � ������� (������� �� �����, ����� ������� �������� � �������)

// �������� ���������
// �������� ���������, ������ ������, ������� ������� ������
// ������������ ������: ������� ��������� (��������� ������), 

// �����������
// ����� ����������
// �������
// ������ �� ���������� ������
// Cmake

//������� �������� ������ 

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