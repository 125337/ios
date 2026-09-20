// FUN_002a83b8 @ 002a83b8

void FUN_002a83b8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_50;
  ulong local_38;
  
  uVar1 = param_1;
  FUN_002b7bc4();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar1;
  if (uVar1 == 0) {
    local_38 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_38;
  }
  FUN_002bad18();
  if (uVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((local_50 & 1) == 0) {
    FUN_002d411c(param_1,&cf_MMTabBarController_showTabBar_beforeOrig);
    (*DAT_028c9718)(param_1,param_2);
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    FUN_002b7184();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    FUN_002d77c4(param_1,0,&cf_MMTabBarController_showTabBar);
  }
  else {
    (*DAT_028c9718)(param_1,param_2);
  }
  return;
}

