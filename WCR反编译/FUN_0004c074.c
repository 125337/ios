// FUN_0004c074 @ 0004c074

byte FUN_0004c074(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
    bVar1 = true;
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_applicationState_0269d6d8);
      bVar1 = puVar2 == (undefined *)0x0;
    }
    DAT_028c7b78 = bVar1;
    _objc_storeStrong(&local_18,0);
  }
  return DAT_028c7b78 & 1;
}

