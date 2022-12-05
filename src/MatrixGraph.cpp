#include "MatrixGraph.h"

MatrixGraph::MatrixGraph()
{

}

void MatrixGraph::AddEdge(int from, int to)
{

	if (from > to)
	{
		_vertices.resize(from);
		for (int i = 0; i < from; i++)
		{
			_vertices[i].resize(from);
		}
	}
	else
	{
		_vertices.resize(to);
		for (int i = 0; i < to; i++)
		{
			_vertices[i].resize(to);
		}
	}
	_vertices[to - 1][from - 1] = true;

}

void MatrixGraph::GetNextVertices(int vertex, std::vector<int>& vertices) const
{

}

void MatrixGraph::GetPrevVertices(int vertex, std::vector<int>& vertices) const
{

}

void MatrixGraph::ShowGraph() const
{
	if(!_vertices.empty())
	{
		for(int i = 0; i < _vertices.size(); i++)
		{
			for(int j = 0; j < _vertices.size(); j++)
			{
				std::cout << _vertices[j][i] << " ";
			}
			std::cout << std::endl;
		}
	}
}

int MatrixGraph::VerticesCount() const
{
	return _vertices.size();
}



