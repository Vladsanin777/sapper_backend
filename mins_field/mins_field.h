// структура минного поля
struct mins_field;

// Указатель на минное поле для пользователя
typedef struct mins_field * mins_field_t;

// Инициализируем минное поле
mins_field_t init_mins_field(const int count_rows, const int count_columns, const count_mins);

// Получаем количество мин во круг текушей ячейки
int get_count_mins_cell_mins_field(mins_field_t field, const int row, const int column);

// Есть ли мина на текущей ячейки
bool is_min_cell_mins_field(mins_field_t field, const int row, const int column);

// Ставим флаг
void up_flag_cell_mins_field(mins_field_t field, const int row, const int column);

// Опускаем флаг
void down_flag_cell_mins_field(mins_field_t field, const int row, const int column);

// Установлен ли флаг
bool is_flag_cell_mins_field(mins_field_t field, const int row, const int column);

// Освобождаем ресурсы
void destroy_mins_field(mins_field_t field);
