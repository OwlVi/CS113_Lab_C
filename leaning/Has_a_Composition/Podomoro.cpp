// ex composition

#include <iostream>
#include <cstdio>
#include <sstream>
using namespace std;

class Podomoro{
private:
      string task;
public:
      Podomoro(string task);
      string getName();
      int getPodomoro();
      void start();
      bool isTask(string name);
};

Podomoro::Podomoro(string task):task(task),count(0){}

int Podomoro::getPodomoro(){
      return count;
}

string Podomoro::getName(){
      return task;
}

void Podomoro::start(){
      this->count += 1;
}

bool Podomoro::isTask(string name){
      if (task == name){
            return 1;
      }else{
            return 0;
      }
}

class Todolist{
private:
      int taskList;
      Podomoro **list;
public:
      Todolist();
      int getTask();
      void addTask(string name);
      void showTask();

};

Todolist::Todolist():taskList(0){
      
      list = new Podomoro*[100];
      for (int i = 0 ; i < 100 ; i++){
            list[i] = nullptr;
      }
}

void Todolist::addTask(string name){
      for (int i = 0 ; i < 100 ; i++){
            if (list[i] == nullptr){
                  list[i] = new Podomoro(name);
                  this->taskList += 1;
                  list[i]->start();
                  break;
            }else if (list[i]->isTask(name))
            {
                  list[i]->start();
                  break;
            }
            
      }
}

int Todolist::getTask(){
      return taskList;
}

void Todolist::showTask(){
      cout << taskList << " task:" << endl;
      for(int i = 0 ;i<taskList;i++){
            cout << "[" << list[i]->getPodomoro() << "] " << list[i]->getName() << endl;
      }
}


int main(){
      Todolist myTask;
      
      myTask.addTask("AAA");
      myTask.addTask("BBB");
      cout << myTask.getTask() << endl;
      myTask.addTask("AAA");
      myTask.addTask("CCC");
      myTask.addTask("AAA");
      myTask.addTask("CCC");
      myTask.showTask();
      
}