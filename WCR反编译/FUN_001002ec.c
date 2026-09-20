// FUN_001002ec @ 001002ec

byte FUN_001002ec(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = false;
  }
  else {
    uVar1 = local_20;
    FUN_000f929c();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_00100f54(local_20,"m_uiSelectSearchMsgID");
      local_11 = (int)uVar1 != 0;
    }
    else {
      local_11 = true;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

