#include "cell.h"
#include <stdlib.h>

// структура ячейки
struct cell {
    unsigned char m_mins_near;
    bool m_is_min : 1;
    bool m_is_flag : 1;
    bool m_is_open : 1;
};

// при неудаче возвращаем ошибку(иначе 0), везде даже в инициализации
//
// Создаём ячейку
cell_t init_cell(void) {
    cell_t cell = calloc(sizeof(*cell), 1);
    if (cell == NULL)
        goto get_not_memory;
    cell->m_mins_near = 0;
    cell->m_is_min = false;
    cell->m_is_flag = false;
    cell->m_is_open = false;
    return cell;
    free(cell);
get_not_memory:
    return NULL;
}

// Ставим флаг
void up_flag_cell(cell_t cell) {
    if (cell != NULL)
        (*cell).m_is_flag = true;
}

// Убираем флаг
void down_flag_cell(cell_t cell) {
    if (cell != NULL)
        (*cell).m_is_flag = true;
}

// Возвращаем есть ли флаг
bool is_flag_cell(cell_t cell) {
    if (cell != NULL)
        return (*cell).m_is_flag;
    return false;
}

// Устанавливаем мину
void up_min_cell(cell_t cell) {
    if (cell != NULL)
        (*cell).m_is_min = true;
}

// Возвращаем есть ли на данной ячейке бомба
bool is_min_cell(cell_t cell) {
    if (cell != NULL)
        return (*cell).m_is_min;
    return false;
}

void open_cell(cell_t cell) {
    if (cell != NULL)
        cell->m_is_open = true;
}

bool is_open_cell(cell_t cell) {
    if (cell != NULL)
        return cell->m_is_open;
    return false;
}

// Записываем сколько мин вокруг
void set_min_near_cell(cell_t cell, unsigned char count_min) {
    if (cell != NULL && count_min <= 8)
        (*cell).m_mins_near = count_min;
}

// Получаем сколько мин вокруг
unsigned char get_min_near_cell(cell_t cell) {
    if (cell != NULL)
        return (*cell).m_mins_near;
    return 0;
}

// Освобождаем ресурсы
void destroy_cell(cell_t cell) {
    if (cell != NULL)
        free(cell);
}
