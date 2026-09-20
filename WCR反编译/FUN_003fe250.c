// FUN_003fe250 @ 003fe250

void FUN_003fe250(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_68;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_titleView_0269ea50);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UISegmentedControl_026ce290,PTR_s_class_0269cd60);
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    bVar1 = false;
    if ((uVar4 & 1) != 0) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_titleView_0269ea50);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar4 == 0x57435249;
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTitleView__026a3560,0);
    }
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rightBarButtonItem_0269feb8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rightBarButtonItems_0269eab0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    FUN_003fe8ac();
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_leftBarButtonItem_026a3568);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_leftBarButtonItems_026a3570);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    FUN_003fe8ac();
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar4 = local_60;
    FUN_003fea60();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar2 = local_38;
    if (uVar4 != 0) {
      uVar4 = local_60;
      FUN_003feda4();
      _objc_retainAutoreleasedReturnValue();
      FUN_003ff678(uVar2,0);
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    uVar4 = local_68;
    FUN_003fea60();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar2 = local_38;
    if (uVar4 != 0) {
      uVar4 = local_68;
      FUN_003feda4();
      _objc_retainAutoreleasedReturnValue();
      FUN_003ff678(uVar2,1);
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    FUN_003ff528(local_28);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

