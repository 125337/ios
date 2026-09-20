// FUN_015a4678 @ 015a4678

void FUN_015a4678(undefined8 param_1)

{
  size_t sVar1;
  undefined *puVar2;
  cfstringStruct *local_70;
  cfstringStruct *local_58;
  int local_44;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  uchar auStack_28 [16];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    local_58 = &cf___;
  }
  else {
    local_58 = local_30;
  }
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_UTF8String_026a2e68);
  local_70 = local_58;
  if (local_58 == (cfstringStruct *)0x0) {
    local_70 = (cfstringStruct *)0x2467240;
  }
  local_38 = local_70;
  sVar1 = _strlen((char *)local_70);
  _CC_MD5(local_70,(CC_LONG)sVar1,auStack_28);
  puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithCapacity__0269fc10,0x20);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  for (local_44 = 0; puVar2 = local_40, local_44 < 0x10; local_44 = local_44 + 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_appendFormat__0269d148,&cf__02x);
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

