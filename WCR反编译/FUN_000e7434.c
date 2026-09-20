// FUN_000e7434 @ 000e7434

void FUN_000e7434(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong local_48;
  cfstringStruct *local_40;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  local_28 = 0;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_20;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBarButtonItem_026ce058,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) == 0) {
      if (local_20 != 0) {
        pcVar4 = &cf_view;
        _NSSelectorFromString();
        uVar2 = local_20;
        local_40 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar4);
        if ((uVar2 & 1) != 0) {
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,local_40);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_48 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((uVar2 & 1) != 0) {
            _objc_storeStrong(&local_28,local_48);
          }
          _objc_storeStrong(&local_48,0);
        }
      }
    }
    else {
      uVar3 = local_20;
      FUN_000e8290();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      local_28 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  else {
    _objc_storeStrong(&local_28,local_20);
  }
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_18 = 0;
  }
  else {
    uVar2 = local_28;
    FUN_000e8588();
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

