// FUN_003e2b74 @ 003e2b74

void FUN_003e2b74(long param_1,ulong param_2,byte param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_88;
  ulong local_58;
  undefined *local_38;
  byte local_29;
  ulong local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_29 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  if ((param_1 == 0) || (param_2 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableData_026ce660;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_dataWithLength__026a3368,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_mutableBytes_026a3370);
    for (local_58 = 0; local_58 < local_28; local_58 = local_58 + 1) {
      puVar1[local_58] = *(byte *)(local_20 + local_58) ^ local_29 ^ (char)local_58 * '\x11';
    }
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithData_encoding__026a3378,local_38,4);
    local_88 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_88 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_88;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    _objc_storeStrong(&local_38,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

