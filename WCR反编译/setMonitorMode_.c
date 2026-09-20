// setMonitorMode: @ 0090c78c

/* Function Stack Size: 0x18 bytes */

void LogFloatingBall::setMonitorMode_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + (long)_monitorMode) = param_3;
  return;
}

