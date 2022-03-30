#include <iostream>
using namespace std;
#define nl "\n"

class Array
{
private:
    int capacity;
    int lastIndex;
    int *ptr;

public:
    Array(); // Constructor
    void createArray(int cap);
    void append(int data);
    void insertElement(int index, int data);
    void deleteElement(int index);
    void editArray(int index, int newData);
    void show();
    int getElement(int index);
    int search(int data);
    int countElement();
    int getSum();
    int getMax();
    int getMin();
    ~Array(); // Destructor
};

Array::Array()
{
    capacity = 0;
    lastIndex = -1;
    ptr = NULL;
}

void Array::createArray(int cap)
{
    capacity = cap;
    lastIndex = -1;
    ptr = new int[cap];
}

void Array::append(int data)
{
    // Always think about situations when we can't add data (for any DS)

    if (lastIndex + 1 == capacity)
    {
        cout << "Array is Full !!" << nl;
    }
    else
    {
        lastIndex++;
        ptr[lastIndex] = data;
    }
}

void Array::insertElement(int index, int data)
{
    if (lastIndex + 1 == capacity)
    {
        cout << "Array is Full !!" << nl;
    }
    else if (index < 0 || index > lastIndex + 1)
    {
        cout << "Invalid Index !!" << nl;
    }
    else
    {
        // shift data towards right (as array is left alligned)
        for (int i = lastIndex; i >= index; i--)
        {
            ptr[i + 1] = ptr[i];
        }
        ptr[index] = data; // insert data at given index
        lastIndex++;       // as one value inserted
    }
}

void Array::deleteElement(int index)
{
    if (lastIndex == -1)
    {
        cout << "Empty Array !!" << nl;
    }
    else if (index < 0 || index > lastIndex)
    {
        cout << "Invalid Index !!" << nl;
    }
    else
    {
        for (int i = index; i < lastIndex; i++)
        {
            ptr[i] = ptr[i + 1]; // shifting element to left side
        }
        lastIndex--;
    }
}

void Array::editArray(int index, int newData)
{
    if (lastIndex == -1)
    {
        cout << "Empty Array !!" << nl;
    }
    else if (index < 0 || index > lastIndex + 1)
    {
        cout << "Invalid Index !!" << nl;
    }
    else
    {
        ptr[index] = newData;
    }
}

void Array::show()
{
    if (lastIndex == -1)
        cout << "Empty Array!!" << nl;
    else
    {
        for (int i = 0; i <= lastIndex; i++)
            cout << ptr[i] << " ";
    }
    cout << nl;
}

int Array::getElement(int index)
{
    int ans;
    if (lastIndex == -1)
    {
        cout << "Empty Array !!" << nl;
    }
    else if (index < 0 || index > lastIndex + 1)
    {
        cout << "Invalid Index !!" << nl;
    }
    else
    {
        ans = ptr[index];
    }
    return ans;
}

int Array::search(int data)
{
    for (int i = 0; i <= lastIndex; i++)
    {
        if (ptr[i] == data)
            return i;
    }
    return -1;
}

int Array::countElement()
{
    return lastIndex + 1;
}

int Array::getSum()
{
    int sum = 0;
    for (int i = 0; i <= lastIndex; i++)
        sum += ptr[i];
    return sum;
}

int Array::getMax()
{
    int maxVal = ptr[0];
    for (int i = 1; i <= lastIndex; i++)
    {
        if (maxVal < ptr[i])
            maxVal = ptr[i];
    }
    return maxVal;
}

int Array::getMin()
{
    int minVal = ptr[0];
    for (int i = 1; i <= lastIndex; i++)
    {
        if (minVal > ptr[i])
            minVal = ptr[i];
    }
    return minVal;
}

Array::~Array()
{
    delete[] ptr;
}

int main()
{
    Array arr;
    arr.createArray(5);
    arr.append(10);
    arr.append(20);
    arr.append(30);
    arr.append(40);
    arr.show();
    arr.insertElement(3, 69);
    arr.show();
    arr.editArray(2, 7);
    arr.show();
    cout << arr.search(69) << nl;
    arr.append(100);
    arr.show();
    arr.deleteElement(9);
    arr.deleteElement(1);
    arr.show();
    cout << arr.countElement() << nl;
    cout << arr.getMax() << nl;
    cout << arr.getMin() << nl;
    cout << arr.getSum() << nl;
}