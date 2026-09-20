// FUN_0111d264 @ 0111d264

void FUN_0111d264(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_70;
  ulong local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  uchar local_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_1);
  if (local_48 == (cfstringStruct *)0x0) {
    local_70 = &cf___;
  }
  else {
    local_70 = local_48;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_dataUsingEncoding__026a12e8,4);
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
  local_50 = local_70;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_bytes_026a9630);
  pcVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  _CC_SHA256(local_70,(CC_LONG)pcVar1,local_40);
  puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithCapacity__0269fc10,0x40);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  for (local_60 = 0; puVar2 = local_58, local_60 < 0x20; local_60 = local_60 + 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_appendFormat__0269d148,&cf__02x);
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar2);
  return;
}

