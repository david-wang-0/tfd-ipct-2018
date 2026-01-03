<<<<<<< Updated upstream
import pddl_types
=======
import pddl.pddl_types as pddl_types
>>>>>>> Stashed changes

class Function(object):
    def __init__(self, name, arguments):
        self.name = name
        self.arguments = arguments
    def parse(alist):
        name = alist[0]
        arguments = pddl_types.parse_typed_list(alist[1:], only_variables=True)
        return Function(name, arguments)
    def parse_typed(alist,type):
        function = Function.parse(alist)
        function.type = type
        return function
    parse = staticmethod(parse)
    parse_typed = staticmethod(parse_typed)
    def __str__(self):
        if self.type:
            return "%s(%s):%s" % (self.name, ", ".join(map(str, self.arguments)),self.type) 
        else:
            return "%s(%s)" % (self.name, ", ".join(map(str, self.arguments))) 

