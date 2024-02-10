#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator p;
    for (p = lst.begin();
         p != lst.end(); p++)
        cout << *p << " , ";
    cout << endl;
}
int main()
{
    list<int> list1;
    list<int> list2(5);
    for (int i = 0;
         i < 3; i++)
        list1.push_back(rand() / 100);
    list<int>::iterator p;
    for (p = list2.begin(); p != list2.end(); p++)
        *p = rand() / 100;
    cout << " List1 " << endl;
    display(list1);
    display(list2);
    list1.push_front(100);
    list2.push_front(200);
    list2.pop_front();
    cout << "NOw list1 " << endl;
    display(list1);
    cout << " Now list 2 is " << endl;
    display(list2);
    list<int> listA, listB;
    listA = list1;
    listB = list2;
    list1.merge(list2);
    cout << " merged unsorted list is " << endl;
    display(list1);
    listA.sort();
    listB.sort();
    listA.merge(listB);
    cout << " Merged sorted list is " << endl;
    display(listA);
    listA.reverse();
    cout << " Reversed merged list is ";
    display(listA);

    return 0;
}