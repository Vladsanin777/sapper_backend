#include "cell/cell.h"

// структура ячейки
struct cell {
    int m_mins_near;
    bool m_is_min : 1;
    bool m_is_flag : 1;
};

// при неудаче возвращаем ошибку(иначе 0), везде даже в инициализации
//
// Создаём ячейку
cell init_cell(void) {
    /* TODO */
}

// Ставим флаг
void up_flag_cell(cell_t cell) {
    /* TODO */
}

// Убираем флаг
void down_flag_cell(cell_t cell) {
    /* TODO */
}

// Возвращаем есть ли флаг
bool is_flag_cell(cell_t cell) {
    /* TODO */
}

// Устанавливаем мину
void up_min_cell(cell_t cell) {
    /* TODO */
}

// Возвращаем есть ли на данной ячейке бомба
bool is_min_cell(cell_t cell) {
    /* TODO */
}

// Записываем сколько мин вокруг
void set_min_near_cell(cell_t cell) {
    /* TODO */
}

// Получаем сколько мин вокруг
int get_min_near_cell(cell_t cell) {
    /* TODO */
}

// Освобождаем ресурсы
void destroy_cell(cell_t cell) {
    /* TODO */
}
