// FUN_0179bd94 @ 0179bd94

void FUN_0179bd94(void)

{
  dispatch_queue_t pdVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  
  pdVar1 = _dispatch_get_global_queue(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(pdVar1);
  dVar2 = _dispatch_time(0,18000000000);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar2,puVar3,&PTR___NSConcreteGlobalBlock_02588cc0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  return;
}

