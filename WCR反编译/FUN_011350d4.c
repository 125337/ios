// FUN_011350d4 @ 011350d4

void FUN_011350d4(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_a0;
  bool local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  bool local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  char *local_40;
  cfstringStruct *local_38;
  uint local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
    goto LAB_0113556c;
  }
  pcVar3 = "MMServiceCenter";
  _objc_getClass();
  pcVar4 = "CContactMgr";
  local_38 = (cfstringStruct *)pcVar3;
  _objc_getClass();
  pcVar2 = local_28;
  local_40 = pcVar4;
  if ((local_38 == (cfstringStruct *)0x0) || (pcVar4 == (char *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_2c = 1;
    goto LAB_0113556c;
  }
  local_a0 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_59 = false;
  bVar1 = local_a0 == (cfstringStruct *)0x0;
  local_48 = local_a0;
  if (bVar1) {
    local_a0 = (cfstringStruct *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_getService__0269d170,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_a0;
  }
  local_59 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_a0;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_50 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     ((ulong)pcVar2 & 1) == 0)) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_2c = 1;
  }
  else {
    pcVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getContactByName__0269d178,local_28);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_28;
    local_68 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
      if (((ulong)pcVar5 & 1) != 0) {
        pcVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getContactDisplayName_0269d160);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar2;
        FUN_01130f58();
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        pcVar2 = local_70;
        bVar1 = pcVar5 != (cfstringStruct *)0x0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar2;
        }
        local_2c = (uint)bVar1;
        _objc_storeStrong(bVar1,&local_70,0);
        if (local_2c != 0) goto LAB_0113553c;
      }
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsNickName_0269d758);
      local_81 = ((ulong)pcVar2 & 1) == 0;
      if (local_81) {
        local_d0 = (cfstringStruct *)0x0;
      }
      else {
        local_d0 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_m_nsNickName_0269d758);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_d0;
      }
      local_81 = !local_81;
      FUN_01130f58();
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_d0;
      if (local_81) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      pcVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_d8 = local_28;
      }
      else {
        local_d8 = local_78;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_d8;
      local_2c = 1;
      _objc_storeStrong(&local_78,0);
    }
LAB_0113553c:
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
LAB_0113556c:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

