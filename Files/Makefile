include ../Make.defs

TARGET=$(BINDIR)/files

SOURCES=files.c

INCDIR+=-I.

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
