// FUN_004367c4 @ 004367c4

byte FUN_004367c4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((DAT_028ca9a0 & 1) == 0) {
    uVar2 = local_20;
    (*DAT_028ca978)(local_20,local_28,local_30);
    uVar1 = (uint)uVar2;
    if (((uVar2 & 1) == 0) && (FUN_00439e64(), (uVar1 & 1) != 0)) {
      uVar3 = local_30;
      _WCRefineWrapIsRestrictedForwardCandidate();
      local_11 = (byte)uVar3 & 1;
    }
    else {
      local_11 = (byte)uVar2 & 1;
    }
  }
  else {
    uVar2 = local_20;
    (*DAT_028ca978)(local_20,local_28,local_30);
    local_11 = (byte)uVar2 & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

