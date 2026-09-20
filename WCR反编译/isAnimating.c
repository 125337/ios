// isAnimating @ 01716610

/* Function Stack Size: 0x10 bytes */

bool ToastManager::isAnimating(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

