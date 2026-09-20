// setWcrSkipNextAppearReload: @ 01a74120

/* Function Stack Size: 0x14 bytes */

void WCRefineGeneralFunctionViewController::setWcrSkipNextAppearReload_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_wcrSkipNextAppearReload) = (byte)param_3 & 1;
  return;
}

