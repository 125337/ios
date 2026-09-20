// FUN_01511898 @ 01511898

void FUN_01511898(undefined8 param_1)

{
  void *pvVar1;
  void *pvVar2;
  cfstringStruct *pcVar3;
  ulong local_70;
  cfstringStruct *local_68;
  void *local_60;
  undefined4 local_54;
  void *local_50;
  cfstringStruct *local_48;
  uchar local_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (void *)0x0;
  _objc_storeStrong(&local_50,param_1);
  pvVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pvVar1 == (void *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf___;
    local_54 = 1;
  }
  else {
    pvVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_dataUsingEncoding__026a12e8,4);
    _objc_retainAutoreleasedReturnValue();
    local_40[8] = '\0';
    local_40[9] = '\0';
    local_40[10] = '\0';
    local_40[0xb] = '\0';
    local_40[0xc] = '\0';
    local_40[0xd] = '\0';
    local_40[0xe] = '\0';
    local_40[0xf] = '\0';
    local_40[0] = '\0';
    local_40[1] = '\0';
    local_40[2] = '\0';
    local_40[3] = '\0';
    local_40[4] = '\0';
    local_40[5] = '\0';
    local_40[6] = '\0';
    local_40[7] = '\0';
    local_40[0x18] = '\0';
    local_40[0x19] = '\0';
    local_40[0x1a] = '\0';
    local_40[0x1b] = '\0';
    local_40[0x1c] = '\0';
    local_40[0x1d] = '\0';
    local_40[0x1e] = '\0';
    local_40[0x1f] = '\0';
    local_40[0x10] = '\0';
    local_40[0x11] = '\0';
    local_40[0x12] = '\0';
    local_40[0x13] = '\0';
    local_40[0x14] = '\0';
    local_40[0x15] = '\0';
    local_40[0x16] = '\0';
    local_40[0x17] = '\0';
    local_60 = pvVar1;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(pvVar1,PTR_s_bytes_026a9630);
    pvVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    _CC_SHA256(pvVar1,(CC_LONG)pvVar2,local_40);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithCapacity__0269fc10,0x40);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar3;
    for (local_70 = 0; pcVar3 = local_68, local_70 < 0x20; local_70 = local_70 + 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_appendFormat__0269d148,&cf__02x);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = pcVar3;
    local_54 = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_48);
  return;
}

