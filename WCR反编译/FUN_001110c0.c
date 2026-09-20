// FUN_001110c0 @ 001110c0

void FUN_001110c0(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  uint local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  FUN_00115d04();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_38 = 1;
  }
  else {
    pcVar2 = local_20;
    puVar4 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfString__0269d838,&cf__);
    local_48 = pcVar2;
    local_40 = puVar4;
    if (pcVar2 != (cfstringStruct *)0x7fffffffffffffff) {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_substringFromIndex__0269d120,puVar4 + (long)pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar3;
      FUN_00115d04();
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_count_0269cfe0);
      bVar1 = pcVar3 != (cfstringStruct *)0x0;
      if (bVar1) {
        pcVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
      local_38 = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_58);
      _objc_storeStrong(&local_50,0);
      if (local_38 != 0) goto LAB_00111338;
    }
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = 1;
    local_18 = pcVar2;
  }
LAB_00111338:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

