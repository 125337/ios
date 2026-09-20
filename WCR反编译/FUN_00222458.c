// FUN_00222458 @ 00222458

byte FUN_00222458(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    FUN_002225c0(local_20,&cf_WCRChatToolbarView,8);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_002225c0(local_20,&cf_InputToolViewBar,8);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        FUN_002225c0(local_20,&cf_SharePreConfirmSheetView,0xc);
        if ((uVar1 & 1) == 0) {
          local_11 = 0;
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

