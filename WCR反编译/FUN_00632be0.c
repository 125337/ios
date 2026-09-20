// FUN_00632be0 @ 00632be0

void FUN_00632be0(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  ulong local_40 [3];
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cba00)(param_1,param_2,param_3 & 1);
  FUN_0063a16c();
  uVar3 = local_18;
  if ((param_1 & 1) != 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    FUN_00636798(uVar3,uVar2,&cf_home_viewWillAppear,0xffffffffffffffff);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_transitionCoordinator_026a1c10);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = uVar3;
    if (uVar3 != 0) {
      _objc_initWeak(auStack_48,local_18);
      uVar3 = local_40[0];
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_00641458;
      local_58 = &DAT_0257e638;
      _objc_copyWeak(auStack_50,auStack_48);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_animateAlongsideTransition_compl_026a1c28,0,&local_70);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    uVar3 = local_18;
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    FUN_00636798(uVar3,uVar2,&cf_home_viewWillAppear_before_setup,0xffffffffffffffff);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupWeChatTopBarAvatar_026a6030);
    _objc_storeStrong(local_40,0);
  }
  return;
}

