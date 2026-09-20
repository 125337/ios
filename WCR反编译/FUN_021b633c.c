// FUN_021b633c @ 021b633c

void FUN_021b633c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_40 [24];
  ulong local_28;
  
  uVar1 = param_1 + 0x10;
  local_28 = uVar1;
  _swift_beginAccess(uVar1,auStack_40,0x20,0);
  _swift_unknownObjectWeakLoadStrong();
  _swift_endAccess(auStack_40);
  if (uVar1 != 0) {
    uVar2 = uVar1;
    FUN_021b61a8();
    if ((uVar2 & 1) == 0) {
      FUN_021b5b1c(0);
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
  }
  return;
}

