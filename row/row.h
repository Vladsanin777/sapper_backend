// структура строки
struct row;

// Указатель для пользователя на структуру ряда из ячеек
typedef struct row * row;

// при неудаче возвращаем ошибку(иначе 0), везде даже в инициализации
//
// Создаём строку, с переданным количеством ячеек
row init_row(const int count_cells);

// Ставим флаг на ячейку с переданным индексом
int up_flag_cell_row(row rw, const int index_cell);

// Убираем флаг на ячейку с переданным индексом
int down_flag_cell_row(row rw, const int index_cell);

// Является ли ячейка с индексом миной
int is_min_cell_row(row rw, const int index_cell);

// Стоит ли флаг на ячейке с переданным индексом
int is_flag_cell_row(row rw, const int index_cell);

// Возврашаем количество мин в окружающих ячейках
int get_count_mines_near_cell_row(row rw, const int index_cell);

// Записываем в ячейку сколько мин в ней плюс окружающих клетках
int set_count_mines_near_cell_row(row top /* Верх */, \
        row central /* Центер */, row bottom /* Низ */, const int index_cell);

// Освобождаем ресурсы
int destroy(row rw);
