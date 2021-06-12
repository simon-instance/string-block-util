#
#	Compiler init
#
CC			=	gcc
CFLAGS	=	-Wall -Werror -Wextra

#
#	Project files
#
SRCS	=	main.c userinfo.c
# Converts SRCS' .c filetypes to object filetypes
OBJS	=	$(SRCS:.c=.o)
EXE		=	bin/sbu

#
#	Debugging settings
#
DBGDIR		= debug
DBGEXE		= $(DBGDIR)/$(EXE)
DBGOBJS 	= $(addprefix $(DBGDIR)/, $(OBJS))
DBGCFLAGS = -g -O0 -DDEBUG

#
# Release build settings
#
RELDIR 		= release
RELEXE 		= $(RELDIR)/$(EXE)
RELOBJS 	= $(addprefix $(RELDIR)/, $(OBJS))
RELCFLAGS = -O2 -DNDEBUG

# Default build
all: prep release

#
# Debug rules
#
debug: $(DBGEXE)

# Read 'Automatic variables' in the GNU make manual
$(DBGEXE): $(DBGOBJS)
	$(CC) $(CFLAGS) $(DBGCFLAGS) -o $(DBGEXE) -g $^

$(DBGDIR)/%.o: %.c
	$(CC) -c $(CFLAGS) $(DBGCFLAGS) -o $@ $<

#
# Release rules
#
release: $(RELEXE)

$(RELEXE): $(RELOBJS)
	$(CC) $(CFLAGS) $(RELCFLAGS) -o $(RELEXE) $^

$(RELDIR)/%.o: %.c
	$(CC) -c $(CFLAGS) $(RELCFLAGS) -o $@ $<

#
# Other rules
#
prep:
	@mkdir -p $(DBGDIR) $(RELDIR)

remake: clean all

clean:
	rm -f $(RELEXE) $(RELOBJS) $(DBGEXE) $(DBGOBJS)
