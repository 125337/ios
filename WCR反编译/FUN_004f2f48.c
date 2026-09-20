// FUN_004f2f48 @ 004f2f48

void FUN_004f2f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct **local_1c0;
  cfstringStruct *local_100;
  cfstringStruct *local_c8;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  uint local_60;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  ulong local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  pcVar4 = local_48;
  FUN_004f3738();
  if (((ulong)pcVar4 & 1) == 0) {
    local_c8 = &cf___;
  }
  else {
    local_c8 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_c8;
  pcVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((pcVar4 == (cfstringStruct *)0x0) ||
     (pcVar4 = local_40, FUN_004f8c50(), ((ulong)pcVar4 & 1) != 0)) {
    pcVar4 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar4;
    local_60 = 1;
    goto LAB_004f3694;
  }
  uVar2 = local_38;
  FUN_004f8c50();
  if ((uVar2 & 1) == 0) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getContactByName__0269d178,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar3;
    FUN_004f2588();
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    pcVar4 = local_98;
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_1c0 = &local_40;
      }
      else {
        local_1c0 = &local_50;
      }
      pcVar4 = *local_1c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar4;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar4;
    }
    local_60 = 1;
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
    goto LAB_004f3694;
  }
  local_71 = 0;
  pcVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_100 = local_30;
    FUN_004f8dfc(0,local_30,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = local_100;
  }
  else {
    local_100 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_100;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  pcVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  pcVar4 = local_68;
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getContactByName__0269d178,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_m_nsRemark_0269d760);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_m_nsNickName_0269d758);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if (pcVar3 == (cfstringStruct *)0x0) {
        if ((local_80 != (cfstringStruct *)0x0) &&
           (pcVar4 = local_80,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_80,PTR_s_respondsToSelector__026ca818,
                      PTR_s_getContactDisplayName_0269d160), ((ulong)pcVar4 & 1) != 0)) {
          pcVar3 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_getContactDisplayName_0269d160);
          _objc_retainAutoreleasedReturnValue();
          local_88 = pcVar3;
          FUN_004f3738();
          pcVar4 = local_88;
          bVar1 = ((ulong)pcVar3 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar4;
          }
          local_60 = (uint)bVar1;
          _objc_storeStrong(&local_88,0);
          if (local_60 != 0) goto LAB_004f34d8;
        }
        pcVar4 = local_40;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar4;
        local_60 = 1;
      }
      else {
        pcVar4 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_m_nsNickName_0269d758);
        _objc_retainAutoreleasedReturnValue();
        local_60 = 1;
        local_28 = pcVar4;
      }
    }
    else {
      pcVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_m_nsRemark_0269d760);
      _objc_retainAutoreleasedReturnValue();
      local_60 = 1;
      local_28 = pcVar4;
    }
LAB_004f34d8:
    _objc_storeStrong(&local_80,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar4;
    local_60 = 1;
  }
  _objc_storeStrong(&local_68,0);
LAB_004f3694:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

