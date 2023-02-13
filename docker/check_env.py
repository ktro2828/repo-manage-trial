#!/usr/bin/env python3

import torch

assert torch.cuda.is_available()
print(torch.cuda.is_available())
assert torch.cuda.device_count() > 0
print(torch.cuda.device_count())
print(torch.cuda.current_device())