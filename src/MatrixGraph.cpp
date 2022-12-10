#include "MatrixGraph.h"

MatrixGraph::MatrixGraph()
{
	this->_size = 0;
	this->_graph = nullptr;

}

MatrixGraph::MatrixGraph(const MatrixGraph& other)
{
	this->operator=(other);

}

MatrixGraph& MatrixGraph::operator=(const MatrixGraph& other)
{
	if (this != &other)
	{
		if (this->_graph != nullptr)
		{
			for (int i = 0; i < this->_size; i++)
			{
				delete[] this->_graph[i];
			}
			delete[] this->_graph;
		}
		this->_size = other._size;
		this->_graph = other._graph;


	}

	return *this;
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
		this->_size = newSize;
		return;
	}

	//****************************************


	this->_size = newSize;
	// Увеличиваем вместимость

	//Создаем рабочий массив в памяти и заполняем его нулями
	_graph = new bool* [newSize];
	for (int i = 0; i < newSize; i++)
	{
		_graph[i] = new bool[newSize];
	}
	for (int i = 0; i < newSize; i++)
	{
		for (int j = 0; j < newSize; j++)
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
	if (to > this->_size)
	{
		newSize = to;
	}

	if (this->_size >= from && this->_size >= to)
	{
		newSize = this->_size;
	}

	resize(newSize);

	this->_graph[to - 1][from - 1] = true;


}

void MatrixGraph::GetNextVertices(int vertex, std::vector<int>& vertices) const
{
	for (size_t i = 0; i < _size; i++)
	{
		if (_graph[vertex][i] == true)
		{
			vertices.push_back(i);
		}
	}

}

void MatrixGraph::GetPrevVertices(int vertex, std::vector<int>& vertices) const
{
	for (size_t i = 0; i < _size; i++)
	{
		if (_graph[i][vertex] == true)
		{
			vertices.push_back(i);
		}
	}
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
	return this->_size;
}





