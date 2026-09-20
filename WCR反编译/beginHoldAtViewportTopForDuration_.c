// beginHoldAtViewportTopForDuration: @ 00fcd204

/* Function Stack Size: 0x18 bytes */

void WCRefineHomeHeaderUnstick::beginHoldAtViewportTopForDuration_
               (ID param_1,SEL param_2,double param_3)

{
  double dVar1;
  double local_58;
  
  dVar1 = param_3;
  _CFAbsoluteTimeGetCurrent();
  local_58 = param_3;
  if (param_3 < DAT_02323c88) {
    local_58 = DAT_02323c88;
  }
  if (DAT_028e3028 < dVar1 + local_58) {
    DAT_028e3028 = dVar1 + local_58;
  }
  return;
}

