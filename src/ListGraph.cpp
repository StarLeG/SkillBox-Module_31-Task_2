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
	std::vector<int> buffer;
	if((this->_graph.size() == 0))
	{
		std::cout << "Adjacency list is empty" << std::endl;
		return;
	}

	for (auto it= _graph.begin();it != _graph.end();it++)
	{
		std::cout << (*it).first << ": ";
		for (int j=0; j < (*it).second.size(); j++)
		{
			std::cout <<(*it).second[j] << " ";
		}
		std::cout << std::endl;
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