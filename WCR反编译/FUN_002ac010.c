// FUN_002ac010 @ 002ac010

void FUN_002ac010(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  (*DAT_028c97c0)(param_1,param_2);
  uVar1 = param_1;
  FUN_002bad18();
  if ((uVar1 & 1) == 0) {
    FUN_002b7184(param_1,&cf_MMTabBar_didMoveToWindow_afterOrig);
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isHidden_026ca768);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      FUN_0029cc70();
      _objc_retainAutoreleasedReturnValue();
      FUN_002bb194(param_1,uVar1,0);
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
  }
  return;
}

