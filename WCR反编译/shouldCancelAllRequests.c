// shouldCancelAllRequests @ 010f44b8

/* Function Stack Size: 0x10 bytes */

bool WCRefinePerspectiveVideoCompositor::shouldCancelAllRequests(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

