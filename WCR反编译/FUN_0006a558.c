// FUN_0006a558 @ 0006a558

void FUN_0006a558(void)

{
  undefined *puVar1;
  
  DAT_028c7e78 = 0;
  if (DAT_028c7d88 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c7d88,PTR_s_removeAllObjects_0269d508);
  }
  _objc_storeStrong(&DAT_028c7d70,0);
  FUN_0006c094();
  _objc_getClass();
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

