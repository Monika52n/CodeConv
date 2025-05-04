//STL algo
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<pair<string, int>> students = {
        {"John Doe", 20},
        {"Jane Smith", 22},
        {"Alice Johnson", 19},
        {"Bob Brown", 23},
        {"Charlie Davis", 21}
    };

    // 1. sort
    cout << "Students sorted by age:" << endl;
    sort(students.begin(), students.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second < b.second;  // Rendezés életkor szerint (a.second az életkor)
    });
    for (const auto& student : students) {
        cout << "Name: " << student.first << ", Age: " << student.second << endl;
    }
    cout << endl;

    // 2. find
    string search_name = "Jane Smith";
    auto it = find_if(students.begin(), students.end(), [&search_name](const pair<string, int>& student) {
        return student.first == search_name;
    });

    if (it != students.end()) {
        cout << "Student found: Name: " << it->first << ", Age: " << it->second << endl;
    } else {
        cout << "Student not found!" << endl;
    }
    cout << endl;

    // 3. erase
    students.erase(remove_if(students.begin(), students.end(), [](const pair<string, int>& student) {
        return student.first == "Alice Johnson";  // Törlés név alapján
    }), students.end());

    cout << "Students after deletion:" << endl;
    for (const auto& student : students) {
        cout << "Name: " << student.first << ", Age: " << student.second << endl;
    }
    cout << endl;

    // 4. max
    auto max_age_student = *max_element(students.begin(), students.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second < b.second;  // Maximális életkor alapján
    });

    cout << "The oldest student: Name: " << max_age_student.first << ", Age: " << max_age_student.second << endl;

    return 0;
}
