// FUN_008690ac @ 008690ac

uint FUN_008690ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((DAT_028cd867 & 1) == 0) {
    uVar1 = local_18;
    (*DAT_028cd548)(local_18,local_20,local_28);
    local_38 = (uint)uVar1;
  }
  else {
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return local_38 & 1;
}

