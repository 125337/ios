// FUN_016cef6c @ 016cef6c

void FUN_016cef6c(void)

{
  undefined *puVar1;
  dispatch_time_t dVar2;
  
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterPostNotification();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  dVar2 = _dispatch_time(0,120000000);
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar2,puVar1,&PTR___NSConcreteGlobalBlock_02588200);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

