// FUN_017e0348 @ 017e0348

void FUN_017e0348(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50 [3];
  uint local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_34 = 1;
    goto LAB_017e078c;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_resignFirstResponder_0269ea18);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_resignFirstResponder_0269ea18);
    }
    _objc_storeStrong(local_50,0);
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getTextFieldText_0269fb40);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getTextFieldText_0269fb40);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_58 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar2 = local_58;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
    }
    local_34 = (uint)bVar1;
    _objc_storeStrong(&local_58,0);
    if (local_34 != 0) goto LAB_017e078c;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if (((ulong)pcVar2 & 1) == 0) {
LAB_017e0704:
      local_34 = 0;
    }
    else {
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_68 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      pcVar2 = local_68;
      bVar1 = ((ulong)pcVar3 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
      }
      local_34 = (uint)bVar1;
      _objc_storeStrong(&local_68,0);
      if (local_34 == 0) goto LAB_017e0704;
    }
    _objc_storeStrong(&local_60,0);
    if (local_34 != 0) goto LAB_017e078c;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = &cf___;
  local_34 = 1;
LAB_017e078c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

