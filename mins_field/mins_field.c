#include "mins_field/mins_field.h"
#include "row/row.h"

// структура минного поля
struct mins_field {
    row * m_rows;
    int count_rows;
};

// Инициализируем минное поле
mins_field init_mins_field(const int count_rows, const int count_columns, const count_mins) {
    /* TODO */
}

// Получаем количество мин во круг текушей ячейки
int get_count_mins_cell_mins_field(mins_field field, const int row, const int column) {
    /* TODO */
}

// Есть ли мина на текущей ячейки
int is_min_cell_mins_field(mins_field field, const int row, const int column) {
    /* TODO */
}

// Ставим флаг
int up_flag_cell_mins_field(mins_field field, const int row, const int column) {
    /* TODO */
}

// Опускаем флаг
int down_flag_cell_mins_field(mins_field field, const int row, const int column) {
    /* TODO */
}

// Установлен ли флаг
int get_flag_cell_mins_field(mins_field field, const int row, const int column) {
    /* TODO */
}

// Освобождаем ресурсы
int destroy_mins_field(mins_field field) {
    /* TODO */
}
