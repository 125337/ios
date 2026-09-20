// FUN_000ff960 @ 000ff960

void FUN_000ff960(long param_1)

{
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__026ca970,1)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__026ca860);
  _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),DAT_026df888,0,1);
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    FUN_000fb6cc(*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

