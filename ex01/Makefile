NAME		= phonebook
CXX			= c++
CXXFLAGS	= -std=c++98 -Wall -Wextra -Werror
LDFLAGS		= -lreadline -lncurses

SRCS		= P_book.cpp contact.cpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)
	
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) $(LDFLAGS)
	@echo "																													"
	@echo " ██████╗██████╗ ██████╗    ███╗   ███╗ ██████╗ ██████╗ ██╗   ██╗██╗     ███████╗         ██████╗  ██████╗ 		"
	@echo "██╔════╝██╔══██╗██╔══██╗   ████╗ ████║██╔═══██╗██╔══██╗██║   ██║██║     ██╔════╝        ██╔═████╗██╔═████╗		"
	@echo "██║     ██████╔╝██████╔╝   ██╔████╔██║██║   ██║██║  ██║██║   ██║██║     █████╗          ██║██╔██║██║██╔██║		"
	@echo "██║     ██╔═══╝ ██╔═══╝    ██║╚██╔╝██║██║   ██║██║  ██║██║   ██║██║     ██╔══╝          ████╔╝██║████╔╝██║		"
	@echo "╚██████╗██║     ██║███████╗██║ ╚═╝ ██║╚██████╔╝██████╔╝╚██████╔╝███████╗███████╗███████╗╚██████╔╝╚██████╔╝		"
	@echo " ╚═════╝╚═╝     ╚═╝╚══════╝╚═╝     ╚═╝ ╚═════╝ ╚═════╝  ╚═════╝ ╚══════╝╚══════╝╚══════╝ ╚═════╝  ╚═════╝ 		"
	@echo "                                                                                                          		"
	@echo "			12/02/2024 - ismherna@student.42.fr - 42 Madrid - Ismael Hernández	 "

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	@echo "Cleanup done!!"

re: fclean $(NAME)
