// FUN_0025828c @ 0025828c

void FUN_0025828c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *local_198;
  cfstringStruct *local_158;
  cfstringStruct *local_108;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50 [3];
  int local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_34 = 1;
    goto LAB_00258a0c;
  }
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getTextFieldText_0269fb40);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getTextFieldText_0269fb40);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50[0] = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = (ulong)pcVar1 & 0xffffffff;
    if (((ulong)pcVar1 & 1) == 0) {
LAB_00258428:
      local_34 = 0;
    }
    else {
      pcVar3 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
      pcVar1 = local_50[0];
      uVar4 = 0;
      if (pcVar3 == (cfstringStruct *)0x0) goto LAB_00258428;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
      uVar4 = 1;
      local_34 = 1;
    }
    _objc_storeStrong(uVar4,local_50,0);
    if (local_34 != 0) goto LAB_00258a0c;
  }
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getTextView_026a0f98);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getTextView_026a0f98);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if (((ulong)pcVar1 & 1) == 0) {
LAB_00258614:
      local_34 = 0;
    }
    else {
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_60 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar1 & 1) == 0) {
        local_34 = 0;
      }
      else {
        if (local_60 == (cfstringStruct *)0x0) {
          local_108 = &cf___;
        }
        else {
          local_108 = local_60;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_108;
        local_34 = 1;
      }
      _objc_storeStrong(&local_60,0);
      if (local_34 == 0) goto LAB_00258614;
    }
    _objc_storeStrong(&local_58,0);
    if (local_34 != 0) goto LAB_00258a0c;
  }
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if (((ulong)pcVar1 & 1) == 0) {
LAB_00258810:
      local_34 = 0;
    }
    else {
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_70 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar1 & 1) == 0) {
        local_34 = 0;
      }
      else {
        if (local_70 == (cfstringStruct *)0x0) {
          local_158 = &cf___;
        }
        else {
          local_158 = local_70;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_158;
        local_34 = 1;
      }
      _objc_storeStrong(&local_70,0);
      if (local_34 == 0) goto LAB_00258810;
    }
    _objc_storeStrong(&local_68,0);
    if (local_34 != 0) goto LAB_00258a0c;
  }
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getTextFieldText_0269fb40);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getTextFieldText_0269fb40);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_78 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) == 0) {
      local_34 = 0;
    }
    else {
      if (local_78 == (cfstringStruct *)0x0) {
        local_198 = &cf___;
      }
      else {
        local_198 = local_78;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_198;
      local_34 = 1;
    }
    _objc_storeStrong(&local_78,0);
    if (local_34 != 0) goto LAB_00258a0c;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = &cf___;
  local_34 = 1;
LAB_00258a0c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

