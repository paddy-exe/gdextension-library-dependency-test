//© Copyright 2014-2022, Juan Linietsky, Ariel Manzur and the Godot community (CC-BY 3.0)
#include "summator.h"

#include <godot_cpp/core/class_db.hpp>

using namespace godot;

Summator::Summator()
{
    count = 0;
}

Summator::~Summator()
{
}

void Summator::add(int p_value)
{
    count += p_value;
}

int Summator::add_two(int p_val_a, int p_val_b) {
    int result = SumLib::add_two(p_val_a, p_val_b);
    return result;
}

void Summator::reset()
{
    count = 0;
}

int Summator::get_total() const
{
    return count;
}

void Summator::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("add", "value"), &Summator::add, DEFVAL(1));
    ClassDB::bind_method(D_METHOD("add_two", "val_a", "val_b"), &Summator::add_two);
    ClassDB::bind_method(D_METHOD("reset"), &Summator::reset);
    ClassDB::bind_method(D_METHOD("get_total"), &Summator::get_total);
}