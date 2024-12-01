//1
// #include <iostream>
//using namespace std;
//
//struct client {
//    char name[50];
//    int servicetime;
//    client* next;
//
//    client(const char* n, int t) : servicetime(t), next(nullptr) {
//        int i = 0;
//        while (n[i] != '\0') {
//            name[i] = n[i];
//            i++;
//        }
//        name[i] = '\0';
//    }
//};
//
//class queue {
//private:
//    client* front;
//    client* rear;
//
//public:
//    queue() : front(nullptr), rear(nullptr) {}
//
//    void enqueue(const char* name, int servicetime) {
//        client* newclient = new client(name, servicetime);
//        if (rear == nullptr) {
//            front = rear = newclient;
//        }
//        else {
//            rear->next = newclient;
//            rear = newclient;
//        }
//    }
//
//    client* dequeue() {
//        if (front == nullptr) return nullptr;
//        client* temp = front;
//        front = front->next;
//        if (front == nullptr) rear = nullptr;
//        return temp;
//    }
//
//    bool isempty() const {
//        return front == nullptr;
//    }
//};
//
//int main() {
//    queue clientqueue;
//    int totalservicetime = 0, choice;
//
//    while (true) {
//        cout << "\n1. add client\n2. serve client\n3. display total service time\n4. exit\n";
//        cin >> choice;
//
//        if (choice == 1) {
//            char name[50];
//            cout << "enter client name: ";
//            cin >> name;
//            int servicetime = (rand() % 10) + 1; // simulate random service time
//            clientqueue.enqueue(name, servicetime);
//            cout << "client " << name << " added with service time: " << servicetime << " minutes.\n";
//        }
//        else if (choice == 2) {
//            client* client = clientqueue.dequeue();
//            if (client != nullptr) {
//                cout << "serving client: " << client->name << endl;
//                totalservicetime += client->servicetime;
//                delete client;
//            }
//            else {
//                cout << "no clients in the queue.\n";
//            }
//        }
//        else if (choice == 3) {
//            cout << "total service time: " << totalservicetime << " minutes.\n";
//        }
//        else if (choice == 4) {
//            break;
//        }
//        else {
//            cout << "invalid choice. try again.\n";
//        }
//    }
//}
//
//
//
//
//
//2
//class Stack {
//private:
//    int data[32];
//    int top;
//
//public:
//    Stack() : top(-1) {}
//
//    void push(int value) {
//        if (top < 31) data[++top] = value;
//    }
//
//    int pop() {
//        if (top >= 0) return data[top--];
//        return -1;
//    }
//
//    bool isEmpty() const {
//        return top == -1;
//    }
//};
//
//void decimalToBinary(int number) {
//    Stack binaryStack;
//    while (number > 0) {
//        binaryStack.push(number % 2);
//        number /= 2;
//    }
//
//    cout << "Binary representation: ";
//    while (!binaryStack.isEmpty()) {
//        cout << binaryStack.pop();
//    }
//    cout << endl;
//}
//
//int main() {
//    int number;
//    cout << "Enter a decimal number: ";
//    cin >> number;
//
//    decimalToBinary(number);
//}


//3
//struct Node {
//    char url[100];
//    Node* prev;
//    Node* next;
//
//    Node(const char* u) : prev(nullptr), next(nullptr) {
//        int i = 0;
//        while (u[i] != '\0') {
//            url[i] = u[i];
//            i++;
//        }
//        url[i] = '\0';
//    }
//};
//
//class Deque {
//private:
//    Node* front;
//    Node* rear;
//
//public:
//    Deque() : front(nullptr), rear(nullptr) {}
//
//    void pushBack(const char* url) {
//        Node* newNode = new Node(url);
//        if (rear == nullptr) {
//            front = rear = newNode;
//        }
//        else {
//            rear->next = newNode;
//            newNode->prev = rear;
//            rear = newNode;
//        }
//    }
//
//    void popBack() {
//        if (rear == nullptr) return;
//        Node* temp = rear;
//        rear = rear->prev;
//        if (rear != nullptr) rear->next = nullptr;
//        else front = nullptr;
//        delete temp;
//    }
//
//    void display() const {
//        Node* current = front;
//        while (current != nullptr) {
//            cout << current->url << " ";
//            current = current->next;
//        }
//        cout << endl;
//    }
//
//    void clear() {
//        while (front != nullptr) {
//            popBack();
//        }
//    }
//};
//
//int main() {
//    Deque history;
//    int choice;
//    char url[100];
//
//    while (true) {
//        cout << "\n1. Visit URL\n2. Back\n3. Display history\n4. Clear history\n5. Exit\n";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter URL: ";
//            cin >> url;
//            history.pushBack(url);
//            break;
//
//        case 2:
//            history.popBack();
//            cout << "Went back.\n";
//            break;
//
//        case 3:
//            cout << "History: ";
//            history.display();
//            break;
//
//        case 4:
//            history.clear();
//            cout << "History cleared.\n";
//            break;
//
//        case 5:
//            return 0;
//
//        default:
//            cout << "Invalid choice. Try again.\n";
//        }
//    }
//
//}

//4
//struct Car {
//    char id[50];
//    Car* next;
//
//    Car(const char* idValue) : next(nullptr) {
//        int i = 0;
//        while (idValue[i] != '\0') {
//            id[i] = idValue[i];
//            i++;
//        }
//        id[i] = '\0';
//    }
//};
//
//class Queue {
//private:
//    Car* front;
//    Car* rear;
//
//public:
//    Queue() : front(nullptr), rear(nullptr) {}
//
//    void enqueue(const char* id) {
//        Car* newCar = new Car(id);
//        if (rear == nullptr) {
//            front = rear = newCar;
//        }
//        else {
//            rear->next = newCar;
//            rear = newCar;
//        }
//    }
//
//    Car* dequeue() {
//        if (front == nullptr) return nullptr;
//        Car* temp = front;
//        front = front->next;
//        if (front == nullptr) rear = nullptr;
//        return temp;
//    }
//
//    bool isEmpty() const {
//        return front == nullptr;
//    }
//};
//
//class Stack {
//private:
//    Car* top;
//
//public:
//    Stack() : top(nullptr) {}
//
//    void push(const char* id) {
//        Car* newCar = new Car(id);
//        newCar->next = top;
//        top = newCar;
//    }
//
//    Car* pop() {
//        if (top == nullptr) return nullptr;
//        Car* temp = top;
//        top = top->next;
//        return temp;
//    }
//
//    bool isEmpty() const {
//        return top == nullptr;
//    }
//};
//
//int main() {
//    Queue waitingQueue;
//    Stack parkingLot;
//    int maxCapacity, choice;
//
//    cout << "Enter parking lot capacity: ";
//    cin >> maxCapacity;
//
//    while (true) {
//        cout << "\n1. Add car to queue\n2. Park car\n3. Remove car\n4. Exit\n";
//        cin >> choice;
//
//        if (choice == 1) {
//            char carId[50];
//            cout << "Enter car ID: ";
//            cin >> carId;
//            waitingQueue.enqueue(carId);
//        }
//        else if (choice == 2) {
//            if (parkingLot.isEmpty() || maxCapacity > 0) {
//                Car* car = waitingQueue.dequeue();
//                if (car != nullptr) {
//                    parkingLot.push(car->id);
//                    delete car;
//                    maxCapacity--;
//                    cout << "Car parked.\n";
//                }
//                else {
//                    cout << "No cars in the queue.\n";
//                }
//            }
//            else {
//                cout << "Parking lot is full.\n";
//            }
//        }
//        else if (choice == 3) {
//            Car* car = parkingLot.pop();
//            if (car != nullptr) {
//                cout << "Car removed: " << car->id << endl;
//                delete car;
//                maxCapacity++;
//            }
//            else {
//                cout << "Parking lot is empty.\n";
//            }
//        }
//        else if (choice == 4) {
//            break;
//        }
//        else {
//            cout << "Invalid choice.\n";
//        }
//    }
//}












