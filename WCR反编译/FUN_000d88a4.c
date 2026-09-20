// FUN_000d88a4 @ 000d88a4

void FUN_000d88a4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_d0;
  ulong local_50;
  cfstringStruct *local_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  pcVar1 = &cf_m_bShowSearchByTime;
  _NSSelectorFromString();
  FUN_000d8bac(uVar2,pcVar1);
  if (uVar2 == 0) {
    local_18 = 0;
    local_30 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_000d8d08(local_20,"m_delegate");
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = &cf_getChatContact;
    local_38 = uVar2;
    _NSSelectorFromString();
    FUN_000d8e7c(uVar2,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = &cf_isChatroom;
    local_40 = uVar2;
    _NSSelectorFromString();
    local_48 = pcVar1;
    if (((local_40 == 0) ||
        (uVar2 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar1),
        (uVar2 & 1) == 0)) ||
       (uVar3 = local_40, FUN_000d8bac(local_40,local_48), uVar2 = local_40, uVar3 != 0)) {
      local_18 = 0;
      local_30 = 1;
    }
    else {
      pcVar1 = &cf_m_nsUsrName;
      _NSSelectorFromString();
      FUN_000d8fe0(uVar2,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      if ((uVar2 == 0) ||
         (uVar2 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasSuffix__0269d018,&cf__chatroom),
         (uVar2 & 1) != 0)) {
        local_d0 = 0;
      }
      else {
        local_d0 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_d0;
      local_30 = 1;
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

