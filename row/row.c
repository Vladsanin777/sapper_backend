#include "row/row.h"
#include "cell/cell.h"


// структура строки
struct row {
    cell * m_cells;
    int m_count_cells;
};

// Недоступная пользователю функция для установки одной мины(предобъявление) должна вызываться только в add_mines_row()
int add_mine_row(row rw);

// Недоступная пользователю функция для установки нескольких мины(предобъявление) должна вызываться только в init_row()
int add_mines_row(row rw, const int count_mines);

// при неудаче возвращаем ошибку(иначе 0), везде даже в инициализации
//
// Создаём строку, с переданным количеством ячеек
row init_row(const int count_cells, const int count_mines) {
    /* TODO */
}

// Рандомно ставим одну мину на свободную ячейку
int add_mine_row(row rw) {
    /* TODO */
}

// Рандомно ставим несколько мин на свободные ячейки (Несколько раз вызываем add_mine_rows())
int add_mines_row(row rw, const int count_mines) {
    /* TODO */
}

// Ставим флаг на ячейку с переданным индексом
int up_flag_cell_row(row rw, const int index_cell) {
    /* TODO */
}

// Убираем флаг на ячейку с переданным индексом
int down_flag_cell_row(row rw, const int index_cell) {
    /* TODO */
}

// Является ли ячейка с индексом миной
int is_min_cell_row(row rw, const int index_cell) {
    /* TODO */
}

// Стоит ли флаг на ячейке с переданным индексом
int is_flag_cell_row(row rw, const int index_cell) {
    /* TODO */
}

// Возврашаем количество мин в окружающих ячейках
int get_count_mines_near_cell_row(row rw, const int index_cell) {
    /* TODO */
}

// Записываем в ячейку сколько мин в ней плюс окружающих клетках
int set_count_mines_near_cell_row(row top /* Верх */, \
        row central /* Центер */, row bottom /* Низ */, const int index_cell) {
    /* TODO */
}

// Освобождаем ресурсы
int destroy(row rw) {
    /* TODO */
}
