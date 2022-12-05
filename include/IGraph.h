#ifndef TASK_31_2_IGRAPH_H
#define TASK_31_2_IGRAPH_H

#include <vector>

class IGraph
{
public:
	 ~IGraph() = default;

	// метод выводит на экран граф
	virtual void ShowGraph() const = 0;

	// Метод принимает вершины начала и конца ребра и добавляет ребро
	virtual void AddEdge(int from, int to) = 0;

	// Метод должен считать текущее количество вершин
	virtual int VerticesCount() const = 0;

	// Для конкретной вершины метод выводит в вектор “вершины” все вершины, в которые можно дойти по ребру из данной
	virtual void GetNextVertices(int vertex, std::vector<int>& vertices) const = 0;

	// Для конкретной вершины метод выводит в вектор “вершины” все вершины, из которых можно дойти по ребру в данную
	virtual void GetPrevVertices(int vertex, std::vector<int>& vertices) const = 0;
 private:

};

#endif //TASK_31_2_IGRAPH_H
