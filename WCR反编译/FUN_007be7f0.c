// FUN_007be7f0 @ 007be7f0

byte FUN_007be7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  bool local_11;
  
  puVar1 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(puVar1,param_3);
  FUN_007bebf8();
  if (((ulong)puVar1 & 1) == 0) {
    if (DAT_028ccc88 == (code *)0x0) {
      local_38 = 0;
    }
    else {
      uVar2 = local_20;
      (*DAT_028ccc88)(local_20,local_28,local_30);
      local_38 = (int)uVar2;
    }
    local_11 = local_38 != 0;
  }
  else {
    local_11 = false;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

