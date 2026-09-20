// FUN_001021a8 @ 001021a8

void FUN_001021a8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint local_64;
  ulong local_50;
  undefined4 local_48;
  byte local_41;
  ulong local_40;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_41 = 0;
  local_64 = 1;
  local_28 = uVar1;
  if (uVar1 != 0) {
    _WCRefineChatPositionFeatureAllowed();
    local_64 = 1;
    if ((uVar1 & 1) != 0) {
      uVar1 = local_28;
      _objc_getAssociatedObject(local_28,DAT_026df8b8);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_64 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_28;
        FUN_001002ec();
        local_64 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_28;
          FUN_000f91dc();
          local_64 = (uint)uVar1;
        }
      }
    }
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_64 & 1) == 0) {
    uVar1 = local_28;
    FUN_00100134();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_000fffb4();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    (*(code *)PTR__objc_release_02578630)();
    FUN_000f915c();
    if ((local_50 == 0) || ((uVar1 & 0x100) == 0)) {
      local_48 = 1;
    }
    else {
      if ((uVar1 & 0x10000) == 0) {
        FUN_001006a8(local_28);
      }
      else {
        FUN_0010095c(local_28,local_50,0);
      }
      local_48 = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

