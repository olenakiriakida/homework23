
#include <iostream>
#include <set>
using namespace std;

int main() 
{
    set<int> tree;

    tree.insert(5);
    tree.insert(10);
    tree.insert(15);
    tree.insert(20);
    tree.insert(25);

    cout << "Дерево до видалення елементів: ";
    for (int elem : tree) 
    {
        cout << elem << " ";
    }
    cout << "\n";

    tree.erase(10);
    tree.erase(20);

    cout << "Дерево після видалення елементів: ";
    for (int elem : tree) 
    {
        cout << elem << " ";
    }
    cout << "\n";

}