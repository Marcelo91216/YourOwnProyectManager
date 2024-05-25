#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <vector>

#define MIN_DATE "1970-01-01"

class Task{
    private:
        std::string descr;
        int prior;
        bool done;
        std::string lim_date;
        std::vector<std::string> tags;
    public:
        Task();
        Task(std::string, int, bool, std::string);
        int get_date_days();
};

Task::Task(){
    descr = "No description wrote";
    prior = 0;
    done = false;
    lim_date = MIN_DATE;
}

Task::Task(std::string descr, int prior = 0, bool done = false, std::string lim_date){
    this->descr = descr;
    this->prior = prior;
    this->done = done;
    this->lim_date = lim_date;
}

int Task::get_date_days(){
    int year, month, day;
    year = (this->lim_date[0]-48)*1000 + (this->lim_date[1]-48)*100 + (this->lim_date[2]-48)*10 + (this->lim_date[3]-48);
    month = (this->lim_date[5]-48)*10 + (this->lim_date[6]-48);
    day = (this->lim_date[8]-48)*10 + (this->lim_date[9]-48);
    return day + month*30 + year*365;
}

#endif