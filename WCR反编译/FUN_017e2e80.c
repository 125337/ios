// FUN_017e2e80 @ 017e2e80

void FUN_017e2e80(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_88;
  cfstringStruct *local_60;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  undefined1 local_31;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar3 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_31 = 0;
  bVar2 = true;
  uVar1 = lVar3 != 0;
  local_28 = lVar3;
  if ((bool)uVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 != *(long *)(param_1 + 0x20);
    local_31 = uVar1;
    local_30 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  if (bVar2) {
    local_38 = 1;
  }
  else {
    pcVar4 = *(cfstringStruct **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_setSecureTextEntry__026caa30);
    if (((ulong)pcVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSecureTextEntry__026caa30,0);
    }
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108);
    if (((ulong)pcVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_becomeFirstResponder_0269d108);
    }
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,
               PTR_s_sendAction_to_from_forEvent__026b54d0);
    if (((ulong)pcVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_sendAction_to_from_forEvent__026b54d0,PTR_s_paste__026b54d8,local_40
                 ,0);
    }
    puVar5 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    local_51 = false;
    bVar2 = ((ulong)pcVar4 & 1) == 0;
    if (bVar2) {
      local_88 = &cf___;
    }
    else {
      local_88 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_88;
    }
    local_51 = !bVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_88;
    if ((local_51 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    pcVar4 = local_48;
    puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___UIPasteboard_026ce040;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_60;
      local_60 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
    }
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (pcVar4 != (cfstringStruct *)0x0) {
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setText__026caa88,local_60);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_confirmInput_026b5478);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

