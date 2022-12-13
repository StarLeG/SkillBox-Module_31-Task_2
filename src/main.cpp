
#include "IGraph.h"
#include "MatrixGraph.h"
#include "ListGraph.h"



int main()
{

	MatrixGraph myGraph;
	myGraph.AddEdge(2,3);
	myGraph.AddEdge(1,3);
	myGraph.AddEdge(4,2);
	myGraph.AddEdge(1,4);
	std::cout << "Number of vertices: " << myGraph.VerticesCount() << std::endl;
	myGraph.ShowGraph();
	std::cout << std::endl;
	MatrixGraph myGraph1(myGraph);
	myGraph1.ShowGraph();
	//***************************************************************************
	ListGraph myList;
	myList.ShowGraph();
	myList.AddEdge(1,5);
	myList.AddEdge(2,4);
	myList.AddEdge(2,5);
	myList.AddEdge(2,2);
	myList.ShowGraph();
	ListGraph myList_1(myList);

	std::cout << std::endl;
	myList.ShowGraph();
	std::vector<int> vertices1;
	std::vector<int> vertices2;
	myList_1.GetNextVertices(2,vertices1);
	myList_1.GetPrevVertices(2,vertices2);


	return 0;
}
