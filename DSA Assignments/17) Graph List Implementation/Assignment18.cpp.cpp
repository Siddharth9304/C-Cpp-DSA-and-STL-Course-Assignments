#include<iostream>
using namespace std;

struct node
{
    int vertex;
    int weight;
    node *next;
};
class AdjList
{
    private:
        node *start;
        node *last;
    protected:
        void del()
        {
            if(start)
            {
                if(start == last)
                {
                    delete start;
                    start = last = nullptr;
                }
                else
                {
                    node *temp = start;
                    start = start->next;
                    delete temp;
                }
            }
        }
    public:
        AdjList()
        {
            start = nullptr;
        }
        void insertEdge(int vert)
        {
            node *n = new node;
            n->vertex = vert;
            n->next = nullptr;
            if(start)
                last->next = n;
            else
                start = n;
            last = n;
        }
        void printAdjNodes()
        {
            node *temp = start;
            while(temp)
            {
                cout << temp->vertex << " ";
                temp = temp->next;
            }
        }
        ~AdjList()
        {
            while(start)
                del();
        }
};

class Graph
{
    private:
        int v_count;
        AdjList *ptr;
    public:
        Graph(int no_vertex)
        {
            v_count = no_vertex;
            ptr = nullptr;
        }
        void createGraph()
        {
            if(ptr==nullptr)
                ptr = new AdjList[v_count];
        }
        void addEdge(int v1, int v2)
        {
            (ptr+v1)->insertEdge(v2); 
        }
        ~Graph()
        {
            delete []ptr;
        }
        void printGraph()
        {
            for(int i=0; i<v_count; i++)
            {
                cout << i << " -> ";
                (ptr+i)->printAdjNodes();
                cout << endl;
            }
        }
};

int main()
{
    Graph G(5);
    G.createGraph();
    G.addEdge(0,1);
    G.addEdge(1,2);
    G.addEdge(1,4);
    G.addEdge(3,2);
    G.addEdge(3,4);
    G.addEdge(4,3);
    G.printGraph();
}