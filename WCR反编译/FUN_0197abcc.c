// FUN_0197abcc @ 0197abcc

void FUN_0197abcc(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(uVar2);
  bVar1 = *(long *)(param_1 + 0x40) == *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_sync_exit(!bVar1,uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (bVar1) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30));
  }
  return;
}

