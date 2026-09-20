// FUN_010eaf88 @ 010eaf88

double FUN_010eaf88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  double dVar4;
  undefined8 uVar5;
  double local_60;
  double local_58;
  double local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  dVar4 = 0.0;
  local_20 = 0.0;
  pcVar1 = "UiUtil";
  _objc_getClass();
  pcVar2 = &cf_pageScopeWidthWithWarningFor_;
  _NSSelectorFromString();
  if ((pcVar1 != (char *)0x0) &&
     (pcVar3 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar3 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2,local_18);
    local_20 = dVar4;
  }
  uVar5 = 0x4020000000000000;
  if (local_20 < 8.0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bounds_026ca548);
    _CGRectGetWidth(local_20,uVar5,param_3,param_4);
  }
  local_58 = local_20 - 120.0;
  local_60 = 200.0;
  pcVar1 = "UIFont";
  _objc_getClass();
  pcVar2 = &cf_dynamicLength_;
  _NSSelectorFromString();
  if ((pcVar1 != (char *)0x0) &&
     (pcVar3 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar3 & 1) != 0)) {
    local_60 = 200.0;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2);
  }
  if (local_60 < local_58) {
    local_58 = local_60;
  }
  if (local_58 < 40.0) {
    local_58 = 40.0;
  }
  _objc_storeStrong(&local_18,0);
  return local_58;
}

