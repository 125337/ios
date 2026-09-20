// keepMethodOnRedirect @ 00f00b88

/* Function Stack Size: 0x10 bytes */

bool WCRCloudHTTPRun::keepMethodOnRedirect(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

