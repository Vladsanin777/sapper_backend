#include "cell/cell.h"
#include <stdlib.h>

// структура ячейки
struct cell {
    int m_mins_near;
    bool m_is_min : 1;
    bool m_is_flag : 1;
};

// при неудаче возвращаем ошибку(иначе 0), везде даже в инициализации
//
// Создаём ячейку
cell_t init_cell(void) {
    cell_t cell = calloc(sizeof(*cell), 1);
    cell->m_mins_near = 0;
    cell->m_is_min = false;
    cell->m_is_flag = false;
    return cell;
}

// Ставим флаг
void up_flag_cell(cell_t cell) {
    (*cell).m_is_flag = true;
}

// Убираем флаг
void down_flag_cell(cell_t cell) {
    (*cell).m_is_flag = false;
}

// Возвращаем есть ли флаг
bool is_flag_cell(cell_t cell) {
    return (*cell).m_is_flag;
}

// Устанавливаем мину
void up_min_cell(cell_t cell) {
    (*cell).m_is_min = true;
}

// Возвращаем есть ли на данной ячейке бомба
bool is_min_cell(cell_t cell) {
    return (*cell).m_is_min;
}

// Записываем сколько мин вокруг
void set_min_near_cell(cell_t cell, int count_min) {
    (*cell).m_mins_near = count_min;
}

// Получаем сколько мин вокруг
int get_min_near_cell(cell_t cell) {
    return (*cell).m_mins_near;
}

// Освобождаем ресурсы
void destroy_cell(cell_t cell) {
    free(cell);
}
