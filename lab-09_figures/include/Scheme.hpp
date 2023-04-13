#pragma once

#include "Figure.hpp"
#include <stdexcept>

class Scheme {
public:
    explicit Scheme(int capacity);
    ~Scheme();

    void push_back_figure(Figure* fg);
    void remove_figure(int id); // элементы смещаются влево

    void print_all_figures();
    void zoom_figure(int id, int factor);
    Figure* is_inside_figure(int x, int y); // если внутри нескольких фигур, то возвращается любая из них
    [[maybe_unused]] void move(int id, int new_x, int new_y);

private:
    // ...
    int figures_count_;
    int capacity_;
    Figure** figures_; // размер массива задается в конструкторе и больше не растет
};
