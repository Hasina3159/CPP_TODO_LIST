NAME        = todo

CC          = g++
CFLAGS      = -Wall -Wextra -Werror
RM          = rm -rf
MKDIR_P     = mkdir -p

SRCS_PATH   = ./srcs
OBJS_PATH   = ./objs

SRCS        = $(shell find $(SRCS_PATH) -name "*.cpp")
OBJS        = $(patsubst $(SRCS_PATH)/%.cpp,$(OBJS_PATH)/%.o,$(SRCS))

$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.cpp
	$(MKDIR_P) $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) -rf objs

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re