// FUN_008a04e0 @ 008a04e0

void FUN_008a04e0(void)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  
  dVar1 = _dispatch_time(0,15000000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar1,puVar2,&PTR___NSConcreteGlobalBlock_02580c00);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

