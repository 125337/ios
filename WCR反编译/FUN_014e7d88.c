// FUN_014e7d88 @ 014e7d88

void FUN_014e7d88(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_c0;
  cfstringStruct *local_78 [4];
  cfstringStruct *local_58;
  uint local_4c;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = local_20;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "CContactMgr";
  local_30 = pcVar1;
  _objc_getClass();
  FUN_014e23b8();
  _objc_retainAutoreleasedReturnValue();
  local_40 = (cfstringStruct *)0x0;
  pcVar1 = local_30;
  local_38 = (cfstringStruct *)pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((pcVar1 != (cfstringStruct *)0x0) &&
     (pcVar1 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getContactByName__0269d178,local_30);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_40;
    local_40 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getContactDisplayName_0269d160);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar1;
    FUN_014dfa54();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    pcVar1 = local_48;
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    local_4c = (uint)(pcVar3 != (cfstringStruct *)0x0);
    _objc_storeStrong(&local_48,0);
    if (local_4c != 0) goto LAB_014e8128;
  }
  local_58 = (cfstringStruct *)0x0;
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_nsNickName);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_58;
  local_58 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar3 = local_58;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  local_78[0] = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  pcVar1 = local_78[0];
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    pcVar1 = local_28;
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_c0 = &cf_O;
      }
      else {
        local_c0 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_c0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
  }
  local_4c = 1;
  _objc_storeStrong(local_78);
  _objc_storeStrong(&local_58,0);
LAB_014e8128:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

