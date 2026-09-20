// FUN_00311390 @ 00311390

byte FUN_00311390(undefined8 param_1)

{
  ulong uVar1;
  ulong local_40;
  byte local_31;
  undefined8 local_30;
  long *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_18 = &DAT_028c9c90;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257bfb8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  uVar1 = local_40;
  FUN_00319cd8(local_40,&DAT_028c9be8,0x15);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_40;
    FUN_00319e30();
    if ((uVar1 & 1) == 0) {
      local_28 = &DAT_028c9cb0;
      local_30 = 0;
      _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0257bfd8);
      if (*local_28 + 1 != 0) {
        _dispatch_once(*local_28 + 1,local_28,local_30);
      }
      _objc_storeStrong(&local_30,0);
      uVar1 = local_40;
      FUN_00319cd8(local_40,&DAT_028c9c98,3);
      local_31 = (byte)uVar1 & 1;
    }
    else {
      local_31 = 1;
    }
  }
  else {
    local_31 = 1;
  }
  _objc_storeStrong(&local_40,0);
  return local_31 & 1;
}

