// FUN_005e7658 @ 005e7658

byte FUN_005e7658(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  byte local_11;
  
  uVar1 = param_1;
  (*DAT_028cb860)(param_1,param_2);
  if ((uVar1 & 1) == 0) {
    _WCRForcedChatNicknameEnabled();
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      puVar2 = PTR_WCRefineNameplateHelper_026ce5f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineNameplateHelper_026ce5f8,
                 PTR_s_shouldForceShowChatNicknameForVi_026a5d68,param_1);
      local_11 = (byte)puVar2 & 1;
    }
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

