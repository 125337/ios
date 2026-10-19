// repairedVideoLayer @0x2bb84

/* Function Stack Size: 0x10 bytes */

bool WCMVideoController::repairedVideoLayer(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_repairedVideoLayer) & 1;
}

