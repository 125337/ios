// FUN_005e7b2c @ 005e7b2c

void FUN_005e7b2c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  _WCRForcedChatNicknameEnabled();
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_prepareChatNicknameLayoutOnCell__026a5d78,
               param_1);
  }
  (*DAT_028cb888)(param_1,param_2);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_layoutForcedChatNicknameOnCell__026a5d80,
               param_1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_applyNameplateIfNeeded_026a5d40);
  return;
}

