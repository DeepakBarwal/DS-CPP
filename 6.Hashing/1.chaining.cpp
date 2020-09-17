#include <iostream>
#include <list>

using namespace std;

struct MyHash
{
    int BUCKET;
    list<int> *table;

public:
    MyHash(int b)
    {
        BUCKET = b;
        table = new list<int>[BUCKET];
    }
    int hash(int key)
    {
        return (key % BUCKET);
    }
    bool search(int key)
    {
        int i = hash(key);
        for (auto x : table[i])
            if (x == key)
                return true;
        return false;
    }
    void insert(int key)
    {
        int i = hash(key);
        table[i].push_back(key);
    }
    void remove(int key)
    {
        int i = hash(key);
        table[i].remove(key);
    }
    void displayHash()
    {
        for (int i = 0; i < BUCKET; i++)
        {
            cout << i;
            for (auto x : table[i])
                cout << " --> " << x;
            cout << endl;
        }
    }
};

int main()
{
    int a[] = {15, 11, 27, 8, 12};
    int n = sizeof(a) / sizeof(a[0]);

    // insert the keys into the hash table
    MyHash h(7); // 7 is count of buckets in
                 // hash table
    for (int i = 0; i < n; i++)
        h.insert(a[i]);

    h.remove(15);

    h.displayHash();

    return 0;
}