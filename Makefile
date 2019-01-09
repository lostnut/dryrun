# Compilation
# compiler (if defined use 'cc' else use clang)
CC ?= gcc

# compilation flags
CFLAGS = -pedantic# warn on language extensions
CFLAGS += -std=c11# C11 standard mode
CFLAGS += -Werror# turn warnings into errors.
CFLAGS += -Wall#turn on all warnings
CFLAGS += -Wextra# turn on extra warnings
# utilities flags
CFLAGS += -MMD# write dependency file
# optimization flags
OPT_FLAGS = -O2# optimization level
#includes
INC = -Iinc

#Utilities
MKDIR = /bin/mkdir -p
RM = /bin/rm -f

# Project structure
BUILD_DIR = ./build# build directory
OBJECTS_DIR = $(BUILD_DIR)/objects# objects directory

# Files
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:%.c=$(OBJECTS_DIR)/%.o)
DEPS = $(OBJS:%.o=%.d)

#Rules
all: CFLAGS += $(OPT_FLAGS)
all: $(OBJS)

-include $(DEPS)

$(OBJECTS_DIR)/%.o: %.c
	$(MKDIR) $(@D)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

.PHONY : clean
clean:
	$(RM) -r $(BUILD_DIR)

