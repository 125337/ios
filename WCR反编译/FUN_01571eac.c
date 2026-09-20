// FUN_01571eac @ 01571eac

void FUN_01571eac(long param_1)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_WCRefine_deleteMoment__026a5188);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_WCRefine_deleteMoment__026a5188,
                 *(undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_01571f88(uVar1,*(undefined8 *)(param_1 + 0x30));
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_gSWRd1Y_);
  }
  return;
}

