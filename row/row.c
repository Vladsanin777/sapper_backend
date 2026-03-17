#include "row/row.h"
#include "cell/cell.h"


// структура строки
struct row {
    cell_t * m_cells;
    int m_count_cells;
};

// Недоступная пользователю функция для установки одной мины(предобъявление) должна вызываться только в add_mines_row()
void add_mine_row(row_t row);

// Недоступная пользователю функция для установки нескольких мины(предобъявление) должна вызываться только в init_row()
void add_mines_row(row_t row, const int count_mines);

// при неудаче возвращаем ошибку(иначе 0), везде даже в инициализации
//
// Создаём строку, с переданным количеством ячеек
row_t init_row(const int count_cells, const int count_mines) {
    row_t row = calloc(sizeof(*row),1);
    row->m_cells = calloc(sizeof(*row->m_cells),count_cells);
    (*row).m_count_cells = count_cells;
    add_mines_row(row,count_mines);
    return row;
}

// Рандомно ставим одну мину на свободную ячейку
void add_mine_row(row_t row) {
    cell_t *cell_ptr = row->m_cells + (rand() % (*row).m_count_cells);
    cell_t * const cell_ptr_cpy = cell_ptr;
    cell_t *cell_begin = row->m_cells;
    cell_t *cell_end = cell_begin + row->m_count_cells;
    for (; cell_ptr < cell_begin + row->m_count_cells; cell_ptr++)
        if (!is_min_cell(*cell_ptr))
            goto cell_free;
    cell_ptr = cell_begin;
    for (; cell_ptr < cell_ptr_cpy; cell_ptr++)
        if (!is_min_cell(*cell_ptr))
            goto cell_free;
    return;
cell_free:
    up_min_cell(*cell_ptr);
}

// Рандомно ставим несколько мин на свободные ячейки (Несколько раз вызываем add_mine_rows())
void add_mines_row(row_t row, const int count_mines) {
    int index = 0;
    for(index = 0; index < count_mines; index++)
        add_mine_row(row);
}

// Ставим флаг на ячейку с переданным индексом
void up_flag_cell_row(row_t row, const int index_cell) {
    /* TODO */
}

// Убираем флаг на ячейку с переданным индексом
void down_flag_cell_row(row_t row, const int index_cell) {
    /* TODO */
}

// Является ли ячейка с индексом миной
bool is_min_cell_row(row_t row, const int index_cell) {
    /* TODO */
}

// Стоит ли флаг на ячейке с переданным индексом
bool is_flag_cell_row(row_t row, const int index_cell) {
    /* TODO */
}

// Возврашаем количество мин в окружающих ячейках
int get_count_mines_near_cell_row(row_t row, const int index_cell) {
    /* TODO */
}

// Записываем в ячейку сколько мин в ней плюс окружающих клетках
void set_count_mines_near_cell_row(row_t top /* Верх */, \
        row_t central /* Центер */, row_t bottom /* Низ */, const int index_cell) {
    /* TODO */
}

// Освобождаем ресурсы
void destroy(row_t row) {
    /* TODO */
}
