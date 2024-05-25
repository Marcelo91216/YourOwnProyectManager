#ifndef PROYECT_H
#define PROYECT_H

#include <iostream>
#include "Task.hpp"
class Proyecto{
    private:
        std::string titulo;
        std::vector<Task> list_of_tasks;
        std::string lim_date;
        std::vector<std::string> tags;
    public:
        Proyecto();
};

#endif