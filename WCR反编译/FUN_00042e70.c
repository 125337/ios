// FUN_00042e70 @ 00042e70

void FUN_00042e70(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    FUN_00042f28(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
  if ((*(byte *)(param_1 + 0x39) & 1) != 0) {
    dVar1 = _dispatch_time(0,200000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar1,puVar2,*(undefined8 *)(param_1 + 0x30));
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

