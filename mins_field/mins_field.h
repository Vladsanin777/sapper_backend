// структура минного поля
struct mins_field;

// Указатель на минное поле для пользователя
typedef struct mins_field * mins_field;

// Инициализируем минное поле
mins_field init_mins_field(const int count_rows, const int count_columns, const count_mins);

// Получаем количество мин во круг текушей ячейки
int get_count_mins_cell_mins_field(mins_field field, const int row, const int column);

// Есть ли мина на текущей ячейки
int is_min_cell_mins_field(mins_field field, const int row, const int column);

// Ставим флаг
int up_flag_cell_mins_field(mins_field field, const int row, const int column);

// Опускаем флаг
int down_flag_cell_mins_field(mins_field field, const int row, const int column);

// Установлен ли флаг
int get_flag_cell_mins_field(mins_field field, const int row, const int column);

// Освобождаем ресурсы
int destroy_mins_field(mins_field field);
