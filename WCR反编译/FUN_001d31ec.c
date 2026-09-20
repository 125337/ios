// FUN_001d31ec @ 001d31ec

void FUN_001d31ec(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
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
    pcVar1 = &cf_WCSNSNodeVideoView;
    _NSClassFromString();
    pcVar2 = &cf_WCContentItemViewTemplateVideo;
    local_30 = pcVar1;
    _NSClassFromString();
    uVar3 = local_20;
    local_48 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar3;
    for (local_58 = 0; local_50 != 0 && local_58 < 10; local_58 = local_58 + 1) {
      if (((local_30 != (cfstringStruct *)0x0) &&
          (uVar3 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_30),
          (uVar3 & 1) != 0)) ||
         ((local_48 != (cfstringStruct *)0x0 &&
          (uVar3 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_48),
          (uVar3 & 1) != 0)))) {
        uVar3 = local_50;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
        goto LAB_001d33e4;
      }
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_50;
      local_50 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    local_18 = 0;
LAB_001d33e4:
    local_24 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

