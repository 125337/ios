// FUN_002f1e40 @ 002f1e40

byte FUN_002f1e40(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  _objc_getAssociatedObject(local_20,DAT_026dfda0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  if (local_30 == uVar1) {
    uVar1 = local_20;
    FUN_002f67a4(0);
    if ((uVar1 & 1) == 0) {
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  else {
    uVar1 = local_20;
    (*DAT_028c9a08)(local_20,local_28,local_30);
    local_11 = (byte)uVar1 & 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

