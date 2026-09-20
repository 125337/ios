// FUN_005eac04 @ 005eac04

void FUN_005eac04(void)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  
  dVar1 = _dispatch_time(0,1000000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar1,puVar2,&PTR___NSConcreteGlobalBlock_0257e498);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

