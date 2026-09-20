// FUN_0172a114 @ 0172a114

void FUN_0172a114(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    local_38 = (cfstringStruct *)pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
    if (((ulong)pcVar2 & 1) == 0) {
      local_80 = (cfstringStruct *)0x0;
    }
    else {
      local_80 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    local_90 = local_40;
    puVar5 = PTR_s_getService__0269d170;
    if (((ulong)local_80 & 1) == 0) {
      local_90 = (cfstringStruct *)0x0;
    }
    else {
      pcVar2 = "CContactMgr";
      _objc_getClass("CContactMgr");
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_performSelector_withObject__026ca7c0,puVar5,pcVar2);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_90;
    local_50 = (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    if (((ulong)local_90 & 1) != 0) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_performSelector_withObject__026ca7c0,
                 PTR_s_getContactByName__0269d178,local_28);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_50;
      local_50 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if (local_50 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_2c = 1;
    }
    else {
      local_58 = (cfstringStruct *)0x0;
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsAliasName_026a6a58);
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_performSelector__026ca7b8,PTR_s_m_nsAliasName_026a6a58);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_58;
        local_58 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      pcVar4 = local_58;
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((((ulong)pcVar4 & 1) == 0) ||
         (pcVar4 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
         pcVar4 == (cfstringStruct *)0x0)) {
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_valueForKey__0269d128,&cf_m_nsAliasName);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_58;
        local_58 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      pcVar4 = local_58;
      FUN_01725ed0();
      _objc_retainAutoreleasedReturnValue();
      local_2c = 1;
      local_18 = pcVar4;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

