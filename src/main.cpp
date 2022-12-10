
#include "IGraph.h"
#include "MatrixGraph.h"



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

	return 0;
}
