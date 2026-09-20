// FUN_0064041c @ 0064041c

void FUN_0064041c(void)

{
  u_int32_t uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_18;
  
  FUN_006404f0();
  if ((DAT_028cb9b8 == (cfstringStruct *)0x0) ||
     (pcVar2 = DAT_028cb9b8,
     (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb9b8,PTR_s_count_0269cfe0),
     pcVar2 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__eck_WeQ_N_;
  }
  else {
    pcVar2 = DAT_028cb9b8;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb9b8,PTR_s_count_0269cfe0);
    uVar1 = _arc4random_uniform((u_int32_t)pcVar2);
    local_18 = DAT_028cb9b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cb9b8,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

