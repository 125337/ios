// FUN_006c3ae0 @ 006c3ae0

void FUN_006c3ae0(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  ulong uVar6;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  int local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = "SettingUtil";
  _objc_getClass();
  local_20 = (cfstringStruct *)pcVar1;
  if (((cfstringStruct *)pcVar1 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getLocalUsrName__0269ce98),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getLocalUsrName__0269ce98,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar6 = (ulong)pcVar2 & 0xffffffff;
    if (((ulong)pcVar2 & 1) == 0) {
LAB_006c3c28:
      local_38 = 0;
    }
    else {
      pcVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      pcVar2 = local_28;
      uVar6 = 0;
      if (pcVar4 == (cfstringStruct *)0x0) goto LAB_006c3c28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      uVar6 = 1;
      local_38 = 1;
    }
    _objc_storeStrong(uVar6,&local_28,0);
    if (local_38 != 0) goto LAB_006c3f08;
  }
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = "CContactMgr";
  local_40 = (cfstringStruct *)pcVar1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getService__0269d170,pcVar5);
  _objc_retainAutoreleasedReturnValue();
  local_48 = (cfstringStruct *)pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60);
  if (((ulong)pcVar1 & 1) == 0) {
LAB_006c3e9c:
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_38 = 1;
  }
  else {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    FUN_006ce484(pcVar2,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar6 = (ulong)pcVar2 & 0xffffffff;
    if (((ulong)pcVar2 & 1) == 0) {
LAB_006c3e58:
      local_38 = 0;
    }
    else {
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      pcVar2 = local_58;
      uVar6 = 0;
      if (pcVar4 == (cfstringStruct *)0x0) goto LAB_006c3e58;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      uVar6 = 1;
      local_38 = 1;
    }
    _objc_storeStrong(uVar6,&local_58);
    _objc_storeStrong(&local_50,0);
    if (local_38 == 0) goto LAB_006c3e9c;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
LAB_006c3f08:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

