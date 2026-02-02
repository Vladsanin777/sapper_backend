TARGETS := cell/cell row/row mins_field/mins_field

OBJS := cell/cell.o row/row.o mins_field/mins_field.o

cell/cell: cell/cell.o

row/row: row/row.o

mins_field/mins_field: mins_field/mins_field.o

all: $(TARGETS)

clean: 
	rm -f $(OBJS) $(TARGETS)

.PHONY: clean all
