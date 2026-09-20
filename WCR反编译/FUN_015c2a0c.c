// FUN_015c2a0c @ 015c2a0c

void FUN_015c2a0c(double param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    local_30 = 0;
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getBgImageView_0269f0e0);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getBgImageView_0269f0e0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      local_30 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_30;
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    bVar1 = false;
    bVar2 = true;
    if ((uVar3 & 1) != 0) {
      local_38 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar2 = true;
      if (local_38 != 0) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768);
        bVar2 = true;
        if ((uVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_alpha_026ca4d8);
          bVar2 = param_1 < DAT_02323d38;
        }
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    uVar3 = local_30;
    if (bVar2) {
      local_18 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

