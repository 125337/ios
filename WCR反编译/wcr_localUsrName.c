// wcr_localUsrName @ 009db028

/* Function Stack Size: 0x10 bytes */

ID WCRefineAnonymousAtHelper::wcr_localUsrName(ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  uint local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar2 = "SettingUtil";
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_getClass();
  local_30 = (cfstringStruct *)pcVar2;
  if ((cfstringStruct *)pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getLocalUsrName__0269ce98,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_38 = (cfstringStruct *)pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)pcVar2 & 1) == 0) ||
       (pcVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       pcVar5 = local_38, pcVar4 == (cfstringStruct *)0x0)) {
      local_3c = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar5;
      local_3c = 1;
    }
    _objc_storeStrong(&local_38,0);
    if (local_3c != 0) goto LAB_009db2f8;
  }
  pcVar5 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_contactMgr_026ab088);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar5;
  if ((pcVar5 == (cfstringStruct *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60),
     ((ulong)pcVar5 & 1) == 0)) {
LAB_009db2bc:
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_3c = 1;
  }
  else {
    pcVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
    if (((ulong)pcVar5 & 1) == 0) {
LAB_009db298:
      local_3c = 0;
    }
    else {
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_m_nsUsrName_0269d638);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_58 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      pcVar5 = local_58;
      bVar1 = ((ulong)pcVar4 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar5;
      }
      local_3c = (uint)bVar1;
      _objc_storeStrong(&local_58,0);
      if (local_3c == 0) goto LAB_009db298;
    }
    _objc_storeStrong(&local_50,0);
    if (local_3c == 0) goto LAB_009db2bc;
  }
  _objc_storeStrong(&local_48,0);
LAB_009db2f8:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

