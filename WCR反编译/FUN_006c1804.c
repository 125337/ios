// FUN_006c1804 @ 006c1804

void FUN_006c1804(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 == 0) {
    local_18 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_20;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIGestureRecognizer_026ce450;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIGestureRecognizer_026ce450,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar3 & 1) == 0) {
        local_18 = 0;
      }
      else {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar2;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

