// FUN_003faccc @ 003faccc

byte FUN_003faccc(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_003f12c8();
  uVar1 = (uint)uVar2;
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR_WCRefineInputBoxGestureSupport_026ce678;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineInputBoxGestureSupport_026ce678,PTR_s_isVoiceRecordHoldActive_026a34a0);
    uVar1 = (uint)puVar3;
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = local_20;
      FUN_003f5084();
      local_11 = (byte)uVar2;
      goto LAB_003fadfc;
    }
  }
  FUN_003f5040();
  if ((uVar1 & 1) != 0) {
    FUN_003f2900(local_20);
    DAT_028ca530 = 1;
  }
  uVar2 = local_20;
  FUN_003f5084();
  local_11 = 1;
  if ((uVar2 & 1) == 0) {
    local_11 = DAT_028ca530;
  }
LAB_003fadfc:
  local_11 = local_11 & 1;
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

