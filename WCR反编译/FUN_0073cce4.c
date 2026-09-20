// FUN_0073cce4 @ 0073cce4

void FUN_0073cce4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  dVar3 = _dispatch_time(0,15000000000);
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar3,puVar1,&PTR___NSConcreteGlobalBlock_0257f608);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

