// FUN_01797348 @ 01797348

void FUN_01797348(long param_1)

{
  ulong uVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_0179742c(uVar1,*(undefined8 *)(param_1 + 0x38));
  if (((uVar1 & 1) == 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8),
     *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + 1,
     *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) < *(long *)(param_1 + 0x40))) {
    dVar2 = _dispatch_time(0,100000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar2,puVar3,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  return;
}

