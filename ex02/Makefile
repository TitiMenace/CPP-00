
NAME 		= accounts

CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98 -o3

INCLUDES	=  Account.hpp

FILES		= Account tests

SRCS		= $(addsuffix .cpp, $(FILES))

OBJS_DIRS	= .build

OBJS		= 	$(patsubst %.cpp, $(OBJS_DIRS)/%.o, $(SRCS))

all:	$(NAME)

$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $@

$(OBJS_DIRS)/%.o: %.cpp $(INCLUDES)
		@mkdir -p $(OBJS_DIRS)
		$(CC) $(CFLAGS) -o $@ -c $<

clean:
		rm -rf $(OBJS_DIRS)

fclean: clean
		rm -f $(NAME)

re : clean all

.PHONY: all clean fclean re makelib
