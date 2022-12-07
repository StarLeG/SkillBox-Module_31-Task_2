#include "MatrixGraph.h"

MatrixGraph::MatrixGraph()
{
	this->_size = 0;
	this->_graph = nullptr;
	this->_capacity = 0;
}

MatrixGraph::MatrixGraph(const MatrixGraph& other)
{


}

MatrixGraph::~MatrixGraph()
{

}

void MatrixGraph::resize(int newSize)
{
	bool** newGraph = nullptr;

	if (this->_graph != nullptr)
	{
		// создаем временный массив
		newGraph = new bool* [newSize];
		for (int i = 0; i < newSize; i++)
		{
			newGraph[i] = new bool[newSize];
		}

	}
	this->_size = newSize;
	// Увеличиваем вместимость
	this->_capacity += newSize;
	//Создаем рабочий массив в памяти и заполняем его нулями
	_graph = new bool* [this->_capacity];
	for (int i = 0; i < this->_capacity; i++)
	{
		_graph[i] = new bool[this->_capacity];
	}
	for (int i = 0; i < this->_capacity; i++)
	{
		for (int j = 0; j < this->_capacity; j++)
		{
			_graph[j][i] = false;
		}
	}


}

void MatrixGraph::AddEdge(int from, int to)
{

	int newSize = 0;
	// проверка на отрицание
	if (from < 0 || to < 0)
	{
		from *= -1;
		to *= -1;
	}
	// Проветка размера массива
	if (from > this->_size)
	{
		newSize = from;
	}
	else if (to > this->_size)
	{
		newSize = to;
	}
	else
	{
		newSize = this->_size;
	}

	resize(newSize);




}

void MatrixGraph::GetNextVertices(int vertex, std::vector<int>& vertices) const
{


}

void MatrixGraph::GetPrevVertices(int vertex, std::vector<int>& vertices) const
{

}

void MatrixGraph::ShowGraph() const
{
	for (int i = 0; i < this->_size; i++)
	{
		for (int j = 0; j < this->_size; j++)
		{
			std::cout << this->_graph[j][i];
		}
		std::cout << std::endl;
	}
}

int MatrixGraph::VerticesCount() const
{

}





