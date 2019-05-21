
part2 = {
"ft_memalloc.c" 	: "void * ft_memalloc(size_t size);",
"ft_memdel.c" 		: "void ft_memdel(void **ap);",
"ft_strnew.c" 		: "char * ft_strnew(size_t size);",
"ft_strdel.c" 		: "void ft_strdel(char **as);",
"ft_strclr.c" 		: "void ft_strclr(char *s);",
"ft_striter.c" 		: "void ft_striter(char *s, void (*f)(char *));",
"ft_striteri.c" 	: "void ft_striteri(char *s, void (*f)(unsigned int, char *));",
"ft_strmap.c" 		: "char * ft_strmap(char const *s, char (*f)(char));",
"ft_strmapi.c" 		: "char * ft_strmapi(char const *s, char (*f)(unsigned int, char));",
"ft_strequ.c" 		: "int ft_strequ(char const *s1, char const *s2);",
"ft_strnequ.c" 		: "int ft_strnequ(char const *s1, char const *s2, size_t n);",
"ft_strsub.c" 		: "char * ft_strsub(char const *s, unsigned int start, size_t len);",
"ft_strjoin.c" 		: "char * ft_strjoin(char const *s1, char const *s2);",
"ft_strtrim.c" 		: "char * ft_strtrim(char const *s);",
"ft_strsplit.c"		: "char ** ft_strsplit(char const *s, char c);",
"ft_itoa.c" 		: "char * ft_itoa(int n);",
"ft_putchar.c" 		: "void ft_putchar(char c);",
"ft_putstr.c" 		: "void ft_putstr(char const *s);",
"ft_putendl.c" 		: "void ft_putendl(char const *s);",
"ft_putnbr.c" 		: "void ft_putnbr(int n);",
"ft_putchar_fd.c" 	: "void ft_putchar_fd(char c, int fd);",
"ft_putstr_fd.c" 	: "void ft_putstr_fd(char const *s, int fd);",
"ft_putendl_fd.c" 	: "void ft_putendl_fd(char const *s, int fd);",
"ft_putnbr_fd.c" 	: "void ft_putnbr_fd(int n, int fd);"
}

part3 = {
"ft_lstnew.c" 		: "t_list * ft_lstnew(void const *content, size_t content_size)",
"ft_lstdelone.c" 	: "void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));",
"ft_lstdel.c" 		: "void ft_lstdel(t_list **alst, void (*del)(void *, size_t));",
"ft_lstadd.c" 		: "void ft_lstadd(t_list **alst, t_list *new);",
"ft_lstiter.c" 		: "void ft_lstiter(t_list *lst, void (*f)(t_list *elem));",
"ft_lstmap.c" 		: "t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem));"
}

import os

for file_name, proto in part3.items():
	print(file_name, os.path.isfile("{0}".format(file_name)))
	if not os.path.isfile("{0}".format(file_name)):
		with open(file_name, 'w') as f:
			f.write(proto)

