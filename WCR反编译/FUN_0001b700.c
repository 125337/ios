// FUN_0001b700 @ 0001b700

void FUN_0001b700(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_128;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  uint local_50;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  pcVar1 = local_30;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     ((ulong)pcVar1 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_50 = 1;
    goto LAB_0001bbb8;
  }
  pcVar2 = local_38;
  FUN_0001cd30(local_38,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  pcVar1 = local_58;
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = local_40;
    FUN_0001c6ac();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar2;
    FUN_0001cab0(pcVar2,&cf_m_nsRemark);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    pcVar1 = local_68;
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getContactDisplayName_0269d160);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        FUN_0001a2e4();
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        pcVar1 = local_70;
        if (pcVar2 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar1;
        }
        local_50 = (uint)(pcVar2 != (cfstringStruct *)0x0);
        _objc_storeStrong(&local_70,0);
        if (local_50 != 0) goto LAB_0001bb58;
      }
      pcVar1 = local_60;
      FUN_0001cab0(local_60,&cf_m_nsNickName);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_128 = &cf___;
      }
      else {
        local_128 = local_78;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_128;
      local_50 = 1;
      _objc_storeStrong(&local_78,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
      local_50 = 1;
    }
LAB_0001bb58:
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    local_50 = 1;
  }
  _objc_storeStrong(&local_58,0);
LAB_0001bbb8:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

