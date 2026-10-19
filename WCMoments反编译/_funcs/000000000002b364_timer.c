// timer @0x2b364

/* Function Stack Size: 0x10 bytes */

ID WCMVideoController::timer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_timer);
}

