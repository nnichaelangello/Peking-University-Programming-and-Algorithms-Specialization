#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

class Student
{
private:
    static const int GRADES = 4;
    string name;
    int id;
    int age;
    int score[GRADES];
public:
    int Average();
    string GetName() { return name; }
    int GetId() { return id; }
    int GetAge() { return age; }
    void SetName(const string& name_) { name = name_; }
    void SetAge(int age_) { age = age_; }
    void SetId(int id_) { id = id_; }
    void SetScore(int score_[]) {
        memcpy(score, score_, sizeof(score));
    }
    void Init(const char*);
};

void Student::Init(const char* line)
{
    const char* p = strchr(line, ',');
    string s = line;
    name = s.substr(0, p - line);
    sscanf(p + 1, "%d,%d,%d,%d,%d,%d", &age, &id, score, score + 1, score + 2, score + 3);
}

int Student::Average() {
    int sum = 0;
    for (int i = 0; i < Student::GRADES; ++i)
        sum += score[i];
    return sum / Student::GRADES;
}

int main()
{
    Student stu;
    char line[200];
    
    // Replaced gets() with fgets() for safety
    if (fgets(line, sizeof(line), stdin)) {
        // Remove potential newline character
        line[strcspn(line, "\n")] = 0;
        stu.Init(line);
        printf("%s,%d,%d,%d", stu.GetName().c_str(), stu.GetAge(), stu.GetId(), stu.Average());
    } else {
        cerr << "Error reading input" << endl;
        return 1;
    }
    
    return 0;
}