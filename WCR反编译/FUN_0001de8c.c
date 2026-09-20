// FUN_0001de8c @ 0001de8c

void FUN_0001de8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_178;
  cfstringStruct *local_168;
  cfstringStruct *local_f8;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_title_0269d250);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  pcVar2 = local_40;
  if (pcVar3 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_50 = 1;
    goto LAB_0001e488;
  }
  pcVar4 = "MMServiceCenter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_69 = 0;
  local_58 = (cfstringStruct *)pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
  if (((ulong)pcVar4 & 1) == 0) {
LAB_0001e0dc:
    local_f8 = (cfstringStruct *)0x0;
  }
  else {
    pcVar4 = "CContactMgr";
    _objc_getClass();
    local_f8 = local_58;
    puVar1 = PTR_s_getService__0269d170;
    if (pcVar4 == (char *)0x0) goto LAB_0001e0dc;
    pcVar4 = "CContactMgr";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,puVar1,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_f8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_f8;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  local_78 = (cfstringStruct *)0x0;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getContactByName__0269d178,local_38);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_78;
      local_78 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  pcVar2 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_getContactDisplayName_0269d160);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_40;
    local_40 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar3 = local_78;
    FUN_0001a4fc(local_78,&cf_m_nsNickName);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_40;
    local_40 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_178 = &cf_S_MR_J;
    }
    else {
      local_178 = local_38;
    }
    local_168 = local_178;
  }
  else {
    local_168 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_168;
  local_50 = 1;
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
LAB_0001e488:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

