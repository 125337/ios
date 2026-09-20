// FUN_015fb644 @ 015fb644

void FUN_015fb644(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *local_160;
  cfstringStruct *local_a0;
  cfstringStruct *local_78 [2];
  cfstringStruct *local_68 [4];
  cfstringStruct *local_48;
  int local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  if (local_38 == (cfstringStruct *)0x0) {
    if (local_30 == (cfstringStruct *)0x0) {
      local_a0 = &cf___;
    }
    else {
      local_a0 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_a0;
    local_3c = 1;
    goto LAB_015fbb84;
  }
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_m_nsRemark);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = (ulong)pcVar1 & 0xffffffff;
  if (((ulong)pcVar1 & 1) == 0) {
LAB_015fb7ec:
    local_3c = 0;
  }
  else {
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    pcVar1 = local_48;
    uVar4 = 0;
    if (pcVar3 == (cfstringStruct *)0x0) goto LAB_015fb7ec;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    uVar4 = 1;
    local_3c = 1;
  }
  _objc_storeStrong(uVar4,&local_48,0);
  if (local_3c != 0) goto LAB_015fbb84;
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_m_nsNickName);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_68[0] = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = (ulong)pcVar1 & 0xffffffff;
  if (((ulong)pcVar1 & 1) == 0) {
LAB_015fb950:
    local_3c = 0;
  }
  else {
    pcVar3 = local_68[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_length_0269cca0);
    pcVar1 = local_68[0];
    uVar4 = 0;
    if (pcVar3 == (cfstringStruct *)0x0) goto LAB_015fb950;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    uVar4 = 1;
    local_3c = 1;
  }
  _objc_storeStrong(uVar4,local_68,0);
  if (local_3c != 0) goto LAB_015fbb84;
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getContactDisplayName_0269d160);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_78[0] = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = (ulong)pcVar1 & 0xffffffff;
    if (((ulong)pcVar1 & 1) == 0) {
LAB_015fbad4:
      local_3c = 0;
    }
    else {
      pcVar3 = local_78[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_length_0269cca0);
      pcVar1 = local_78[0];
      uVar4 = 0;
      if (pcVar3 == (cfstringStruct *)0x0) goto LAB_015fbad4;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
      uVar4 = 1;
      local_3c = 1;
    }
    _objc_storeStrong(uVar4,local_78,0);
    if (local_3c != 0) goto LAB_015fbb84;
  }
  if (local_30 == (cfstringStruct *)0x0) {
    local_160 = &cf___;
  }
  else {
    local_160 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_160;
  local_3c = 1;
LAB_015fbb84:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

