import unittest
from runner import run


def ft_atoi(arg1):
	return int(run(['./binaries/ft_atoi', arg1]))

def atoi(arg1):
	return int(run(['./binaries/atoi', arg1]))

class Test_ft_atoi(unittest.TestCase):

	def test_positive(self):
		self.assertEqual(ft_atoi('500'), 500)

	def test_negative(self):
		self.assertEqual(ft_atoi('-100'), -100)

	def test_sentence1(self):
		self.assertEqual(ft_atoi('abcd'), 0)

	def test_sentence2(self):
		self.assertEqual(ft_atoi('123abcd'), 123)

	def test_noinput(self):
		self.assertEqual(atoi(''), 0)


if __name__ == '__main__':
    unittest.main()