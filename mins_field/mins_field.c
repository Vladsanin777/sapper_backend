#include "mins_field/mins_field.h"
#include "row/row.h"

// структура минного поля
struct mins_field {
    row_t * m_rows;
    int count_rows;
};

// Инициализируем минное поле
mins_field_t init_mins_field(const int count_rows, const int count_columns, const int count_mins) {
    /* TODO */
}

// Получаем количество мин во круг текушей ячейки
int get_count_mins_cell_mins_field(mins_field_t field, const int row, const int column) {
    /* TODO */
}

// Есть ли мина на текущей ячейки
bool is_min_cell_mins_field(mins_field_t field, const int row, const int column) {
    /* TODO */
}

// Ставим флаг
void up_flag_cell_mins_field(mins_field_t field, const int row, const int column) {
    /* TODO */
}

// Опускаем флаг
void down_flag_cell_mins_field(mins_field_t field, const int row, const int column) {
    /* TODO */
}

// Установлен ли флаг
bool is_flag_cell_mins_field(mins_field_t field, const int row, const int column) {
    /* TODO */
}

// Освобождаем ресурсы
void destroy_mins_field(mins_field_t field) {
    /* TODO */
}
