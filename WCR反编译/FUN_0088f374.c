// FUN_0088f374 @ 0088f374

void FUN_0088f374(ulong param_1)

{
  undefined *puVar1;
  
  FUN_0088f3dc();
  puVar1 = PTR___dispatch_main_q_02578680;
  if ((param_1 & 1) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return;
}

