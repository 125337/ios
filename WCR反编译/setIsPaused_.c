// setIsPaused: @ 0090ca74

/* Function Stack Size: 0x14 bytes */

void LogFloatingBall::setIsPaused_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_isPaused) = (byte)param_3 & 1;
  return;
}

