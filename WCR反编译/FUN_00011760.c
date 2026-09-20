// FUN_00011760 @ 00011760

void FUN_00011760(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_b0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  uint local_64;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = local_30;
  FUN_0001a198(local_30,PTR_s_referingMessageWrap_0269d110);
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_b0 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_b0 = local_30;
    FUN_0001a4fc(local_30,&cf__referingMessageWrap);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_b0;
  }
  local_51 = pcVar1 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_b0;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  pcVar2 = "CMessageWrap";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,pcVar2);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_38;
    FUN_00010978();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_60,
       (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_<refermsg),
       pcVar1 = local_60, ((ulong)pcVar3 & 1) != 0)) {
      pcVar1 = local_60;
      FUN_0001a680(local_60,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar1;
      FUN_0001a2e4();
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      pcVar1 = local_70;
      if (pcVar3 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
      }
      local_64 = (uint)(pcVar3 != (cfstringStruct *)0x0);
      _objc_storeStrong(&local_70,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
      local_64 = 1;
    }
    _objc_storeStrong(&local_60,0);
    if (local_64 != 0) goto LAB_00011d54;
  }
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsContent_0269d0a0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar1;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_78;
  puVar4 = PTR_s_rangeOfString_options__0269d118;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_rangeOfString_options__0269d118,&cf_<refermsg,1);
  local_88 = pcVar1;
  local_80 = puVar4;
  if (pcVar1 == (cfstringStruct *)0x7fffffffffffffff) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_64 = 1;
  }
  else {
    pcVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_substringFromIndex__0269d120,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar3;
    FUN_0001a680(pcVar3,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar3 = local_90;
      FUN_0001a680(local_90,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_98;
      local_98 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_98;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    local_64 = 1;
    local_28 = pcVar1;
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_78,0);
LAB_00011d54:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

