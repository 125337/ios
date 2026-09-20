// displayNameForContact:username: @ 010dca08

/* Function Stack Size: 0x20 bytes */

ID WCRefineNameplateHelper::displayNameForContact_username_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_d0;
  cfstringStruct *local_c0;
  cfstringStruct *local_88;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  if (local_30 == (cfstringStruct *)0x0) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contactForUsername__026ae878,local_38);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
  }
  if (local_30 == (cfstringStruct *)0x0) {
    if (local_38 == (cfstringStruct *)0x0) {
      local_88 = &::cf___;
    }
    else {
      local_88 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_88;
    local_3c = 1;
  }
  else {
    local_48 = (cfstringStruct *)0x0;
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getContactDisplayName_0269d160);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_50 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)pcVar1 & 1) != 0) {
        _objc_storeStrong(&local_48,local_50);
      }
      _objc_storeStrong(&local_50,0);
    }
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_nsRemark);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_48;
      local_48 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_nsNickName);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_48;
      local_48 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      if (local_38 == (cfstringStruct *)0x0) {
        local_d0 = &::cf___;
      }
      else {
        local_d0 = local_38;
      }
      local_c0 = local_d0;
    }
    else {
      local_c0 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_c0;
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

