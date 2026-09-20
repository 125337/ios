// FUN_007b82a4 @ 007b82a4

void FUN_007b82a4(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (*(long *)(param_1 + 0x30) == DAT_028ccc70) {
    uVar2 = param_1;
    FUN_007ac894(0);
    bVar1 = true;
    if ((uVar2 & 1) != 0) {
      puVar4 = *(undefined **)(param_1 + 0x20);
      puVar3 = &DAT_028ccbe8;
      _objc_loadWeakRetained();
      bVar1 = puVar4 != puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if (!bVar1) {
      FUN_007b83a4(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    }
  }
  return;
}

