#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    int i, j, k, x;
    vector<int> keyword[1024];
    set<int> keywordII[1024];
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &m);
        while(m--) {
            scanf("%d", &x);
            keyword[i].push_back(x);
            keywordII[i].insert(x);
        }
    }
    scanf("%d", &m);
    int c[1024];
    while(m--) {
        for(i = 0; i < n; i++)
            scanf("%d", &c[i]);
        set<int> ret;
        for(i = 0; i < n; i++) {
            if(c[i] == 1) {
                for(j = 0; j < keyword[i].size(); j++)
                    ret.insert(keyword[i][j]);
                break;
            }
        }
        for(i = 0; i < n; i++) {
            if(c[i] == -1) {
                for(j = 0; j < keyword[i].size(); j++) {
                    ret.erase(keyword[i][j]);
                }
            }
            if(c[i] == 1) {
                for(set<int>::iterator it = ret.begin();
                    it != ret.end(); ) {
                    if(keywordII[i].find(*it) == keywordII[i].end())
                        ret.erase(it++);
                    else
                        ++it;
                }
            }
        }
        if(ret.size() == 0)
            puts("NOT FOUND");
        else {
            int f = 0;
            for(set<int>::iterator it = ret.begin();
                it != ret.end(); it++) {
                if(f)    putchar(' ');
                f = 1;
                printf("%d", *it);
            }
            puts("");
        }
    }
    return 0;
}