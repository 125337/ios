// FUN_008c9550 @ 008c9550

void FUN_008c9550(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  DAT_028ce050 = 0;
  DAT_028ce1e8 = 0;
  DAT_028ce1e9 = 0;
  DAT_028ce049 = 0;
  DAT_028ce048 = 0;
  DAT_028ce04a = 0;
  FUN_008c9608();
  puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar2 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar1 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    FUN_022192a0();
  }
  return;
}

