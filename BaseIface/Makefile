include ../Make.defs

TARGET=$(BINDIR)/base_interface.so

SOURCES=base_interface.c

LDFLAGS+=-shared
INCDIR+=-I./include

OBJECTS=$(addprefix $(OBJDIR)/,$(patsubst %.c,%.o,$(SOURCES)))

$(TARGET): $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $^

$(OBJDIR)/%.o: %.c
	$(CC) -c $^ $(INCDIR) -o $@

all: $(TARGET)

clean:
	rm -f $(TARGET)
	rm -f $(OBJECTS)

.PHONY: all clean
