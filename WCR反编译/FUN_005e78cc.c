// FUN_005e78cc @ 005e78cc

void FUN_005e78cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = param_1;
  local_20 = param_6;
  local_18 = param_5;
  _WCRForcedChatNicknameEnabled();
  uVar1 = local_18;
  if ((param_5 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_frame_026ca640);
    local_50 = local_28;
    puVar2 = PTR_WCRefineNameplateHelper_026ce5f8;
    local_48 = param_2;
    local_40 = param_3;
    local_38 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_clampLockedSenderNicknameOnView__026a5d70,
               local_30,&local_50);
    if (((ulong)puVar2 & 1) != 0) {
      local_28 = local_50;
    }
    _objc_storeStrong(&local_30,0);
  }
  (*DAT_028cb878)(local_28,local_18,local_20);
  return;
}

