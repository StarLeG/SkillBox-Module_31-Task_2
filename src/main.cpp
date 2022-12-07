
#include "IGraph.h"
#include "MatrixGraph.h"



int main()
{

	MatrixGraph myGraph;

	myGraph.AddEdge(2,3);
	myGraph.AddEdge(1,3);
	myGraph.AddEdge(4,2);
	myGraph.AddEdge(1,4);

	myGraph.ShowGraph();


	return 0;
}
