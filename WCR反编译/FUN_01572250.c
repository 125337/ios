// FUN_01572250 @ 01572250

void FUN_01572250(long param_1)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_WCRefine_applyFakeEngagement__026a57c8
              );
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_WCRefine_applyFakeEngagement__026a57c8,
                 *(undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_0157232c(uVar1,*(undefined8 *)(param_1 + 0x30));
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__O_d_O1Y_);
  }
  return;
}

