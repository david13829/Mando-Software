#include<iostream>
using namespace std;

Class Student{
    private:
    char name[];
    double id[];
    double korean[];
    double english[];
    double math[];
    double average[];
    
    public:
    void get(char _name[], double _id[], double _korean[], double _english[], double _math[]){
        for (int i = 0; i < 10; ++i){
        name[i] = _name[i];
        id[i] = _id[i];
        korean[i] = _korean[i];
        english[i] = _english[i];
        math[i] = _math[i];
        }
    }
    
    double get_korean(){
        double min_score = korean[0];
        for (int i = 1; i < 10; ++i) {
            if (korean[i] < min_score) {
                min_score = korean[i];
                double min_id = id[i];
            }
        }
        cout << "국어: " << min_score << " | " << min_id << endl;
    }
    
    double get_english(){
        double min_score = english[0];
        for (int i = 1; i < 10; ++i) {
            if (english[i] < min_score) {
                min_score = english[i];
                double min_id = id[i];
            }
        }
        cout << "영어: " << min_score << " | " << min_id << endl;
    }
    
     double get_math(){
        double min_score = math[0];
        for (int i = 1; i < 10; ++i) {
            if (math[i] < min_score) {
                min_score = math[i];
                double min_id = id[i];
            }
        }
        cout << "수학: " << min_score << " | " << min_id << endl;
    }
    
    double average(){
        for(int i = 0; i < 10; i++){
            average[i] = (korean[i] + english[i] + math[i])/3;
        }
        
        for(int j = 0; j < 5; ++j) {
            for (int k = j + 1; j < 6; ++k) {
                if (average[k] < average[j]) {
                    // 값 교환
                    double score = average[j];
                    average[j] = average[k];
                    average[k] = score;
                }
            }
        }
        
        for (int i = 0; i < 6; ++i) {
            cout << average[i] << endl;
        }
    }
};

int main()
{
    Student student[10];
    char name;
    double id, korean, english, math;
    
    for(int i = 0; i < 10; i++){
        cout << "이름 / 학번 / 국어 / 영어 / 수학" << endl;
        cin >> name >> id >> korean >> english >> math;
        student[i].get(name, id, korean, english, math);
    }
    
    student.get_korean();
    student.get_english();
    student.get_math();
    student.average();
    return 0;
}
