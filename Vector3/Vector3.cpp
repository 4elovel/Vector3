#include <iostream>
#include <vector>

using namespace std;

void print_vec2D(vector <vector<int>> const &vec) {
	for (size_t i = 0; i < vec.size(); i++)
	{
		for (size_t j = 0; j < vec[i].size(); j++)
		{
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void even_clear2D(vector <vector<int>> &vec) {
	for (size_t i = 0; i < vec.size(); i++)
	{
		if (i % 2 == 1) {
			vec[i].clear();
		}
	}
}

void vector_fill2D(vector <vector<int>>& vec,int columns,int rows) {
	if (columns == 0 || rows == 0)
	{
		cout << "\nSORRY BUT YOU CAN`T FILL EMPTY VECTOR \n";
		return;
	}


	for (size_t i = 0; i < columns; i++)
	{
		vector <int> buf;
		for (size_t j = 0; j < rows; j++)
		{
			buf.push_back((rand() % 10) + 10);
		}
		vec.push_back(buf);
	}
}

int main()
{
	srand(time(NULL));
	cout << "vector 1 ->\n" << "Before:\n";
	vector <vector <int>> vec1;
	int columns = 6;
	int rows = 6;

	vector_fill2D(vec1, columns, rows);

	print_vec2D(vec1);
	even_clear2D(vec1);
	cout << "After:\n";
	print_vec2D(vec1);

	cout << "vector 2 ->\n" << "Before:\n";
	vector <vector <int>> vec2;
	columns = 1;
	rows = 3;
	vector_fill2D(vec2, columns, rows);

	print_vec2D(vec2);
	even_clear2D(vec2);
	cout << "After:\n";
	print_vec2D(vec2);

	cout << "vector 3 ->\n" << "Before:\n";
	vector <vector <int>> vec3;
	columns = 0;
	rows = 3;
	vector_fill2D(vec3, columns, rows);

	print_vec2D(vec3);
	even_clear2D(vec3);
	cout << "After:\n";
	vector_fill2D(vec3, columns, rows);
	print_vec2D(vec3);
}