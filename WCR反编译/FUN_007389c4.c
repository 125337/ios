// FUN_007389c4 @ 007389c4

void FUN_007389c4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong local_38;
  byte local_2a;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  local_14 = (undefined4)param_1;
  local_28 = param_3;
  local_20 = param_2;
  _WCRSideloadShareFixIsNotificationServiceProcess();
  local_29 = (byte)param_1;
  _WCRSideloadShareFixShouldInstall();
  local_2a = (byte)param_1;
  if ((local_29 & 1) != 0) {
    FUN_00738aec();
  }
  if ((local_2a & 1) == 0) {
    if ((local_29 & 1) != 0) {
      FUN_00738b54();
    }
  }
  else {
    _WCRSideloadShareFixIsGroupRemapExtensionProcess();
    if ((param_1 & 1) == 0) {
      _WCRSideloadShareFixResolvedGroupID();
      _objc_retainAutoreleasedReturnValue();
      local_38 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
      if (param_1 != 0) {
        _WCRSideloadShareFixWriteGroupMarker(param_1);
      }
      _objc_storeStrong(&local_38,0);
    }
    FUN_00738b54();
  }
  return;
}

