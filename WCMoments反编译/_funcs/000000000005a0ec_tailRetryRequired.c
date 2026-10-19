// tailRetryRequired @0x5a0ec

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::tailRetryRequired(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_tailRetryRequired) & 1;
}

