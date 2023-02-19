include Make.defs

COMPILE_INFO=compile_commands.json

all:
	mkdir -p $(OBJDIR)
	mkdir -p $(BINDIR)
	make -C BaseIface
	make -C Files

build_info:
	bear --append -- make

clean:
	rm -f $(COMPILE_INFO)
	rm -Rf $(OBJDIR)
	rm -Rf $(BINDIR)

.PHONY: all clean

