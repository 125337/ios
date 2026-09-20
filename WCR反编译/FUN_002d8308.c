// FUN_002d8308 @ 002d8308

byte FUN_002d8308(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_120;
  byte local_104;
  ulong local_c8;
  ulong local_90;
  ulong local_80;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar3 = local_30;
  FUN_0029cc70();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_selectedViewController_0269d610);
  _objc_retainAutoreleasedReturnValue();
  local_61 = 0;
  puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  local_50[0] = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((uVar3 & 1) == 0) {
    local_c8 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_c8;
  }
  else {
    local_c8 = local_50[0];
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_c8;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  uVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_viewControllers_0269e348);
  _objc_retainAutoreleasedReturnValue();
  local_70 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
  if (uVar3 < 2) {
    local_21 = 0;
  }
  else {
    bVar2 = false;
    bVar1 = false;
    uVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_002d5dd0();
    local_104 = 0;
    if ((uVar5 & 1) != 0) {
      local_80 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      bVar1 = local_80 == 0;
      local_120 = local_80;
      if (bVar1) {
        local_90 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_lastObject_0269d200);
        _objc_retainAutoreleasedReturnValue();
        local_120 = local_90;
      }
      FUN_002d5dd0(local_120,&cf_BaseMsgContentViewController);
      local_104 = (byte)local_120;
    }
    local_21 = local_104 & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

