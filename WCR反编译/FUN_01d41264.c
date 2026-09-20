// FUN_01d41264 @ 01d41264

void FUN_01d41264(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_cfgFilePath_026c4678);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_loadAndDisplayCFGFromFile__026c4680);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

