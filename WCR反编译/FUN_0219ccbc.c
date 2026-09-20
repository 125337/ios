// FUN_0219ccbc @ 0219ccbc

void FUN_0219ccbc(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  uint local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  FUN_01fd868c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
    goto LAB_0219cf30;
  }
  FUN_0219cf5c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
LAB_0219ce34:
    pcVar2 = local_28;
    puVar4 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rangeOfString__0269d838,&cf__Documents_);
    if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
      local_18 = (cfstringStruct *)0x0;
      local_2c = 1;
    }
    else {
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      if ((cfstringStruct *)(puVar4 + (long)&pcVar2->field0_0x0) < pcVar3) {
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_substringFromIndex__0269d120,
                   (cfstringStruct *)(puVar4 + (long)&pcVar2->field0_0x0));
        _objc_retainAutoreleasedReturnValue();
        local_2c = 1;
        local_18 = pcVar3;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
        local_2c = 1;
      }
    }
  }
  else {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_28;
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,pcVar2);
    pcVar2 = local_28;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    local_2c = (uint)bVar1;
    _objc_storeStrong(&local_40,0);
    if (local_2c == 0) goto LAB_0219ce34;
  }
  _objc_storeStrong(&local_38,0);
LAB_0219cf30:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

