// FUN_000e8588 @ 000e8588

void FUN_000e8588(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  cfstringStruct *local_48;
  uint local_40;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_28 = 0;
    local_40 = 1;
    goto LAB_000e8a7c;
  }
  pcVar4 = &cf__UITAMICAdaptorView;
  _NSClassFromString();
  uVar3 = local_30;
  local_48 = pcVar4;
  FUN_000e8ab4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_50 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
LAB_000e8888:
    uVar5 = local_30;
    FUN_000e95c8(local_30,local_48);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_68 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_68;
    if ((uVar5 & 1) == 0) {
      uVar6 = local_30;
      FUN_000e8b50(local_30,local_48);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_70 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar5 = local_30;
      uVar3 = local_70;
      if ((uVar6 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar5;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar3;
      }
      local_40 = 1;
      _objc_storeStrong(&local_70,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
      local_40 = 1;
    }
    _objc_storeStrong(&local_68,0);
  }
  else {
    uVar5 = local_50;
    FUN_000e8b50(local_50,local_48);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_58 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_58;
    if ((uVar5 & 1) == 0) {
      uVar5 = local_50;
      FUN_000e91c8();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_60 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar3 = local_60;
      bVar1 = (uVar5 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar3;
      }
      local_40 = (uint)bVar1;
      _objc_storeStrong(&local_60,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
      local_40 = 1;
    }
    _objc_storeStrong(&local_58,0);
    if (local_40 == 0) goto LAB_000e8888;
  }
  _objc_storeStrong(&local_50,0);
LAB_000e8a7c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

