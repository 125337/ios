// FUN_000da7f8 @ 000da7f8

byte FUN_000da7f8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  long lVar2;
  long lVar3;
  long local_38;
  undefined4 local_30;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  pcVar1 = &cf_m_uiMessageType;
  _NSSelectorFromString();
  FUN_000d8bac(lVar2,pcVar1);
  lVar3 = local_20;
  if (lVar2 == 0x31) {
    pcVar1 = &cf_m_uiAppMsgInnerType;
    _NSSelectorFromString();
    FUN_000d8bac(lVar3,pcVar1);
    lVar2 = local_20;
    if (lVar3 == 0x13) {
      local_11 = 1;
      local_30 = 1;
    }
    else {
      pcVar1 = &cf_m_nsContent;
      _NSSelectorFromString();
      FUN_000d8fe0(lVar2,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      local_38 = lVar2;
      FUN_000da9a8();
      local_11 = lVar2 == 0x13;
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
    }
  }
  else {
    local_11 = 0;
    local_30 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

