// FUN_00808804 @ 00808804

void FUN_00808804(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  
  bVar1 = false;
  if ((DAT_028ccf99 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar2 != (undefined *)0x0;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if (bVar1) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_removeObserver__0269f128,
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
      _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28,0);
    }
    FUN_00808658();
  }
  return;
}

