// FUN_004c1b44 @ 004c1b44

void FUN_004c1b44(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_9c;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  uint local_58;
  byte local_51;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_30;
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBarButtonItem_026ce058,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_30;
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_customView_0269ea28);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_68 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_valueForKey__0269d128,&cf_view);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_70 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        bVar1 = (uVar3 & 1) != 0;
        if (bVar1) {
          uVar3 = local_70;
          FUN_004c1b44();
          _objc_retainAutoreleasedReturnValue();
          local_28 = uVar3;
        }
        local_58 = (uint)bVar1;
        _objc_storeStrong(&local_70,0);
      }
      else {
        uVar3 = local_68;
        FUN_004c1b44();
        _objc_retainAutoreleasedReturnValue();
        local_58 = 1;
        local_28 = uVar3;
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      if (local_58 != 0) goto LAB_004c2068;
    }
    local_28 = 0;
    local_58 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48[0] = uVar4;
    local_51 = 0;
    FUN_004c17f8();
    _objc_retainAutoreleasedReturnValue();
    local_9c = 1;
    if (uVar4 == 0) {
      uVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_9c = (uint)uVar3;
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar3 = local_48[0];
    if ((local_9c & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
    local_28 = uVar3;
    local_58 = 1;
    _objc_storeStrong(local_48,0);
  }
LAB_004c2068:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

