// FUN_003f1f7c @ 003f1f7c

void FUN_003f1f7c(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_118;
  uint local_98;
  bool local_71;
  ulong local_70;
  ulong local_68;
  undefined4 local_60;
  byte local_59;
  ulong local_58;
  byte local_49;
  ulong local_48;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_49 = 0;
  local_59 = 0;
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_MMGrowTextView;
  _NSClassFromString();
  uVar3 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,pcVar2);
  local_98 = 1;
  if ((uVar3 & 1) == 0) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_98 = (uint)uVar3;
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((local_98 & 1) == 0) {
    uVar3 = local_30;
    _objc_getAssociatedObject(local_30,DAT_026e0318);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_68 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar1 = local_68;
    if ((uVar3 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      uVar3 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_71 = (uVar3 & 1) == 0;
      if (local_71) {
        local_118 = 0;
      }
      else {
        local_118 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_118;
      }
      local_71 = !local_71;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_118;
      if (local_71) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar1;
    }
    local_60 = 1;
    _objc_storeStrong(&local_68,0);
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = 1;
    local_28 = uVar1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

