#ifndef GOAL_STRUCT_H
#define GOAL_STRUCT_H

#include <string>
#include <vector>
#include <algorithm>

#include "Task.h"

struct Goal {
    Goal(std::string setDesc) : description(setDesc) {} 
    std::string description;
    std::vector<Task> tasks;
    bool isCompleted() const  {
        return std::all_of(tasks.begin(), tasks.end(), [](const Task& t){ return t.completed; });
    };
    void addTask(const Task& task) { tasks.push_back(task); }
};

#endif
