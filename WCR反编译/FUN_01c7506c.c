// FUN_01c7506c @ 01c7506c

void FUN_01c7506c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  _objc_getAssociatedObject(uVar1,PTR_s_collectionView_cellForItemAtInde_026a3b40);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_setImage__026ca978,
               *(undefined8 *)(param_1 + 0x38));
  }
  return;
}

