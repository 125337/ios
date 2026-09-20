// FUN_0015e304 @ 0015e304

void FUN_0015e304(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  uint local_5c;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (cfstringStruct *)0x0;
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_msgUserName_0269f770);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_msgUserName_0269f770);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_58[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar2 & 1) != 0) {
      _objc_storeStrong(&local_40,local_58[0]);
    }
    _objc_storeStrong(local_58,0);
  }
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_mo_;
    local_5c = 1;
    goto LAB_0015e820;
  }
  pcVar4 = "CContactMgr";
  _objc_getClass();
  FUN_0015f0b8();
  _objc_retainAutoreleasedReturnValue();
  local_70 = (cfstringStruct *)0x0;
  local_68 = (cfstringStruct *)pcVar4;
  if (((cfstringStruct *)pcVar4 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     ((ulong)pcVar4 & 1) != 0)) {
    pcVar5 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getContactByName__0269d178,local_40);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_70;
    local_70 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_70;
  FUN_001607b0();
  if (((ulong)pcVar2 & 1) == 0) {
LAB_0015e7b8:
    pcVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_5c = 1;
  }
  else {
    pcVar5 = local_70;
    FUN_00160a0c(local_70,PTR_s_m_nsRemark_0269d760);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
    pcVar2 = local_78;
    if (pcVar5 == (cfstringStruct *)0x0) {
      pcVar5 = local_70;
      FUN_00160a0c(local_70,PTR_s_getContactDisplayName_0269d160);
      _objc_retainAutoreleasedReturnValue();
      local_80 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
      pcVar2 = local_80;
      if (pcVar5 == (cfstringStruct *)0x0) {
        pcVar5 = local_70;
        FUN_00160a0c(local_70,PTR_s_m_nsNickName_0269d758);
        _objc_retainAutoreleasedReturnValue();
        local_88 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
        pcVar2 = local_88;
        bVar1 = pcVar5 != (cfstringStruct *)0x0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar2;
        }
        local_5c = (uint)bVar1;
        _objc_storeStrong(bVar1,&local_88,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
        local_5c = 1;
      }
      _objc_storeStrong(&local_80,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      local_5c = 1;
    }
    _objc_storeStrong(&local_78,0);
    if (local_5c == 0) goto LAB_0015e7b8;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
LAB_0015e820:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

