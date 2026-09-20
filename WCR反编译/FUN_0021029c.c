// FUN_0021029c @ 0021029c

void FUN_0021029c(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_80;
  ulong local_78;
  undefined1 local_69;
  ulong local_68;
  ulong local_58 [3];
  ulong local_40;
  uint local_34;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_28 = 0;
    local_34 = 1;
    goto LAB_002107f4;
  }
  local_40 = 0;
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_contentView_026ca5a8);
  if ((uVar3 & 1) != 0) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_contentView);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_58[0] = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar3 & 1) != 0) {
      _objc_storeStrong(&local_40,local_58[0]);
    }
    _objc_storeStrong(local_58,0);
  }
  local_69 = 0;
  bVar2 = false;
  uVar1 = local_40 != 0;
  if ((bool)uVar1) {
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 == local_30;
    local_69 = uVar1;
    local_68 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_69;
  }
  local_69 = uVar1;
  uVar3 = local_40;
  if (bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar3;
    local_34 = 1;
  }
  else {
    uVar5 = local_30;
    FUN_0020f600();
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar5;
    FUN_0020fa00(uVar5,local_30);
    uVar3 = local_78;
    if ((uVar5 & 1) == 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (uVar5 != 0) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_80 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_80;
        puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar5 = local_80;
        bVar2 = (uVar3 & 1) != 0;
        if (bVar2) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar5;
        }
        local_34 = (uint)bVar2;
        _objc_storeStrong(&local_80,0);
        if (local_34 != 0) goto LAB_002107a4;
      }
      uVar3 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
      local_34 = 1;
    }
LAB_002107a4:
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_40,0);
LAB_002107f4:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

