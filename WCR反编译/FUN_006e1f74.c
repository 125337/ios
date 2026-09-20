// FUN_006e1f74 @ 006e1f74

void FUN_006e1f74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_028cc308 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSTimer_026ce210;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402e000000000000,PTR__OBJC_CLASS___NSTimer_026ce210,
               PTR_s_timerWithTimeInterval_repeats_bl_026a5498,1,
               &PTR___NSConcreteGlobalBlock_0257ee88);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = DAT_028cc308;
    DAT_028cc308 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

