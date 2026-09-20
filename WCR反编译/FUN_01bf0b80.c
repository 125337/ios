// FUN_01bf0b80 @ 01bf0b80

void FUN_01bf0b80(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf_pending);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf_failed);
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  _WCRMomentsScheduledToggleTask(*(undefined8 *)(param_1 + 0x28));
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

