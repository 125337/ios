// FUN_01f7ec88 @ 01f7ec88

void FUN_01f7ec88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_WCRefineVoicePackPickerViewController_026cea10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_syncPageSheetChromeForNavigation_026c97a8,uVar2,
             *(undefined8 *)(param_1 + 0x28));
  (*(code *)PTR__objc_release_02578630)(uVar2);
  return;
}

