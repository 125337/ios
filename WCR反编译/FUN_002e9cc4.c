// FUN_002e9cc4 @ 002e9cc4

ulong FUN_002e9cc4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  byte local_31;
  int local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_20;
  if ((uVar2 & 1) == 0) {
    local_18 = 0;
    local_30 = 1;
  }
  else {
    local_31 = 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar3;
    while (local_40 != 0) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_class_0269cd60);
      FUN_002ea5e0();
      uVar2 = local_40;
      local_48 = uVar3;
      if (uVar3 != 0) {
        local_30 = 1;
        local_18 = uVar3;
        goto LAB_002e9ec0;
      }
      puVar1 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar2 & 1) != 0) {
        local_31 = 1;
      }
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_30 = 2;
LAB_002e9ec0:
    _objc_storeStrong(&local_40,0);
    uVar2 = local_20;
    if (local_30 == 2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar2;
      while (uVar2 = local_50, local_50 != 0) {
        puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar2 & 1) != 0) {
          uVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_class_0269cd60);
          FUN_002ea5e0();
          if (uVar2 != 0) goto LAB_002ea054;
        }
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_nextResponder_0269d0d8);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_50;
        local_50 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      if ((local_31 & 1) == 0) {
        local_18 = 0;
        uVar2 = local_18;
      }
      else {
        local_18 = 1;
        uVar2 = local_18;
      }
LAB_002ea054:
      local_18 = uVar2;
      local_30 = 1;
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

