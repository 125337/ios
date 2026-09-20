// FUN_008c58c4 @ 008c58c4

void FUN_008c58c4(ulong param_1,byte param_2,undefined8 param_3)

{
  undefined8 local_28;
  byte local_19;
  ulong local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((local_19 & 1) == 0) {
    DAT_028ce050 = DAT_028ce050 & (local_18 ^ 0xffffffffffffffff);
  }
  else {
    DAT_028ce050 = DAT_028ce050 | local_18;
  }
  FUN_008c87ac(local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

