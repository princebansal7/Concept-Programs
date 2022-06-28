#include "QueueClass.cpp"

int main()
{
    Queue q;
    q.createQueue(10);

    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);
    q.enQueue(60);
    q.enQueue(70);
    q.enQueue(80);
    q.enQueue(90);
    q.enQueue(100);
    // q.deQueue();
    q.enQueue(69);

    cout << nl << "checking isFull: " << q.isQueueFull() << nl << nl;

    while (!q.isQueueEmpty()) {
        cout << "size: " << q.getSize() << nl;
        cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
        q.deQueue();
    }

    cout << "size: " << q.getSize() << nl;
    cout << q.getRear() << " " << q.getFront() << nl;
}