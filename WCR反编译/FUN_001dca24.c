// FUN_001dca24 @ 001dca24

byte FUN_001dca24(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  ulong local_48 [3];
  cfstringStruct *local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = &cf_WCContentItemViewTemplateGrid;
    _NSClassFromString();
    uVar2 = local_20;
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = uVar2;
    for (local_50 = 0; local_48[0] != 0 && local_50 < 0xc; local_50 = local_50 + 1) {
      if ((local_30 != (cfstringStruct *)0x0) &&
         (uVar2 = local_48[0],
         (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isKindOfClass__0269cd68,local_30),
         (uVar2 & 1) != 0)) {
        local_11 = 1;
        goto LAB_001dcbe0;
      }
      uVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_48[0];
      local_48[0] = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_11 = 0;
LAB_001dcbe0:
    local_24 = 1;
    _objc_storeStrong(local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

