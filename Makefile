TARGETS_LIB := cell/cell #row/row mins_field/mins_field

OBJS_LIB := cell/cell.o row/row.o mins_field/mins_field.o

TARGETS_TESTS := test_cell_1

OBJS_TESTS := test/cell/test1.o

TARGETS := $(TARGETS_LIB) $(TARGETS_TESTS)

OBJS := $(OBJS_LIB) $(OBJS_TESTS)

CFLAGS := -I./ -fsanitize=address

librery.a: $(OBJS_LIB)
	$(AR) rcs librery.a $(OBJS_LIB)

test/cell/test1: test/cell/test1.o
	$(CC) $(CFLAGS) $< librery.a -o $@

test_cell_1: librery.a test/cell/test1 

all: $(TARGETS)

clean: 
	rm -f $(OBJS) $(TARGETS)


.PHONY: clean all
