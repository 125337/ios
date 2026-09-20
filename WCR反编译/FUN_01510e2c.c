// FUN_01510e2c @ 01510e2c

void FUN_01510e2c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  size_t sVar6;
  cfstringStruct *local_b0;
  undefined *local_60;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  char *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (char *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    pcVar2 = local_20;
    if (pcVar3 == (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_2c = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_38 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
        local_2c = 1;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSMutableData_026ce660;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_dataWithData__026b00c8,puVar4);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_28;
        local_40 = puVar5;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_UTF8String_026a2e68);
        sVar6 = _strlen(pcVar3);
        puVar4 = local_40;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_mutableBytes_026a3370);
        for (local_60 = (undefined *)0x0; puVar5 = local_40,
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0), local_60 < puVar5
            ; local_60 = local_60 + 1) {
          uVar1 = 0;
          if (sVar6 != 0) {
            uVar1 = (ulong)local_60 / sVar6;
          }
          puVar4[(long)local_60] = puVar4[(long)local_60] ^ pcVar3[(long)local_60 - uVar1 * sVar6];
        }
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_b0 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_b0 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_b0;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        local_2c = 1;
        _objc_storeStrong(&local_40,0);
      }
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

