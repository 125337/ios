// FUN_01f7534c @ 01f7534c

void FUN_01f7534c(long param_1)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if (*(long *)(param_1 + 0x20) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoicePackPickerViewController_026cea10,
               PTR_s_syncPageSheetChromeForNavigation_026c97a8,*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x20));
  }
  uVar1 = *(ulong *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_topViewController_0269e588);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_wcr_refreshPageSheetFloatBar_026c98c0);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_refreshPageSheetFloatBar_026c98c0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

