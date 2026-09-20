// FUN_0089fd50 @ 0089fd50

void FUN_0089fd50(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  
  dVar1 = _dispatch_time(0,1500000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar1,puVar2,*(undefined8 *)(param_1 + 0x20));
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

