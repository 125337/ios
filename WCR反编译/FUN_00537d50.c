// FUN_00537d50 @ 00537d50

void FUN_00537d50(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isMovingFromParentViewController_0269f458);
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isBeingDismissed_0269f460);
    if ((((uVar1 & 1) != 0) || ((uVar2 & 1) != 0)) ||
       (uVar2 = local_18, FUN_00527e18(), (uVar2 & 1) == 0)) {
      FUN_00527da4();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

