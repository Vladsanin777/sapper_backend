#include "mins_field/mins_field.h"
#include "row/row.h"

// структура минного поля
struct mins_field {
    row_t * m_rows;
    size_t m_count_rows;
};

// Инициализируем минное поле
mins_field_t init_mins_field(const size_t count_rows, const size_t count_columns, const size_t count_mins) {
    size_t index_rows = 0;
    size_t index_columns = 0;
    size_t index_mins = 0;
    mins_field_t field = NULL;
    size_t * array_mins = calloc(sizeof(*array_mins), count_rows);
    if (array_mins == NULL)
        goto get_not_array_mins;
    field = calloc(sizeof(*mins_field_t), 1);
    if (field == NULL)
        goto get_not_memory;
    field->m_rows=calloc(sizeof(*field->m_rows), count_rows);
    if (field->m_rows == NULL)
        goto get_not_array;
    field->m_count_rows = count_rows;

    for(index_mins = 0; index_mins < count_mins;index_mins++)
        array_mins[rand()%count_mins]++;

    for(index_rows = 0; index_rows < count_rows;index_rows++) {
        field->m_rows[index_rows] = init_row(count_columns, array_mins[index_rows]);
        if (field->m_rows[index_rows] == NULL) {
            size_t index_free = 0;
            for (index_free = 0; index_free < index_rows; index_free++) {
                destroy_row(field->m_rows[index_free]);
            }
            goto get_not_row;
        }
    }

    free(array_mins);

    for (index_columns = 0; index_columns < count_columns; index_columns++)
        set_count_mines_near_cell_row(NULL, field->m_rows[0], field->m_rows[1], index_columns);
    
    for (index_rows = 1;index_rows < (count_rows - 1); index_rows++)
        for(index_columns = 0;index_columns <count_columns;index_columns++)
            set_count_mines_near_cell_row(field->m_rows[index_rows - 1], field->m_rows[index_rows], field->m_rows[index_rows + 1], index_columns);


    for (index_columns = 0; index_columns < count_columns; index_columns++)
        set_count_mines_near_cell_row(field->m_rows[count_rows - 2], field->m_rows[count_rows - 1], NULL, index_columns);
    return field;

    for (index_rows = 0; index_rows < field->m_count_rows; index_rows++) {
        destroy_row(field->m_rows[index_rows]);
    }
get_not_row:
    free(row->m_cells);
get_not_array:
    free(row);
get_not_memory:
    free(array_mins);
    return NULL;
}

// Получаем количество мин во круг текушей ячейки
unsigned char get_count_mins_cell_mins_field(mins_field_t field, const size_t row, const size_t column) {
    if (field !=NULL && row <field->m_count_rows)
        return get_count_mines_near_cell_row(field->m_rows[row],column);
    return 0;
}

// Есть ли мина на текущей ячейки
bool is_min_cell_mins_field(mins_field_t field, const size_t row, const size_t column) {
    if (field !=NULL && row <field->m_count_rows)
        return is_min_cell_row(field->m_rows[row],column);
    return false;
}

// Ставим флаг
void up_flag_cell_mins_field(mins_field_t field, const size_t row, const size_t column) {
    if (field !=NULL && row <field->m_count_rows)
        up_flag_cell_row(field->m_rows[row],column);
}

// Опускаем флаг
void down_flag_cell_mins_field(mins_field_t field, const size_t row, const size_t column) {
    if (field !=NULL && row <field->m_count_rows)
        down_flag_cell_row(field->m_rows[row],column);
}

// Установлен ли флаг
bool is_flag_cell_mins_field(mins_field_t field, const size_t row, const size_t column) {
    if(field !=NULL && row < field->m_count_rows)
        return is_flag_cell_row(field->m_rows[row],column);
    return false;
}

// Освобождаем ресурсы
void destroy_mins_field(mins_field_t field) {
    size_t init_rows = 0;
    if (field != NULL) {
        for(index_rows = 0;index_rows<field->m_count_rows;index_rows++)
            destroy_row(field->m_rows[index_rows]);
        free(field->m_rows);
        free(field);
    }
}
