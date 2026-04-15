#include "mins_field/mins_field.h"
#include "row/row.h"

// структура минного поля
struct mins_field {
    row_t * m_rows;
    size_t m_count_rows;
};

// Инициализируем минное поле
mins_field_t init_mins_field(const size_t count_rows, const size_t count_columns, const size_t count_mins) {
    mins_field_t field  calloc(sizeof(*mins_field_t), 1);
    ize_t index_rows = 0;
    size_t index_columns = 0;
    size_t index_mins = 0;
    size_t * array_mins = calloc(sizeof(*array_mins), count_rows);
    field->m_rows=calloc(sizeof(*field->m_rows), count_rows);
    field->m_count_rows = count_rows;

    for(index_mins = 0; index_mins < count_mins;index_mins++)
        array_mins[rand()%count_mins]++;

    for(index_rows = 0; index_rows < count_rows;index_rows++)
        field->m_rows[index_rows] = init_row(count_columns, array_mins[index_rows]);

    free(array_mins);

    for (index_columns = 0; index_columns < count_columns; index_columns++)
        set_count_mines_near_cell_row(NULL, field->m_rows[0], field->m_rows[1], index_columns);
    
    for (index_rows = 1;index_rows < (count_rows - 1); index_rows++)
        for(index_columns = 0;index_columns <count_columns;index_columns++)
            set_count_mines_near_cell_row(field->m_rows[index_rows - 1], field->m_rows[index_rows], field->m_rows[index_rows + 1], index_columns);


    for (index_columns = 0; index_columns < count_columns; index_columns++)
        set_count_mines_near_cell_row(field->m_rows[count_rows - 2], field->m_rows[count_rows - 1], NULL, index_columns);
}

// Получаем количество мин во круг текушей ячейки
mins_field_t get_count_mins_cell_mins_field(mins_field_t field, const size_t row, const size_t column) {
    mins_field_t field=calloc(sizeof(*get_count_mins_cell_mins_field)1);
    get_count_mines_near_cell_row();
    
}

// Есть ли мина на текущей ячейки
bool is_min_cell_mins_field(mins_field_t field, const size_t row, const size_t column) {
    /* TODO */
    is_min_cell_row();
}

// Ставим флаг
void up_flag_cell_mins_field(mins_field_t field, const size_t row, const size_t column) {
    /* TODO */
}

// Опускаем флаг
void down_flag_cell_mins_field(mins_field_t field, const size_t row, const size_t column) {
    /* TODO */
}

// Установлен ли флаг
bool is_flag_cell_mins_field(mins_field_t field, const size_t row, const size_t column) {
    /* TODO */
}

// Освобождаем ресурсы
void destroy_mins_field(mins_field_t field) {
    /* TODO */
}
