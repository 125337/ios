// FUN_01760460 @ 01760460

void FUN_01760460(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_78;
  int local_64;
  byte abStack_49 [33];
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_28 = 0;
  local_20 = 0;
  _arc4random_buf(&local_28,0x10);
  _memset(abStack_49,0,0x21);
  for (local_64 = 0; local_64 < 0x10; local_64 = local_64 + 1) {
    abStack_49[local_64 << 1] =
         *(byte *)(DAT_028c6228 + ((int)(uint)*(byte *)((long)&local_28 + (long)local_64) >> 4));
    abStack_49[local_64 * 2 + 1] =
         *(byte *)(DAT_028c6228 + (int)(*(byte *)((long)&local_28 + (long)local_64) & 0xf));
  }
  abStack_49[0x20] = 0;
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,abStack_49);
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_78 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

