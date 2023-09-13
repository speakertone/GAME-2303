#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Student
{
private:
    std::string firstName;
    std::string lastName;
    int avgGrade;

public:
    Student(std::string firstName = "", std::string lastName = "", int avgGrade = 0) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->avgGrade = avgGrade;
    }
    std::string getFirstName() { return firstName; }
    std::string getLastName() { return lastName; }
    int getAvgGrade() { return avgGrade; }
    void setFirstName(std::string firstName) { this->firstName = firstName; }
    void setLastName(std::string lastName) { this->lastName = lastName; }
    void setAvgGrade(int avgGrade) { this->avgGrade = avgGrade; }
};

vector<Student> readStudentsFromFile(string filePath);
void printStudents(vector<Student> students);

int main()
{
    string defaultFilePath = "example.txt";
    cout << "Reading from file: " << defaultFilePath << "\n";
    printStudents(readStudentsFromFile(defaultFilePath));
}

static vector<Student> readStudentsFromFile(string filePath)
{
    ifstream studentsFile(filePath);
    string currentLine;
    vector<Student> students;

    while (getline(studentsFile, currentLine)) {
        string firstName = currentLine.substr(0, currentLine.find_first_of(' '));
        string lastName = currentLine.substr(currentLine.find_first_of(' ') + 1, currentLine.find_last_of(' ') - currentLine.find_first_of(' ') - 1);
        int avgGrade = stoi(currentLine.substr(currentLine.find_last_of(' ') + 1));

        students.push_back(Student(firstName, lastName, avgGrade));
    }
    return students;
}

static void printStudents(vector<Student> students)
{
    for (Student s : students)
    {
        cout << s.getFirstName() << " " << s.getLastName() << ": " << s.getAvgGrade() << "\n";
    }
}