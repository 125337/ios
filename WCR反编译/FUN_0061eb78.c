// FUN_0061eb78 @ 0061eb78

void FUN_0061eb78(void)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  
  dVar1 = _dispatch_time(0,1000000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar1,puVar2,&PTR___NSConcreteGlobalBlock_0257e588);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

