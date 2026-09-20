// FUN_000be6a4 @ 000be6a4

void FUN_000be6a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long local_60;
  ulong local_58;
  ulong local_50 [3];
  undefined *local_38;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  FUN_000bf144(puVar1,local_30);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedViewController_0269d610);
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = uVar2;
  FUN_000bf144(local_38,uVar2);
  uVar2 = local_50[0];
  local_58 = 0;
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 != 0) {
      uVar3 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_58;
      local_58 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  else {
    _objc_storeStrong(&local_58,local_50[0]);
  }
  puVar1 = local_38;
  if (local_58 != 0) {
    uVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    FUN_000bf144(puVar1);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = local_38;
    uVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    FUN_000bf144(puVar1);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = local_38;
    uVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    FUN_000bf144(puVar1);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  lVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar4 != 0) {
    lVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_38;
    local_60 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    FUN_000bf144(puVar1);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    puVar1 = local_38;
    lVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    FUN_000bf144(puVar1);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    puVar1 = local_38;
    lVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    FUN_000bf144(puVar1);
    (*(code *)PTR__objc_release_02578630)(lVar5);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    _objc_storeStrong(&local_60,0);
  }
  FUN_000bf144(local_38,local_28);
  puVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

