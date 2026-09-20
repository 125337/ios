// FUN_017aed24 @ 017aed24

byte FUN_017aed24(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  byte local_bc;
  undefined *local_70;
  undefined *local_68;
  long local_60 [5];
  undefined1 *local_38;
  undefined4 local_30;
  undefined1 *local_20;
  byte local_11;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_callStackReturnAddresses_026aa6f8);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0);
  if (puVar1 < (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectAtIndexedSubscript__0269cc78,2);
    _objc_retainAutoreleasedReturnValue();
    local_60[1] = 0;
    local_60[0] = 0;
    local_60[3] = 0;
    local_60[2] = 0;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_unsignedLongLongValue_0269d6b8);
    _dladdr(puVar2,local_60);
    if (((int)puVar2 == 0) || (local_60[0] == 0)) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,
                 local_60[0]);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSBundle_026ce418;
      local_68 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      local_bc = 0;
      if (puVar1 != (undefined *)0x0) {
        puVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasPrefix__0269d320,local_70);
        local_bc = (byte)puVar1;
      }
      local_11 = local_bc & 1;
      local_30 = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

