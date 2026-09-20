// isEventStream @ 009c8c80

/* Function Stack Size: 0x10 bytes */

bool WCRefineAIRequest::isEventStream(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

