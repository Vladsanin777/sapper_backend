// структура строки
struct row;

// Указатель для пользователя на структуру ряда из ячеек
typedef struct row * row_t;

// при неудаче возвращаем ошибку(иначе 0), везде даже в инициализации
//
// Создаём строку, с переданным количеством ячеек
row_t init_row(const size_t count_cells, const size_t count_mines) {

// Ставим флаг на ячейку с переданным индексом
void up_flag_cell_row(row_t row, const size_t index_cell);

// Убираем флаг на ячейку с переданным индексом
void down_flag_cell_row(row_t row, const size_t index_cell);

// Является ли ячейка с индексом миной
bool is_min_cell_row(row_t row, const size_t index_cell);

// Стоит ли флаг на ячейке с переданным индексом
bool is_flag_cell_row(row_t row, const size_t index_cell);

// Возврашаем количество мин в окружающих ячейках
size_t get_count_mines_near_cell_row(row_t row, const size_t index_cell);

// Записываем в ячейку сколько мин в ней плюс окружающих клетках
void set_count_mines_near_cell_row(row_t top /* Верх */, \
        row_t central /* Центер */, row_t bottom /* Низ */, const size_t index_cell);

// Освобождаем ресурсы
void destroy(row_t row);
