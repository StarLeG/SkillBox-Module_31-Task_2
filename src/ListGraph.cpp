#include "ListGraph.h"

ListGraph::ListGraph()
{

}

ListGraph::ListGraph(const ListGraph& other)
{

}

ListGraph& ListGraph::operator=(const ListGraph& other)
{
	return* this;
}

ListGraph::~ListGraph()
{

}

void ListGraph::ShowGraph() const
{
	if((this->_graph.empty()))
	{
		std::cout << "Adjacency list is empty" << std::endl;
		return;
	}

	for(; this->_it != this->_graph.end();)
	{
		std::cout << this->_it->first << " ";
		for(int i = 0; i < this->_it->second.size();i++)
		{
			std::cout<< this->_it->second[i] << " ";
		}
		std::cout << std::endl;
	}
}

void ListGraph::AddEdge(int from, int to)
{


}

void ListGraph::GetNextVertices(int vertex, std::vector<int>& vertices) const
{

}

void ListGraph::GetPrevVertices(int vertex, std::vector<int>& vertices) const
{

}

int ListGraph::VerticesCount() const
{
	return 0;
}