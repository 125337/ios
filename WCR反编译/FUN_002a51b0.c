// FUN_002a51b0 @ 002a51b0

void FUN_002a51b0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_002bad18();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_002d4db4();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedIndex_0269e580);
      _CFAbsoluteTimeGetCurrent();
      (*DAT_028c9680)(param_1,param_2,param_3);
      uVar2 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedIndex_0269e580);
      uVar3 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
      _objc_retainAutoreleasedReturnValue();
      FUN_002bb194();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedIndex_0269e580);
      FUN_002d5fe4(uVar3,param_1,uVar1 != uVar2,uVar1 != uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    else {
      (*DAT_028c9680)(param_1,param_2,param_3);
    }
  }
  else {
    (*DAT_028c9680)(param_1,param_2,param_3);
  }
  return;
}

