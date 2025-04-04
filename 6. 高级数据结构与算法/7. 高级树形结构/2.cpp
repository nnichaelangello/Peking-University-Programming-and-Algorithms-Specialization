#include <iostream>
using namespace std;

const int MAX_CLIENTS = 100000;

struct Client {
    int id;
    int priority;
};

Client max_heap[MAX_CLIENTS];  // Untuk command 2 (prioritas tertinggi)
Client min_heap[MAX_CLIENTS];  // Untuk command 3 (prioritas terendah)
int max_heap_size = 0;
int min_heap_size = 0;

void swap_clients(Client &a, Client &b) {
    Client temp = a;
    a = b;
    b = temp;
}

void max_heapify_up(int index) {
    while (index > 0) {
        int parent = (index - 1) / 2;
        if (max_heap[parent].priority < max_heap[index].priority) {
            swap_clients(max_heap[parent], max_heap[index]);
            index = parent;
        } else {
            break;
        }
    }
}

void min_heapify_up(int index) {
    while (index > 0) {
        int parent = (index - 1) / 2;
        if (min_heap[parent].priority > min_heap[index].priority) {
            swap_clients(min_heap[parent], min_heap[index]);
            index = parent;
        } else {
            break;
        }
    }
}

void max_heapify_down(int index) {
    while (true) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;

        if (left < max_heap_size && max_heap[left].priority > max_heap[largest].priority) {
            largest = left;
        }
        if (right < max_heap_size && max_heap[right].priority > max_heap[largest].priority) {
            largest = right;
        }

        if (largest != index) {
            swap_clients(max_heap[index], max_heap[largest]);
            index = largest;
        } else {
            break;
        }
    }
}

void min_heapify_down(int index) {
    while (true) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int smallest = index;

        if (left < min_heap_size && min_heap[left].priority < min_heap[smallest].priority) {
            smallest = left;
        }
        if (right < min_heap_size && min_heap[right].priority < min_heap[smallest].priority) {
            smallest = right;
        }

        if (smallest != index) {
            swap_clients(min_heap[index], min_heap[smallest]);
            index = smallest;
        } else {
            break;
        }
    }
}

void insert_client(int id, int priority) {
    // Insert ke max heap
    max_heap[max_heap_size] = {id, priority};
    max_heapify_up(max_heap_size);
    max_heap_size++;

    // Insert ke min heap
    min_heap[min_heap_size] = {id, priority};
    min_heapify_up(min_heap_size);
    min_heap_size++;
}

int extract_max() {
    if (max_heap_size == 0) return 0;

    int max_id = max_heap[0].id;
    max_heap[0] = max_heap[max_heap_size - 1];
    max_heap_size--;
    max_heapify_down(0);

    // Hapus juga dari min heap (implementasi sederhana)
    for (int i = 0; i < min_heap_size; i++) {
        if (min_heap[i].id == max_id) {
            min_heap[i] = min_heap[min_heap_size - 1];
            min_heap_size--;
            min_heapify_down(i);
            break;
        }
    }

    return max_id;
}

int extract_min() {
    if (min_heap_size == 0) return 0;

    int min_id = min_heap[0].id;
    min_heap[0] = min_heap[min_heap_size - 1];
    min_heap_size--;
    min_heapify_down(0);

    // Hapus juga dari max heap (implementasi sederhana)
    for (int i = 0; i < max_heap_size; i++) {
        if (max_heap[i].id == min_id) {
            max_heap[i] = max_heap[max_heap_size - 1];
            max_heap_size--;
            max_heapify_down(i);
            break;
        }
    }

    return min_id;
}

int main() {
    int command;
    while (cin >> command && command != 0) {
        if (command == 1) {
            int id, priority;
            cin >> id >> priority;
            insert_client(id, priority);
        } else if (command == 2) {
            cout << extract_max() << endl;
        } else if (command == 3) {
            cout << extract_min() << endl;
        }
    }
    return 0;
}