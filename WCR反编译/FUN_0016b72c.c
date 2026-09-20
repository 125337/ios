// FUN_0016b72c @ 0016b72c

void FUN_0016b72c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_hideSessionsWithUserNames__0269f840,*(undefined8 *)(param_1 + 0x20));
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowErrorWithText__0269f838,&cf_Yt1Y_
               ,*(undefined8 *)(param_1 + 0x28));
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,&cf_Yt_b,
               *(undefined8 *)(param_1 + 0x28));
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  }
  return;
}

