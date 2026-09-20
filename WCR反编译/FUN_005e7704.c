// FUN_005e7704 @ 005e7704

void FUN_005e7704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar1 = param_5;
  local_30 = param_1;
  uStack_28 = param_2;
  local_20 = param_3;
  uStack_18 = param_4;
  _WCRForcedChatNicknameEnabled();
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_clampLockedSenderNicknameOnView__026a5d70,
               param_5,&local_30);
  }
  (*DAT_028cb868)(local_30,uStack_28,local_20,uStack_18,param_5,param_6);
  return;
}

