// finishOnCardPlayback @ 0107932c

/* Function Stack Size: 0x10 bytes */

bool WCRXHSWebExtractSession::finishOnCardPlayback(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

