// FUN_0054b198 @ 0054b198

void FUN_0054b198(void)

{
  qword qVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct local_68;
  cfstringStruct *local_48;
  int local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  pcVar4 = local_30;
  if (pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar4;
    local_40 = 1;
    goto LAB_0054b718;
  }
  if (DAT_028cb3f0 == (cfstringStruct *)0x0) {
    pcVar3 = "SettingUtil";
    _objc_getClass();
    DAT_028cb3f0 = (cfstringStruct *)pcVar3;
  }
  pcVar4 = DAT_028cb3f0;
  pcVar2 = DAT_028cb3f0;
  _objc_retainAutoreleaseReturnValue();
  local_48 = pcVar4;
  if (pcVar4 != (cfstringStruct *)0x0) {
    pcVar4 = &cf_getCurUsrName;
    _NSSelectorFromString();
    pcVar2 = local_48;
    local_68.field3_0x18 = (long)pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar4);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,local_68.field3_0x18);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_68.field2_0x10 = (undefined *)pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      uVar6 = (ulong)pcVar4 & 0xffffffff;
      if (((ulong)pcVar4 & 1) == 0) {
LAB_0054b3dc:
        local_40 = 0;
      }
      else {
        pcVar4 = (cfstringStruct *)local_68.field2_0x10;
        (*(code *)PTR__objc_msgSend_02578628)(local_68.field2_0x10,PTR_s_length_0269cca0);
        puVar5 = local_68.field2_0x10;
        uVar6 = 0;
        if (pcVar4 == (cfstringStruct *)0x0) goto LAB_0054b3dc;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = (cfstringStruct *)puVar5;
        uVar6 = 1;
        local_40 = 1;
      }
      _objc_storeStrong(uVar6,&local_68.field2_0x10,0);
      if (local_40 != 0) goto LAB_0054b718;
    }
    pcVar4 = &cf_getLocalUsrName_;
    _NSSelectorFromString();
    pcVar2 = local_48;
    local_68.field1_0x8 = (qword)pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar4);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,local_68.field1_0x8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_68.field0_0x0 = (qword)pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      uVar6 = (ulong)pcVar4 & 0xffffffff;
      if (((ulong)pcVar4 & 1) == 0) {
LAB_0054b54c:
        local_40 = 0;
      }
      else {
        pcVar4 = (cfstringStruct *)local_68.field0_0x0;
        (*(code *)PTR__objc_msgSend_02578628)(local_68.field0_0x0,PTR_s_length_0269cca0);
        qVar1 = local_68.field0_0x0;
        uVar6 = 0;
        if (pcVar4 == (cfstringStruct *)0x0) goto LAB_0054b54c;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = (cfstringStruct *)qVar1;
        uVar6 = 1;
        local_40 = 1;
      }
      pcVar2 = &local_68;
      _objc_storeStrong(uVar6,pcVar2,0);
      if (local_40 != 0) goto LAB_0054b718;
    }
  }
  FUN_0054c4ec();
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getSelfContact_0269da60);
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_m_nsUsrName_0269d638);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (pcVar4 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
  }
  else {
    pcVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar4;
  }
  local_40 = 1;
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
LAB_0054b718:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

