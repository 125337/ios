// textFromAlertSender: @ 01bfc98c

/* Function Stack Size: 0x18 bytes */

ID WCRefineMomentsTailPickerViewController::textFromAlertSender_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  uint local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getTextFieldText_0269fb40);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getTextFieldText_0269fb40);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_38 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar2 = local_38;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_3c = (uint)bVar1;
    _objc_storeStrong(&local_38,0);
    if (local_3c != 0) goto LAB_01bfccf0;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar2 = local_48;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_3c = (uint)bVar1;
    _objc_storeStrong(&local_48,0);
    if (local_3c != 0) goto LAB_01bfccf0;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if (((ulong)pcVar2 & 1) == 0) {
LAB_01bfcca0:
      local_3c = 0;
    }
    else {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      pcVar2 = local_58;
      bVar1 = ((ulong)pcVar3 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar2;
      }
      local_3c = (uint)bVar1;
      _objc_storeStrong(&local_58,0);
      if (local_3c == 0) goto LAB_01bfcca0;
    }
    _objc_storeStrong(&local_50,0);
    if (local_3c != 0) goto LAB_01bfccf0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &::cf___;
  local_3c = 1;
LAB_01bfccf0:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

