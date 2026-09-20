// setKeepMethodOnRedirect: @ 00f00ba8

/* Function Stack Size: 0x14 bytes */

void WCRCloudHTTPRun::setKeepMethodOnRedirect_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 8) = (byte)param_3 & 1;
  return;
}

