// FUN_002b5df0 @ 002b5df0

void FUN_002b5df0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  _objc_getAssociatedObject(uVar1,&DAT_028c9610);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d00,*(undefined8 *)(param_1 + 0x28),PTR_s_setAlpha__026ca860);
  }
  return;
}

