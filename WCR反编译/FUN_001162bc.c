// FUN_001162bc @ 001162bc

void FUN_001162bc(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  uint local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_30 = 1;
  }
  else {
    pcVar2 = local_20;
    puVar4 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfString__0269d838,&cf__);
    local_40 = pcVar2;
    local_38 = puVar4;
    if ((pcVar2 != (cfstringStruct *)0x7fffffffffffffff) && (pcVar2 != (cfstringStruct *)0x0)) {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_substringToIndex__0269d6c0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar3;
      FUN_00115d04();
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_count_0269cfe0);
      bVar1 = pcVar3 != (cfstringStruct *)0x0;
      if (bVar1) {
        pcVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
      local_30 = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_50);
      _objc_storeStrong(&local_48,0);
      if (local_30 != 0) goto LAB_001165a8;
    }
    pcVar2 = local_20;
    FUN_00115d04(0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_containsObject__0269cbb8,&cf_from);
    if (((ulong)pcVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_from;
    }
    local_30 = 1;
    _objc_storeStrong(&local_58,0);
  }
LAB_001165a8:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

