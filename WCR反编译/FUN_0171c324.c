// FUN_0171c324 @ 0171c324

void FUN_0171c324(long param_1)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  _objc_getAssociatedObject(uVar1,&DAT_028e3f78);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if ((uVar1 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_isEqualToNumber__026a7b80,*(undefined8 *)(param_1 + 0x28)),
     (uVar1 & 1) != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_isRedeemContextValidWithNavContr_026b39e0,*(undefined8 *)(param_1 + 0x30)
               ,*(undefined8 *)(param_1 + 0x38));
    if ((uVar1 & 1) == 0) {
      _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),&DAT_028e3f78,0,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_showToast__026b3a18,&cf__y);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_processSequentialRedeemCodes_ind_026b39d8,
                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),
                 *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

