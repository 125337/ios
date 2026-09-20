// FUN_000363d8 @ 000363d8

void FUN_000363d8(void)

{
  undefined *puVar1;
  
  if (DAT_028c7b38 != *(long *)PTR__UIBackgroundTaskInvalid_02578100) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    DAT_028c7b38 = *(long *)PTR__UIBackgroundTaskInvalid_02578100;
  }
  DAT_028c7b30 = 0;
  return;
}

