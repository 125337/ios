// FUN_00163a20 @ 00163a20

void FUN_00163a20(undefined8 param_1)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *local_120;
  bool local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  int local_54;
  cfstringStruct *local_50 [3];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = "MainFrameCellData";
  _objc_getClass();
  local_38 = (cfstringStruct *)pcVar1;
  if (((cfstringStruct *)pcVar1 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_digestForMsg__0269f788),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_digestForMsg__0269f788,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar5 = (ulong)pcVar2 & 0xffffffff;
    if (((ulong)pcVar2 & 1) == 0) {
LAB_00163bb0:
      local_54 = 0;
    }
    else {
      pcVar4 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
      pcVar2 = local_50[0];
      uVar5 = 0;
      if (pcVar4 == (cfstringStruct *)0x0) goto LAB_00163bb0;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      uVar5 = 1;
      local_54 = 1;
    }
    _objc_storeStrong(uVar5,local_50,0);
    if (local_54 != 0) goto LAB_00163f08;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsContent_0269d0a0);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsContent_0269d0a0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_60 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)pcVar2 & 1) == 0) ||
       (pcVar4 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
       pcVar2 = local_60, pcVar4 == (cfstringStruct *)0x0)) {
      local_54 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if (pcVar2 < (cfstringStruct *)0x51) {
        local_120 = local_68;
      }
      else {
        local_70 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_substringToIndex__0269d6c0,0x50);
        _objc_retainAutoreleasedReturnValue();
        local_120 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_120;
      }
      local_81 = pcVar2 >= (cfstringStruct *)0x51;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_120;
      if (local_81) {
        (*(code *)PTR__objc_release_02578630)(local_80);
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      local_54 = 1;
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
    if (local_54 != 0) goto LAB_00163f08;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = &cf_mo_;
  local_54 = 1;
LAB_00163f08:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

