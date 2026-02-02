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
int up_flag_cell(cell cl) {
    /* TODO */
}

// Убираем флаг
int down_flag_cell(cell cl) {
    /* TODO */
}

// Возвращаем есть ли флаг
int is_flag_cell(cell cl) {
    /* TODO */
}

// Устанавливаем мину
int up_min_cell(cell cl) {
    /* TODO */
}

// Возвращаем есть ли на данной ячейке бомба
int is_min_cell(cell cl) {
    /* TODO */
}

// Записываем сколько мин вокруг
int set_min_near_cell(cell cl) {
    /* TODO */
}

// Получаем сколько мин вокруг
int get_min_near_cell(cell cl) {
    /* TODO */
}

// Освобождаем ресурсы
int destroy_cell(cell cl) {
    /* TODO */
}
