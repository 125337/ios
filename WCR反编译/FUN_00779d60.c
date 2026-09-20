// FUN_00779d60 @ 00779d60

void FUN_00779d60(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_00779ec8;
  }
  local_30 = 0;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf__rightMaskView);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_30;
  local_30 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  pcVar2 = &cf_ColorGradientView;
  _NSClassFromString();
  if (pcVar2 == (cfstringStruct *)0x0) {
LAB_00779ea8:
    local_18 = 0;
  }
  else {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar2);
    local_18 = local_30;
    if ((uVar3 & 1) == 0) goto LAB_00779ea8;
    (*(code *)PTR__objc_retain_02578638)();
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_00779ec8:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

