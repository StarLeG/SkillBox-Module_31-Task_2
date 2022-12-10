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
	//****************************************
	if (this->_graph != nullptr)
	{
		// создаем временный массив
		newGraph = new bool* [newSize];
		for (int i = 0; i < newSize; i++)
		{
			newGraph[i] = new bool[newSize];
		}
		// заполняем временный массив нулями
		for (int i = 0; i < newSize; i++)
		{
			for (int j = 0; j < newSize; j++)
			{
				newGraph[j][i] = false;
			}
		}
		// копируем рабочий массив в новый массив
		for (int i = 0; i < newSize; i++)
		{
			for (int j = 0; j < newSize; j++)
			{
				if (i < this->_size && j < this->_size)
				{
					newGraph[j][i] = this->_graph[j][i];
				}

			}
		}
		// Удаляем старый массив
		for (int i = 0; i < this->_size; i++)
		{
			delete[] this->_graph[i];
		}
		delete[] this->_graph;
		// Создаем новый рабочий массив
		_graph = new bool* [newSize];
		for (int i = 0; i < newSize; i++)
		{
			_graph[i] = new bool[newSize];
		}
		// заполняем новый рабочий  массив нулями
		for (int i = 0; i < newSize; i++)
		{
			for (int j = 0; j < newSize; j++)
			{
				this->_graph[j][i] = false;
			}
		}
		// копируем временный массив в новый рабочий массив
		for (int i = 0; i < newSize; i++)
		{
			for (int j = 0; j < newSize; j++)
			{
				if (i < this->_size)
				{
					this->_graph[j][i] = newGraph[j][i];
				}
			}
		}

		// Удаляем временный  массив
		for (int i = 0; i < newSize; i++)
		{
			delete[] newGraph[i];
		}
		delete[] newGraph;
		return;
	}
	//****************************************


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





