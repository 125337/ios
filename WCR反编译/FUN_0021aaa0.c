// FUN_0021aaa0 @ 0021aaa0

void FUN_0021aaa0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  ulong local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = &cf_WCPuzzleImageView;
    _NSClassFromString();
    local_30 = pcVar1;
    if (((pcVar1 == (cfstringStruct *)0x0) ||
        (uVar2 = local_20,
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1),
        (uVar2 & 1) == 0)) || (uVar2 = local_20, FUN_001dca24(), (uVar2 & 1) == 0)) {
      uVar2 = local_20;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      local_24 = 1;
    }
    else {
      pcVar1 = &cf_WCContentItemViewTemplateGrid;
      _NSClassFromString();
      uVar2 = local_20;
      local_48 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar2;
      for (local_58 = 0; local_50 != 0 && local_58 < 0xc; local_58 = local_58 + 1) {
        if ((local_48 != (cfstringStruct *)0x0) &&
           (uVar2 = local_50,
           (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_48),
           local_18 = local_50, (uVar2 & 1) != 0)) {
          (*(code *)PTR__objc_retain_02578638)();
          goto LAB_0021acc8;
        }
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_50;
        local_50 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      local_18 = 0;
LAB_0021acc8:
      local_24 = 1;
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

