// localUsrName @ 01001c14

/* Function Stack Size: 0x10 bytes */

ID WCRefineLinkMediaSender::localUsrName(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_d0;
  cfstringStruct *local_a0;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  bool local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  pcVar2 = &cf_SettingUtil;
  local_28 = param_2;
  local_20 = param_1;
  _NSClassFromString();
  local_38 = pcVar2;
  if (pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getLocalUsrName__0269ce98);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getLocalUsrName__0269ce98,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_30;
      local_30 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  pcVar2 = local_30;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    pcVar2 = local_30;
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_3c = 1;
      goto LAB_01002058;
    }
  }
  local_a0 = &cf_MMServiceCenter;
  _NSClassFromString();
  local_59 = false;
  bVar1 = local_a0 == (cfstringStruct *)0x0;
  local_48 = local_a0;
  if (bVar1) {
    local_a0 = (cfstringStruct *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_a0;
  }
  local_59 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_a0;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  local_68 = (cfstringStruct *)0x0;
  if (local_50 != (cfstringStruct *)0x0) {
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    pcVar2 = local_50;
    puVar4 = PTR_s_getService__0269d170;
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar3 = &cf_CContactMgr;
      _NSClassFromString(&cf_CContactMgr);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar4,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_68;
      local_68 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
  }
  local_70 = (cfstringStruct *)0x0;
  if (local_68 != (cfstringStruct *)0x0) {
    pcVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getSelfContact_0269da60);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_70;
      local_70 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  pcVar3 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_30;
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_30;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)pcVar2 & 1) == 0) {
    local_d0 = &::cf___;
  }
  else {
    local_d0 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_d0;
  local_3c = 1;
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
LAB_01002058:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

