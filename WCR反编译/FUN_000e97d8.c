// FUN_000e97d8 @ 000e97d8

void FUN_000e97d8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  cfstringStruct *local_38;
  uint local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_18 = 0;
    local_30 = 1;
    goto LAB_000e9b1c;
  }
  pcVar4 = &cf__UIButtonBarStackView;
  _NSClassFromString();
  uVar3 = local_20;
  local_38 = pcVar4;
  FUN_000e8b50(local_20,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_40 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
LAB_000e9a00:
    uVar5 = local_20;
    FUN_000e8588();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_50 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_50;
    if ((uVar5 & 1) == 0) {
      uVar3 = local_20;
      FUN_000e91c8();
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar3;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
    }
    local_30 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    uVar5 = local_40;
    FUN_000e8588();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_48 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_48;
    bVar1 = (uVar5 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
    }
    local_30 = (uint)bVar1;
    _objc_storeStrong(&local_48,0);
    if (local_30 == 0) goto LAB_000e9a00;
  }
  _objc_storeStrong(&local_40,0);
LAB_000e9b1c:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

