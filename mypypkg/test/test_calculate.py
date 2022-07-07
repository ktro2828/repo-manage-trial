import unittest
from typing import List, Tuple

from mypypkg.calculate import add, div, mul, sub


class TestCalculate(unittest.TestCase):
    def test_add(self):
        """Test add(a, b)"""
        # patterns: (inputs, ans)
        patterns: List[Tuple[Tuple[float, float], float]] = [
            ((0.0, 1.0), 1.0),
            ((1.0, 2.0), 3.0),
        ]
        for (a, b), ans in patterns:
            with self.subTest('Test add() function.'):
                result = add(a, b)
                self.assertEqual(result, ans)

    def test_sub(self):
        """Test sub(a, b)"""
        # patterns: (inputs, ans)
        patterns: List[Tuple[Tuple[float, float], float]] = [
            ((0.0, 1.0), -1.0),
            ((1.0, 2.0), -1.0),
        ]
        for (a, b), ans in patterns:
            with self.subTest('Test sub() function.'):
                result = sub(a, b)
                self.assertEqual(result, ans)

    def test_mul(self):
        """Test mul(a, b)"""
        # patterns: (inputs, ans)
        patterns: List[Tuple[Tuple[float, float], float]] = [
            ((0.0, 1.0), 0.0),
            ((1.0, 2.0), 2.0),
        ]
        for (a, b), ans in patterns:
            with self.subTest('Test mul() function.'):
                result = mul(a, b)
                self.assertEqual(result, ans)

    def test_div(self):
        """Test div(a, b)"""
        # patterns: (inputs, ans)
        patterns: List[Tuple[Tuple[float, float], float]] = [
            ((0.0, 1.0), 0.0),
            ((1.0, 2.0), 0.5),
        ]
        for (a, b), ans in patterns:
            with self.subTest('Test div() function.'):
                result = div(a, b)
                self.assertEqual(result, ans)
