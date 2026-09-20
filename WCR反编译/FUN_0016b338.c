// FUN_0016b338 @ 0016b338

void FUN_0016b338(long param_1)

{
  ulong uVar1;
  ulong local_60;
  
  local_60 = *(ulong *)(param_1 + 0x38);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_deleteEntertainmentFakeGroupCont_0269f830,
             *(undefined8 *)(param_1 + 0x20));
  uVar1 = *(ulong *)(param_1 + 0x38);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_deleteSessionCountWithUserNames__0269f808,*(undefined8 *)(param_1 + 0x20));
  if (local_60 < uVar1) {
    local_60 = uVar1;
  }
  if (local_60 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowErrorWithText__0269f838,&cf_Yt1Y_
               ,*(undefined8 *)(param_1 + 0x28));
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,
               *(undefined8 *)(param_1 + 0x28));
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),local_60);
    }
  }
  return;
}

