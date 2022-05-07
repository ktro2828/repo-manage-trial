def add(a: float, b: float) -> float:
    """Return a result of a + b.

    Args:
        a (float)
        b (float)

    Returns:
        float: A result of a + b.
    """
    return a + b


def sub(a: float, b: float) -> float:
    """Return a result of a - b.

    Args:
        a (float)
        b (float)

    Returns:
        float: A result of a - b.
    """
    return a - b


def mul(a: float, b: float) -> float:
    """Return a result of a * b.

    Args:
       a (float)
       b (float)

    Returns:
       float: A result of a * b.
    """
    return a * b


def div(a: float, b: float) -> float:
    """Return a result of a / b.

    Args:
        a (float)
        b (float)

    Returns:
        float: A result of a / b.

    Raises:
        ValueError: b must not be 0.
    """
    if b == 0:
        raise ValueError('zero division is not allowed.')

    return a / b
