class User:
    def __init__(self, new_name=None):
        self.id = 89
        self.name = "no name"
        self.__password = None
        self.is_new = True
        if new_name is not None:
            self.name = new_name


u = User("John")
print(u.name)
print(u.id)
print(u.is_new)
