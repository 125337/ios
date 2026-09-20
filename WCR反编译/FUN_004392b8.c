// FUN_004392b8 @ 004392b8

void FUN_004392b8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + 0x38) == DAT_028ca9a8) {
    puVar1 = &DAT_028ca898;
    _objc_loadWeakRetained(0);
    puVar3 = *(undefined **)(param_1 + 0x20);
    (*(code *)PTR__objc_release_02578630)();
    if (puVar1 == puVar3) {
      uVar2 = *(ulong *)(param_1 + 0x20);
      FUN_00439364(uVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      if ((uVar2 & 1) == 0) {
        FUN_004389c8();
      }
    }
  }
  return;
}

