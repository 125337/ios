// FUN_002a5480 @ 002a5480

void FUN_002a5480(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tabBar_0269e518);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_002bad18();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_002d4db4();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedIndex_0269e580);
      (*DAT_028c9688)(local_18,local_20,local_28);
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedIndex_0269e580);
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tabBar_0269e518);
      _objc_retainAutoreleasedReturnValue();
      FUN_002bb194();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tabBar_0269e518);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedIndex_0269e580);
      FUN_002d5fe4(uVar3,uVar4,uVar1 != uVar2,uVar1 != uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    else {
      (*DAT_028c9688)(local_18,local_20,local_28);
    }
  }
  else {
    (*DAT_028c9688)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

