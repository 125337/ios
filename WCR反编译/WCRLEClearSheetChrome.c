// WCRLEClearSheetChrome @ 01b5f2f4

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::WCRLEClearSheetChrome(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID local_b0;
  ID local_48;
  long local_40;
  byte local_31;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_halfSheetAppearance_026bf7d8);
  if ((param_1 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_31 = 0;
    local_b0 = IVar3;
    if (IVar3 == 0) {
      local_b0 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_30 = local_b0;
    }
    local_31 = IVar3 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_b0;
    if ((local_31 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_40 = 0;
    while (local_40 < 8 && local_28 != 0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_48 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_containsString__0269d0b0,&cf_UIDropShadowView);
      if (((IVar2 & 1) != 0) ||
         (IVar2 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_UISheet),
         (IVar2 & 1) != 0)) {
        puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      _objc_storeStrong(&local_48,0);
      local_40 = local_40 + 1;
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_28;
      local_28 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

