#include<iostream>
using namespace std;
#include "C:\Users\prem\OneDrive\Desktop\C, C++, DSA and STL\DSA using C++\Assignments\11) Queue using Linked List\Assignment11.cpp"

string metroStations[51] = {
    "Dilshad Garden",
    "Jhilmil",
    "Mansarovar Park",
    "Shahdara",
    "Welcome",
    "Seelampur",
    "Shastri Park",
    "Kashmere Gate",
    "Tis Hazari",
    "Pul Bangash",
    "Pratap Nagar",
    "Jaffrabad",
    "Maujpur - Babarpur",
    "Gokulpuri",
    "Johri Enclave",
    "East Azad Nagar",
    "Krishna Nagar",
    "Karkarduma Court",
    "Karkarduma",
    "Anand Vihar",
    "IP Extension",
    "Kausambhi",
    "Vaishali",
    "Ghazipur",
    "Preet Vihar",
    "Nirman Vihar",
    "Laxmi Nagar",
    "Yamuna Bank",
    "Indraprastha",
    "Supreme Court",
    "Mandi House",
    "Barakhamba Road",
    "Rajiv Chowk",
    "Ashram",
    "Chandni Chowk",
    "Chawri Bazar",
    "New Delhi",
    "Patel Chowk",
    "Central Secretariat",
    "Udyog Bhawan",
    "Lok Kalyan Marg",
    "Lal Qila",
    "Jama Masjid",
    "Delhi Gate",
    "ITO",
    "Janpath",
    "Khan Market",
    "JLN Stadium",
    "Civil Lines",
    "Vidhan Sabha",
    "Vishwavidyalya"
};
string metroLines[5] = {"Red","Blue","Pink","Yellow","Violet"};
int findIndex(const string arr[], int size, string &target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // Target not found
}

struct Node
{
    int vertex;
    string color;
    Node *next;
};
class AdjList
{
    private:
        Node *start;
        Node *last;
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
                    Node *temp = start;
                    start = start->next;
                    delete temp;
                }
            }
        }
    public:
        AdjList()
        {
            start = nullptr;
            last = nullptr;
        }
        void insertEdge(int vert, string &weight)
        {
            Node *n = new Node;
            n->vertex = vert;
            n->color = weight;
            n->next = nullptr;
            if(start)
                last->next = n;
            else
                start = n;
            last = n;
        }
        void printAdjNodes()
        {
            Node *temp = start;
            while(temp)
            {
                cout << metroStations[temp->vertex] << "(" << temp->color << ") ";
                temp = temp->next;
            }
        }
        ~AdjList()
        {
            while(start)
                del();
        }
        void addNodeInQueue(Queue &Q1, Queue &Q2,bool status[], string &col)
        {
            int v;
            string tempCol = "Black";
            Node *temp = start;
            while(temp)
            {
                v = temp->vertex;
                if(!status[v])
                {
                    if(temp->color == col)
                    {
                        Q1.enQueue(v);
                        status[v] = true;
                    }
                    else if(tempCol != temp->color)
                    {
                        int c = findIndex(metroLines,5,temp->color);
                        Q2.enQueue(c);
                        tempCol = temp->color;
                    }
                }
                temp = temp->next;
            }
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
        void addEdge(int v1, int v2, string w)
        {
            (ptr+v1)->insertEdge(v2, w);
            (ptr+v2)->insertEdge(v1, w); 
        }
        ~Graph()
        {
            delete []ptr;
        }
        void printGraph()
        {
            for(int i=0; i<v_count; i++)
            {
                cout << metroStations[i] << " -> ";
                (ptr+i)->printAdjNodes();
                cout << endl;
            }
        }
        void neighbourStaions(string station_name)
        {
            int station_no = findIndex(metroStations,51,station_name);
            cout << metroStations[station_no] << " -> ";
            (ptr+station_no)->printAdjNodes();
        }
        void getRoute(string col)
        {
            int source;
            if(col == "Red")
                source = 0;
            else if(col == "Pink")
                source = 14;
            else if(col == "Blue")
                source = 23;
            else if(col == "Yellow")
                source = 50;
            else if(col == "Violet")
                source = 7;
            bool status[51];
            for(int i=0; i<51; i++)
                status[i] = false;
            Queue Q1,Q2;
            Q1.enQueue(source);
            status[source] = true;
            while(Q1.no_Elements()!=0)
            {
                int n = Q1.getFront();
                Q1.deQueue();
                if(Q2.no_Elements()!=0)
                {
                    cout << " (";
                    while(Q2.no_Elements()!=0)
                    {
                        int x = Q2.getFront();
                        cout << metroLines[x];
                        /*if(x==0)
                            cout << "(" << metroStations[0] << "-" << metroStations[10] << ")";
                        else if(x==1)
                            cout << "(" << metroStations[23] << "-" << metroStations[33] << ")";
                        else if(x==2)
                            cout << "(" << metroStations[14] << "-" << metroStations[20] << ")";
                        else if(x==3)
                            cout << "(" << metroStations[40] << "-" << metroStations[50] << ")";
                        else
                            cout << "(" << metroStations[7] << "-" << metroStations[47] << ")";
                        */Q2.deQueue();
                        if(Q2.no_Elements()!=0)
                            cout << ",";
                    }

                    cout << ")"; 
                }
                if(n!=source)
                    cout << " <-> ";
                cout << metroStations[n];
                (ptr+n)->addNodeInQueue(Q1,Q2,status,col);
            }
        }
        
};



void createMetroMap(Graph &G)
{
    G.createGraph();
    G.addEdge(0,1,"Red");
    G.addEdge(1,2,"Red");
    G.addEdge(2,3,"Red");
    G.addEdge(3,4,"Red");
    G.addEdge(4,5,"Red");
    G.addEdge(5,6,"Red");
    G.addEdge(6,7,"Red");
    G.addEdge(7,8,"Red");
    G.addEdge(8,9,"Red");
    G.addEdge(9,10,"Red");
    G.addEdge(14,13,"Pink");
    G.addEdge(13,12,"Pink");
    G.addEdge(12,11,"Pink");
    G.addEdge(11,4,"Pink");
    G.addEdge(4,15,"Pink");
    G.addEdge(15,16,"Pink");
    G.addEdge(16,17,"Pink");
    G.addEdge(17,18,"Pink");
    G.addEdge(18,19,"Pink");
    G.addEdge(19,20,"Pink");
    G.addEdge(23,22,"Blue");
    G.addEdge(22,21,"Blue");
    G.addEdge(21,19,"Blue");
    G.addEdge(19,24,"Blue");
    G.addEdge(24,25,"Blue");
    G.addEdge(25,26,"Blue");
    G.addEdge(26,27,"Blue");
    G.addEdge(27,28,"Blue");
    G.addEdge(28,29,"Blue");
    G.addEdge(29,30,"Blue");
    G.addEdge(30,31,"Blue");
    G.addEdge(31,32,"Blue");
    G.addEdge(32,33,"Blue");
    G.addEdge(50,49,"Yellow");
    G.addEdge(49,48,"Yellow");
    G.addEdge(48,7,"Yellow");
    G.addEdge(7,34,"Yellow");
    G.addEdge(34,35,"Yellow");
    G.addEdge(35,36,"Yellow");
    G.addEdge(36,32,"Yellow");
    G.addEdge(32,37,"Yellow");
    G.addEdge(37,38,"Yellow");
    G.addEdge(38,39,"Yellow");
    G.addEdge(39,40,"Yellow");
    G.addEdge(7,41,"Violet");
    G.addEdge(41,42,"Violet");
    G.addEdge(42,43,"Violet");
    G.addEdge(43,44,"Violet");
    G.addEdge(44,30,"Violet");
    G.addEdge(30,45,"Violet");
    G.addEdge(45,38,"Violet");
    G.addEdge(38,46,"Violet");
    G.addEdge(46,47,"Violet");
}

int main()
{
    Graph DMRC(51);
    createMetroMap(DMRC);
    DMRC.neighbourStaions("Rajiv Chowk");
    cout << endl;    
    DMRC.getRoute("Blue");
}
