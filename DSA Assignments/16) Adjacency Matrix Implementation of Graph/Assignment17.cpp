#include<iostream>
using namespace std;

class Graph
{
    private:
        int v_count;
        int e_count;
        int **adjMat;
    public:
        Graph(int no_vertex, int no_edges)
        {
            v_count = no_vertex;
            e_count = no_edges;
            adjMat = new int*[v_count];
            for(int i=0; i<v_count; i++)
                adjMat[i] = new int[v_count];
            for(int i=0; i<v_count; i++)
                for(int j=i; j<v_count; j++)
                {
                    adjMat[i][j] = 0;
                    adjMat[j][i] = 0;
                }
        }
        void createGraph()
        {
            for(int i=0; i<e_count; i++)
            {
                int v1,v2;
                cout << "Enter node no.s connecting edge : ";
                cin >> v1 >> v2;
                adjMat[v1][v2] = 1;
                adjMat[v2][v1] = 1;
            }
        }
        void printGraphMatrix()
        {
            for(int i=0; i<v_count; i++)
            {
                for(int j=0; j<v_count; j++)
                    cout << adjMat[i][j] << " ";
                cout << endl;
            }
        }
        void adjNodes(int n)
        {
            if(n>=0 && n<v_count)
            {
                for(int i=0; i<v_count; i++)
                    if(adjMat[n][i]==1)
                        cout << i << " ";
                cout << endl;
            }
            else
                throw 0;
        }
        bool isIsolatedNode(int n)
        {
            if(n>=0 && n<v_count)
            {
                for(int i=0; i<v_count; i++)
                    if(adjMat[n][i]==1)
                        return false;
                return true;
            }
            throw 0;
        }
        ~Graph()
        {
            for(int i=0; i<v_count; i++)
                delete []adjMat[i];
            delete []adjMat;
        }
};

int main()
{
    Graph G(5,7);
    G.createGraph();
    G.printGraphMatrix();
    cout << endl;
    G.adjNodes(2);
    cout << G.isIsolatedNode(1);
}