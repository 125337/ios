// FUN_006d18c4 @ 006d18c4

void FUN_006d18c4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *pcVar5;
  cfstringStruct *local_178;
  cfstringStruct *local_c0;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  char *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_58;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_51 = 0;
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_senderUserName_026a6a50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar3 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_c0 = &cf___;
  }
  else {
    local_c0 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_senderUserName_026a6a50);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_c0;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_58 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = &cf___;
    pcVar4 = "MMServiceCenter";
    _objc_getClass();
    local_68 = (cfstringStruct *)pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = "CContactMgr";
    local_70 = (cfstringStruct *)pcVar4;
    _objc_getClass();
    pcVar1 = local_70;
    local_78 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,pcVar5
              );
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar1;
    if (pcVar1 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getContactByName__0269d178,
                 local_38);
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar1;
      if (pcVar1 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsNickName_0269d758);
        if (((ulong)pcVar1 & 1) != 0) {
          pcVar3 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_performSelector__026ca7b8,PTR_s_m_nsNickName_0269d758);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_60;
          local_60 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        if (((local_60 == (cfstringStruct *)0x0) ||
            (pcVar1 = local_60,
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
            pcVar1 == (cfstringStruct *)0x0)) &&
           (pcVar1 = local_88,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_valueForKey__0269d128),
           ((ulong)pcVar1 & 1) != 0)) {
          pcVar3 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_valueForKey__0269d128,&cf_m_nsNickName);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_60;
          local_60 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
      }
      _objc_storeStrong(&local_88,0);
    }
    pcVar1 = local_60;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((ulong)pcVar1 & 1) == 0) ||
       (pcVar1 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
       pcVar1 == (cfstringStruct *)0x0)) {
      _objc_storeStrong(&local_60,local_38);
    }
    if (local_60 == (cfstringStruct *)0x0) {
      local_178 = &cf___;
    }
    else {
      local_178 = local_60;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_178;
    local_58 = 1;
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

