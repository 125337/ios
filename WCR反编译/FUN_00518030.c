// FUN_00518030 @ 00518030

byte FUN_00518030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int local_54;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(puVar1,param_3);
  FUN_0051890c();
  if (((ulong)puVar1 & 1) == 0) {
    if (DAT_028cb078 == (code *)0x0) {
      local_54 = 0;
    }
    else {
      uVar2 = local_20;
      (*DAT_028cb078)(local_20,local_28,local_30);
      local_54 = (int)uVar2;
    }
    local_11 = local_54 != 0;
  }
  else {
    local_11 = true;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

