// FUN_00f59860 @ 00f59860

void FUN_00f59860(void)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  dVar1 = _dispatch_time(0,2000000000);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  puVar2 = puVar3;
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar1,puVar2,&PTR___NSConcreteGlobalBlock_025832a8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  dVar1 = _dispatch_time(0,8000000000);
  _objc_retainAutoreleaseReturnValue(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar1,puVar3,&PTR___NSConcreteGlobalBlock_025832c8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  return;
}

