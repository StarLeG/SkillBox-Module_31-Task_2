
#include "IGraph.h"
#include "MatrixGraph.h"


int main()
{
	IGraph* myGraph = new MatrixGraph();
	myGraph->AddEdge(3,1);
	myGraph->AddEdge(3,2);
	myGraph->AddEdge(2,5);

	myGraph->ShowGraph();
	std::cout << "Number of vertices: " << myGraph->VerticesCount();

	delete myGraph;
	return 0;
}
