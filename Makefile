NAME              := CFramework
BUILD_DIRECTORY   := .build
OBJECTS_DIRECTORY := $(BUILD_DIRECTORY)/objects
PREFIX            := $(BUILD_DIRECTORY)/stage

CC      := clang
AR      := llvm-ar
C_FLAGS := -ansi -I$(PREFIX)/include

SOURCES              := $(shell find Sources/CFramework -type f -name '*.c')
OBJECTS              := $(patsubst Sources/%.c,$(OBJECTS_DIRECTORY)/%.o,$(SOURCES))
LIBRARY              := $(BUILD_DIRECTORY)/library/lib$(NAME).a
COMPILATION_DATABASE := $(BUILD_DIRECTORY)/compile_commands.json

.PHONY: all install clean

all: $(LIBRARY) $(COMPILATION_DATABASE)

$(LIBRARY): $(OBJECTS)
	@mkdir -p $(@D)
	$(AR) rcs $@ $^

$(OBJECTS_DIRECTORY)/CFramework/%.o: Sources/CFramework/%.c
	@mkdir -p $(@D)
	$(CC) $(C_FLAGS) -MMD -MP -MJ $@.json -c $< -o $@

$(COMPILATION_DATABASE): $(OBJECTS)
	{ echo '['; cat $(OBJECTS:=.json) | sed '$$ s/,$$//'; echo ']'; } > $@

install: $(LIBRARY)
	mkdir -p $(PREFIX)/lib $(PREFIX)/include
	cp -p $(LIBRARY) $(PREFIX)/lib
	cp -pR Sources/CFramework/Includes/. $(PREFIX)/include

clean:
	rm -rf $(OBJECTS_DIRECTORY) $(BUILD_DIRECTORY)/library $(COMPILATION_DATABASE) $(PREFIX)

-include $(OBJECTS:.o=.d)
