#ifndef TASK_31_2_MATRIXGRAPH_H
#define TASK_31_2_MATRIXGRAPH_H

#include "IGraph.h"
#include <iostream>

class MatrixGraph : public IGraph
{
public:
	MatrixGraph();



	// метод выводит на экран граф
	virtual void ShowGraph()  const override;


	// Метод принимает вершины начала и конца ребра и добавляет ребро
	virtual void AddEdge(int from, int to) override;


	// Метод должен считать текущее количество вершин
	virtual int VerticesCount() const override;

	// Для конкретной вершины метод выводит в вектор “вершины” все вершины, в которые можно дойти по ребру из данной
	virtual void GetNextVertices(int vertex, std::vector<int>& vertices) const override;

	// Для конкретной вершины метод выводит в вектор “вершины” все вершины, из которых можно дойти по ребру в данную
	virtual void GetPrevVertices(int vertex, std::vector<int>& vertices) const override;
private:
	std::vector<std::vector <bool>> _vertices;
	int _vertex;
};


#endif //TASK_31_2_MATRIXGRAPH_H
