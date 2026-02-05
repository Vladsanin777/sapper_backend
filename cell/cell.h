// структура ячейки
struct cell;

// Указатель для пользователя на структуру ряда из ячеек
typedef struct cell * cell;

// при неудаче возвращаем ошибку(иначе 0), везде даже в инициализации
//
// Создаём ячейку
cell init_cell(void);

// Ставим флаг
int up_flag_cell(cell cl);

// Убираем флаг
int down_flag_cell(cell cl);

// Возвращаем есть ли флаг
int is_flag_cell(cell cl);

// Устанавливаем мину
int up_min_cell(cell cl);

// Возвращаем есть ли на данной ячейке бомба
int is_min_cell(cell cl);

// Записываем сколько мин вокруг
int set_min_near_cell(cell cl);

// Получаем сколько мин вокруг
int get_min_near_cell(cell cl);

// Освобождаем ресурсы
int destroy_cell(cell cl);
