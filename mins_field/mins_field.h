// структура минного поля
struct mins_field;

// Указатель на минное поле для пользователя
typedef struct mins_field * mins_field_t;

// Инициализируем минное поле
mins_field_t init_mins_field(const size_t count_rows, const size_t count_columns, const count_mins);

// Получаем количество мин во круг текушей ячейки
size_t get_count_mins_cell_mins_field(mins_field_t field, const size_t row, const size_t column);

// Есть ли мина на текущей ячейки
bool is_min_cell_mins_field(mins_field_t field, const size_t row, const size_t column);

// Ставим флаг
void up_flag_cell_mins_field(mins_field_t field, const size_t row, const size_t column);

// Опускаем флаг
void down_flag_cell_mins_field(mins_field_t field, const size_t row, const size_t column);

// Установлен ли флаг
bool is_flag_cell_mins_field(mins_field_t field, const size_t row, const size_t column);

// Освобождаем ресурсы
void destroy_mins_field(mins_field_t field);
