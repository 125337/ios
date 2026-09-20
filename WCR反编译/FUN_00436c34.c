// FUN_00436c34 @ 00436c34

byte FUN_00436c34(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_00439e64();
  if (((uVar1 & 1) != 0) &&
     (uVar1 = param_1, _WCRefineCellIsRestrictedForwardCandidate(), (uVar1 & 1) != 0)) {
    return 1;
  }
  (*DAT_028ca998)(param_1,param_2);
  return (byte)param_1 & 1;
}

