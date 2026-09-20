// FUN_01971db4 @ 01971db4

void FUN_01971db4(undefined8 param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *local_78;
  undefined1 *local_58;
  undefined1 *local_38;
  undefined *local_20;
  undefined1 *local_18;
  
  local_20 = (undefined1 *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  puVar3 = local_20;
  if (param_2 < puVar1) {
    local_78 = (undefined1 *)((ulong)param_2 / 2 - 1);
    if (local_78 < (undefined1 *)((long)&MACH_HEADER.cputype + 3)) {
      local_78 = (undefined1 *)((long)&MACH_HEADER.cputype + 2);
    }
    local_38 = local_78;
    local_58 = param_2 + (-1 - (long)local_78);
    if (local_58 < (undefined1 *)0x4) {
      local_58 = (undefined1 *)0x4;
      local_38 = param_2 + -5;
    }
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    puVar3 = local_20;
    local_18 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (local_38 + (long)(local_58 + 1) < puVar1) {
      puVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_substringToIndex__0269d6c0,local_38);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_20;
      puVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_substringFromIndex__0269d120,(long)puVar2 - (long)local_58);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar3;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar3;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

