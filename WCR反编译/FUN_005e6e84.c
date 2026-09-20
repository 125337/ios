// FUN_005e6e84 @ 005e6e84

byte FUN_005e6e84(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  plVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(plVar1,param_1);
  FUN_005e1f98();
  if ((((ulong)plVar1 & 1) == 0) || (local_20 == 0)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    lVar2 = local_20;
    _objc_getAssociatedObject(local_20,DAT_026f4490);
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar2;
    if (lVar2 == 0) {
      local_11 = 0;
    }
    else {
      FUN_005e0368();
      local_11 = (byte)lVar2 & 1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

