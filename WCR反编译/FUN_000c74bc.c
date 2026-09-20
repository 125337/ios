// FUN_000c74bc @ 000c74bc

void FUN_000c74bc(undefined8 param_1)

{
  ulong *puVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_a0;
  ulong local_58;
  cfstringStruct *local_50;
  ulong local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  ulong *local_28;
  ulong local_20;
  ulong local_18;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_000c79b0();
  local_28 = puVar1;
  if ((local_20 == 0) || (puVar1 == (ulong *)0x0)) {
    local_18 = 0;
    local_38 = 1;
  }
  else {
    pcVar2 = &cf_delegate;
    _NSSelectorFromString();
    uVar3 = local_20;
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar3 & 1) == 0) {
      local_18 = 0;
      local_38 = 1;
    }
    else {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_40);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = &cf_getViewController;
      local_48 = uVar3;
      _NSSelectorFromString();
      uVar3 = local_48;
      local_50 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((uVar3 & 1) == 0) {
        local_18 = 0;
        local_38 = 1;
      }
      else {
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,local_28);
        if ((uVar3 & 1) == 0) {
          local_a0 = 0;
        }
        else {
          local_a0 = local_58;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_a0;
        local_38 = 1;
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

