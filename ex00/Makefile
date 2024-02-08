NAME 		= megaphone

CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

FILES		= megaphone

SRCS		= $(addsuffix .cpp, ($FILES))

OBJS_DIRS	= .build

OBJS		= 	$(patsubst $(SRCS)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

all:	$(NAME)

$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $@

$(OBJS_DIR)/%.o: %.cpp
		@mkdir - $(OBJS_DIR)
		$(CC) $(CFLAGS) -o $@ -c $<

clean:
		rm -rf $(OBJS_DIR)

flcean : clean
		rm -rf $(NAME)

re : clean all

.PHONY: all clean fclean re makelib
