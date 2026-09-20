// wcRefine_activeSheetTextView @ 01e6615c

/* Function Stack Size: 0x10 bytes */

ID WCRefineTextReplaceViewController::wcRefine_activeSheetTextView(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  ID local_50;
  ID local_48;
  undefined4 local_40;
  byte local_39;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  _objc_getAssociatedObject(param_1,"globalMappingTextView");
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UITextView_026ce1b8;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITextView_026ce1b8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_39 = 0;
  bVar1 = false;
  if ((param_1 & 1) != 0) {
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isFirstResponder_0269f488);
    bVar1 = true;
    if ((IVar4 & 1) == 0) {
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      bVar1 = IVar4 != 0;
      local_38 = IVar4;
    }
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  IVar4 = local_30;
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar4;
    local_40 = 1;
  }
  else {
    IVar4 = local_20;
    _objc_getAssociatedObject(local_20,"pluginPageTextView");
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UITextView_026ce1b8;
    local_48 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITextView_026ce1b8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    bVar1 = false;
    bVar2 = false;
    if ((IVar4 & 1) != 0) {
      IVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isFirstResponder_0269f488);
      bVar2 = true;
      bVar1 = (IVar4 & 1) == 0;
      if (bVar1) {
        local_50 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = local_50 != 0;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    IVar4 = local_48;
    if (bVar2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar4;
    }
    else {
      local_18 = 0;
    }
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

