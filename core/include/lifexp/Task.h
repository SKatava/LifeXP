#ifndef TASK_STRUCT_H
#define TASK_STRUCT_H

#include <string>

struct Task {
    Task(std::string setDesc) : description(setDesc) {}
    std::string description;
    bool completed = false;
};

#endif
