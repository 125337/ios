// FUN_007f9358 @ 007f9358

void FUN_007f9358(void)

{
  undefined *puVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  puVar1 = puVar3;
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  dVar2 = _dispatch_time(0,150000000);
  _objc_retainAutoreleaseReturnValue(puVar3);
  puVar1 = puVar3;
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar2,puVar1,&PTR___NSConcreteGlobalBlock_02580420);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  dVar2 = _dispatch_time(0,450000000);
  _objc_retainAutoreleaseReturnValue(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar2,puVar3,&PTR___NSConcreteGlobalBlock_02580440);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  return;
}

