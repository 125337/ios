// FUN_0088eb84 @ 0088eb84

void FUN_0088eb84(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_0088eea4();
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    FUN_0088f004();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_recentForwardScrollView_026a91d0);
      _objc_retainAutoreleasedReturnValue();
      FUN_0088f1d8();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
  }
  (*DAT_028cd8f0)(param_1,param_2);
  return;
}

