// FUN_019d8014 @ 019d8014

void FUN_019d8014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  uint local_fc;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_80;
  undefined4 local_74;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_5);
  pcVar1 = local_30;
  FUN_019e0bec();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_40;
  local_58 = pcVar1;
  FUN_019e0bec();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_48;
  local_60 = pcVar2;
  FUN_019e0bec();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_58;
  local_68 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_d8 = local_68;
    }
    else {
      local_d8 = local_60;
    }
    local_d0 = local_d8;
  }
  else {
    local_d0 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (local_d0 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__g_TTW_SO;
    local_74 = 1;
  }
  else {
    pcVar1 = local_38;
    FUN_019e0bec();
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar2 = local_60;
      FUN_019e0d10();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_80;
      local_80 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar2 = local_68;
      FUN_019e0d10();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_80;
      local_80 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar2 = local_50;
      FUN_019e1388();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_80;
      local_80 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (((ulong)pcVar2 & 1) != 0) {
      _objc_storeStrong(&local_80,&cf_Regular);
    }
    pcVar1 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    local_fc = 1;
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_containsString__0269d0b0);
      local_fc = (uint)pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_70;
    if ((local_fc & 1) == 0) {
      pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
    }
    local_74 = 1;
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

