s1 = set(['a','b','c'])
print(s1)

a = [1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 5]
print(a)
a = set([1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 5])
print(a)

s1 = set(['a', 'b', 'c', 'd', 'e'])
s2 = set(['c', 'd', 'e', 'f', 'g'])
print(s1)

a = set()
print(type(a))

a = {'a', 'b', 'c'}
a.update('d', 'e', 'f')
print(a)
