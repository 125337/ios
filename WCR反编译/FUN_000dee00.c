// FUN_000dee00 @ 000dee00

byte FUN_000dee00(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  cfstringStruct *local_30;
  undefined4 local_24;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = false;
  }
  else {
    pcVar1 = &cf_IsFileMsg;
    _NSSelectorFromString();
    uVar2 = local_20;
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar1);
    uVar3 = local_20;
    if ((uVar2 & 1) == 0) {
      pcVar1 = &cf_m_uiMessageType;
      _NSSelectorFromString();
      FUN_000d8bac(uVar3,pcVar1);
      uVar2 = local_20;
      pcVar1 = &cf_m_uiAppMsgInnerType;
      local_48 = uVar3;
      _NSSelectorFromString();
      FUN_000d8bac(uVar2,pcVar1);
      uVar3 = local_20;
      local_50 = uVar2;
      if ((local_48 == 0x31) && (uVar2 == 0)) {
        pcVar1 = &cf_m_nsContent;
        _NSSelectorFromString();
        FUN_000d8fe0(uVar3,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar3;
        FUN_000da9a8();
        uVar2 = 0;
        if (uVar3 != 0x7fffffffffffffff) {
          uVar2 = uVar3;
          local_50 = uVar3;
        }
        _objc_storeStrong(uVar2,&local_58,0);
      }
      local_11 = false;
      if (local_48 == 0x31) {
        local_11 = local_50 == 6 || local_50 == 0x82;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30);
      local_11 = (bool)((byte)uVar3 & 1);
    }
  }
  local_24 = 1;
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

