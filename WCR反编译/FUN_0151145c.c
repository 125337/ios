// FUN_0151145c @ 0151145c

void FUN_0151145c(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  size_t sVar6;
  cfstringStruct *local_a8;
  cfstringStruct *local_60;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  char *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (char *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    pcVar3 = local_20;
    if (pcVar4 == (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar3;
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dataUsingEncoding__026a12e8,4);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableData_026ce660;
      local_38 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_dataWithData__026b00c8,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_28;
      local_40 = pcVar5;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_UTF8String_026a2e68);
      sVar6 = _strlen(pcVar4);
      pcVar3 = local_40;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_mutableBytes_026a3370);
      for (local_60 = (cfstringStruct *)0x0; pcVar5 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0), local_60 < pcVar5;
          local_60 = (cfstringStruct *)((long)&local_60->field0_0x0 + 1)) {
        uVar2 = 0;
        if (sVar6 != 0) {
          uVar2 = (ulong)local_60 / sVar6;
        }
        pbVar1 = (byte *)((long)&local_60->field0_0x0 + (long)&pcVar3->field0_0x0);
        *pbVar1 = *pbVar1 ^ pcVar4[(long)local_60 - uVar2 * sVar6];
      }
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_base64EncodedStringWithOptions__026a1df8,0);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_a8 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_a8;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_2c = 1;
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

