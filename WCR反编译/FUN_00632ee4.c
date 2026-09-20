// FUN_00632ee4 @ 00632ee4

void FUN_00632ee4(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40 [3];
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cba08)(param_1,param_2,param_3 & 1);
  FUN_0063a16c();
  uVar3 = local_18;
  if ((param_1 & 1) != 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    FUN_00636798(uVar3,uVar2,&cf_home_viewDidAppear,1);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_40[0];
    FUN_0064166c();
    if ((uVar3 & 1) == 0) {
      FUN_00636798(local_18,local_40[0],&cf_home_viewDidAppear_before_setup,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupWeChatTopBarAvatar_026a6030);
    }
    FUN_0064182c(local_18,&cf_viewDidAppear);
    _objc_storeStrong(local_40,0);
  }
  return;
}

