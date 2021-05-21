NAME = libasm.a

SRCS =	ft_strlen.s \
		ft_strcpy.s \
		ft_strcmp.s \
		ft_write.s	\
		ft_read.s	\
		ft_strdup.s

OBJS = $(SRCS:.s=.o)

%.o	: %.s
	@nasm -f macho64 $< -o $@

$(NAME): $(OBJS) 
	@ar rcs $(NAME) $(OBJS)
	@echo "$(NAME) created"

all: $(NAME)

clean:
	@rm -f $(OBJS)
	@echo "objects clean"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed"

re: fclean all