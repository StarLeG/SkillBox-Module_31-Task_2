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
	if((this->_graph.size() == 0))
	{
		std::cout << "Adjacency list is empty" << std::endl;
		return;
	}


}

void ListGraph::AddEdge(int from, int to)
{
	std::vector<int> buffer_to{to};

	// вставляем вершину
	std::pair it = this->_graph.emplace(from,buffer_to);
	// Если вершина не пустая , то добовляем соседа
	if(!it.second)
	{
		it.first->second.emplace_back(to);
	}

	std::map<int, std::vector<int>>::iterator find_it = this->_graph.find(to);
	if(find_it == this->_graph.end())
	{
		this->_graph[to] = std::vector<int>();
	}
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