// FUN_005e7be0 @ 005e7be0

void FUN_005e7be0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  (*DAT_028cb890)(param_1,param_2);
  _WCRForcedChatNicknameEnabled();
  if (((uVar1 & 1) != 0) &&
     (puVar2 = PTR_WCRefineNameplateHelper_026ce5f8,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_layoutForcedChatNicknameOnCell__026a5d80,
                param_1), ((ulong)puVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_applyNameplateIfNeeded_026a5d40);
  }
  return;
}

