// FUN_015718dc @ 015718dc

void FUN_015718dc(long param_1)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_WCRefine_forwardMoment__026a57d0);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_WCRefine_forwardMoment__026a57d0,
                 *(undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_015719b8(uVar1,*(undefined8 *)(param_1 + 0x30));
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_gSWlS1Y_);
  }
  return;
}

