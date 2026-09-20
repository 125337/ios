// FUN_01689844 @ 01689844

void FUN_01689844(undefined8 param_1)

{
  void *pvVar1;
  void *data;
  cfstringStruct *pcVar2;
  int local_4c;
  cfstringStruct *local_48;
  undefined4 local_3c;
  void *local_38;
  cfstringStruct *local_30;
  uchar auStack_28 [16];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = (void *)0x0;
  _objc_storeStrong(&local_38,param_1);
  pvVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  data = local_38;
  if (pvVar1 == (void *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = &cf___;
    local_3c = 1;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(data,PTR_s_bytes_026a9630);
    pvVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    _CC_MD5(data,(CC_LONG)pvVar1,auStack_28);
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithCapacity__0269fc10,0x20);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    for (local_4c = 0; pcVar2 = local_48, local_4c < 0x10; local_4c = local_4c + 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_appendFormat__0269d148,&cf__02x);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = pcVar2;
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_30);
  return;
}

