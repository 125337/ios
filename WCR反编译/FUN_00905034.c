// FUN_00905034 @ 00905034

void FUN_00905034(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_a0;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  undefined1 local_49;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_getRootViewController_026aa000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(ulong *)(param_1 + 0x20);
  local_28 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_getTopViewController_026aa008);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar4;
  if (uVar4 == 0) {
    _objc_storeStrong(&local_30,local_28);
  }
  if (local_30 == 0) {
    local_34 = 1;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_findNavigationController__026aa010,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_30;
    local_40 = uVar5;
    if (uVar5 == 0) {
      puVar6 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
      if ((uVar4 & 1) != 0) {
        _objc_storeStrong(&local_40,local_30);
      }
    }
    local_49 = 0;
    bVar2 = false;
    uVar1 = local_40 == 0;
    if ((bool)uVar1) {
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_valueForKey__0269d128,&cf_navigationController);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = uVar4 != 0;
      local_49 = uVar1;
      local_48 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar1 = local_49;
    }
    local_49 = uVar1;
    if (bVar2) {
      uVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_valueForKey__0269d128,&cf_navigationController);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_40;
      local_40 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    lVar7 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_monitorMode_026a9f18);
    local_61 = 0;
    local_71 = 0;
    local_a0 = PTR_NavigationMonitorViewController_026cea58;
    if (lVar7 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_NavigationMonitorViewController_026cea58,PTR_s_nsLogMonitorController_026aa018)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_a0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_NavigationMonitorViewController_026cea58,
                 PTR_s_navigationMonitorController_026aa020);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_a0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_a0;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    if (local_40 == 0) {
      puVar6 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_80 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setModalPresentationStyle__0269d2a8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_presentViewController_animated_c_0269d2b0,local_80,1);
      _objc_storeStrong(&local_80,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_pushViewController_animated__0269d590,local_58,1);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

