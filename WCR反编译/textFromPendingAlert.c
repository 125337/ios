// textFromPendingAlert @ 01949b44

/* Function Stack Size: 0x10 bytes */

ID WCRefineEmoticonGroupManageViewController::textFromPendingAlert(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_120;
  cfstringStruct *local_d0;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60 [3];
  int local_44;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingTextAlert_026b9930);
  _objc_retainAutoreleasedReturnValue();
  local_40 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setPendingTextAlert__026b9938,0);
  if (local_40 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf___;
    local_44 = 1;
    goto LAB_0194a018;
  }
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_60[0] = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_resignFirstResponder_0269ea18);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_resignFirstResponder_0269ea18);
    }
    _objc_storeStrong(local_60,0);
  }
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getTextFieldText_0269fb40);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getTextFieldText_0269fb40);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_68 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) == 0) {
      local_44 = 0;
    }
    else {
      if (local_68 == (cfstringStruct *)0x0) {
        local_d0 = &::cf___;
      }
      else {
        local_d0 = local_68;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_d0;
      local_44 = 1;
    }
    _objc_storeStrong(&local_68,0);
    if (local_44 != 0) goto LAB_0194a018;
  }
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if (((ulong)pcVar1 & 1) == 0) {
LAB_01949f90:
      local_44 = 0;
    }
    else {
      pcVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_78 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar1 & 1) == 0) {
        local_44 = 0;
      }
      else {
        if (local_78 == (cfstringStruct *)0x0) {
          local_120 = &::cf___;
        }
        else {
          local_120 = local_78;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_120;
        local_44 = 1;
      }
      _objc_storeStrong(&local_78,0);
      if (local_44 == 0) goto LAB_01949f90;
    }
    _objc_storeStrong(&local_70,0);
    if (local_44 != 0) goto LAB_0194a018;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = &::cf___;
  local_44 = 1;
LAB_0194a018:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

