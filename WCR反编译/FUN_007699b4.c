// FUN_007699b4 @ 007699b4

void FUN_007699b4(ulong param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  ulong uVar2;
  
  (*DAT_028cc8d8)(param_1,param_2,param_3 & 1);
  uVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isMovingFromParentViewController_0269f458);
  uVar1 = (uint)uVar2;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isBeingDismissed_0269f460);
    uVar1 = (uint)param_1;
    if ((param_1 & 1) == 0) {
      return;
    }
  }
  FUN_0076c7f8();
  if ((uVar1 & 1) == 0) {
    FUN_0076bfd0();
  }
  else {
    FUN_0076c7cc();
  }
  return;
}

