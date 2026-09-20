// isTextSelectionActive @ 0090caa4

/* Function Stack Size: 0x10 bytes */

bool LogFloatingBall::isTextSelectionActive(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_isTextSelectionActive) & 1;
}

