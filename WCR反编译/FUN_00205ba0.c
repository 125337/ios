// FUN_00205ba0 @ 00205ba0

void FUN_00205ba0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_100;
  ulong local_60;
  ulong local_58 [3];
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_28 = 0;
    local_34 = 1;
  }
  else {
    uVar2 = local_30;
    FUN_001fb62c(local_30,"m_bgImageView");
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar2 & 1) == 0) {
      uVar4 = local_30;
      FUN_001fb62c(local_30,"_m_bgImageView");
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_40 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_40;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar4 = local_40;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_30;
      FUN_001fb62c(local_30,"m_richTextView");
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_58[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) == 0) {
        uVar4 = local_30;
        FUN_001fb62c(local_30,"_m_richTextView");
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_58[0];
        local_58[0] = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_58[0];
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) == 0) {
        local_100 = 0;
      }
      else {
        local_100 = local_58[0];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = false;
      if (local_100 != 0) {
        uVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = uVar2 != local_30;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      (*(code *)PTR__objc_release_02578630)(local_100);
      local_28 = local_60;
      if (bVar1) {
        uVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_28 = uVar2;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
      local_34 = 1;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(local_58,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar4;
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

