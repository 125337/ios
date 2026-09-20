// FUN_00078284 @ 00078284

byte FUN_00078284(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00077bac();
  local_11 = (uVar1 & 1) != 0;
  if ((bool)local_11) {
    DAT_028c7f48 = DAT_028c7f48 + 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

