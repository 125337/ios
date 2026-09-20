// pendingWebInputText @ 01e90db0

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoCardView::pendingWebInputText(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_80;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  int local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingWebUIAlert_026c73b0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_getTextFieldText_0269fb40);
    if ((param_1 & 1) == 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getTextField_0269fb48);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UITextField_026ce2a0;
        local_48 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITextField_026ce2a0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((ulong)pcVar1 & 1) == 0) {
          local_34 = 0;
        }
        else {
          pcVar1 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          local_80 = pcVar1;
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_80 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_80;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          local_34 = 1;
        }
        _objc_storeStrong(&local_48,0);
        if (local_34 != 0) goto LAB_01e91068;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &::cf___;
      local_34 = 1;
    }
    else {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getTextFieldText_0269fb40);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_40 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar1 & 1) == 0) {
        local_60 = &::cf___;
      }
      else {
        local_60 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_60;
      local_34 = 1;
      _objc_storeStrong(&local_40,0);
    }
  }
LAB_01e91068:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

