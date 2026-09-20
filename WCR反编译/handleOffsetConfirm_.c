// handleOffsetConfirm: @ 01822d3c

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarCornerBeautifyViewController::handleOffsetConfirm_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_90;
  undefined8 local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_18;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_18;
  local_30 = pcVar1;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  _objc_setAssociatedObject(local_18,"WCRefineOffsetConfirmBlock",0,3);
  _objc_setAssociatedObject(local_18,"WCRefineOffsetAlert",0,1);
  if (local_30 == (cfstringStruct *)0x0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &::cf_0;
    if ((local_38 != (cfstringStruct *)0x0) &&
       (pcVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getTextField_0269fb48);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar1;
      if ((pcVar1 != (cfstringStruct *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
         ((ulong)pcVar1 & 1) != 0)) {
        pcVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_90 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_90 = &::cf_0;
        }
        _objc_storeStrong(&local_48,local_90);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      _objc_storeStrong(&local_50,0);
    }
    pcVar1 = local_48;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_60 = 0;
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_58, FUN_01823080(pcVar1,local_58,&local_60), ((ulong)pcVar2 & 1) != 0)) {
      pcVar1 = local_30;
      FUN_0181d3e0(local_60);
      (*(code *)pcVar1->field2_0x10)();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
      local_3c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQpeW_);
      local_3c = 1;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

