// FUN_00036280 @ 00036280

void FUN_00036280(void)

{
  undefined *puVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  
  DAT_028c7b30 = DAT_028c7b30 + 1;
  if (DAT_028c7b38 == *(undefined **)PTR__UIBackgroundTaskInvalid_02578100) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    DAT_028c7b38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  dVar3 = _dispatch_time(0,20000000000);
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar3,puVar1,&PTR___NSConcreteGlobalBlock_02579370);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

