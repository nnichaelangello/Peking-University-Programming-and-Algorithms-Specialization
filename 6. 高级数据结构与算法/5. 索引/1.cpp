// 1. 倒排索引

// poj上通过,不知道为什么在cousera出现编译错误
// 在下面可以找到cousera通过的代码

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAX_DOCS = 1000;
const int MAX_WORDS = 100;
const int MAX_WORD_LEN = 256;

struct WordEntry {
    char word[MAX_WORD_LEN];
    int docs[MAX_DOCS];
    int count;
};

WordEntry dictionary[MAX_DOCS * MAX_WORDS];
int dict_size = 0;
int N, M;

int find_word(const char* word) {
    for (int i = 0; i < dict_size; i++) {
        if (strcmp(dictionary[i].word, word) == 0) {
            return i;
        }
    }
    return -1;
}

void add_doc_to_word(const char* word, int doc_id) {
    int idx = find_word(word);
    if (idx == -1) {
        strcpy(dictionary[dict_size].word, word);
        dictionary[dict_size].docs[0] = doc_id;
        dictionary[dict_size].count = 1;
        dict_size++;
    } else {
        // Periksa apakah doc_id sudah ada
        bool found = false;
        for (int i = 0; i < dictionary[idx].count; i++) {
            if (dictionary[idx].docs[i] == doc_id) {
                found = true;
                break;
            }
        }
        if (!found) {
            dictionary[idx].docs[dictionary[idx].count++] = doc_id;
            // Urutkan setelah menambahkan
            sort(dictionary[idx].docs, dictionary[idx].docs + dictionary[idx].count);
        }
    }
}

int main() {
    cin >> N;
    for (int doc_id = 1; doc_id <= N; doc_id++) {
        int ci;
        cin >> ci;
        for (int j = 0; j < ci; j++) {
            char word[MAX_WORD_LEN];
            cin >> word;
            add_doc_to_word(word, doc_id);
        }
    }

    cin >> M;
    for (int k = 0; k < M; k++) {
        char query[MAX_WORD_LEN];
        cin >> query;
        int idx = find_word(query);
        if (idx == -1 || dictionary[idx].count == 0) {
            cout << "NOT FOUND" << endl;
        } else {
            for (int i = 0; i < dictionary[idx].count; i++) {
                if (i > 0) cout << " ";
                cout << dictionary[idx].docs[i];
            }
            cout << endl;
        }
    }

    return 0;
}