// FUN_0155c7d4 @ 0155c7d4

void FUN_0155c7d4(undefined8 param_1,byte param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  uint local_70;
  undefined1 local_69;
  ulong local_68;
  ulong local_38;
  byte local_29;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar3 = local_28;
  local_29 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if ((uVar4 & 1) == 0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableView_0269dcb0);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableData_0269dca8);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableView_0269dcb0);
    }
  }
  else {
    local_38 = 0;
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_dataItem);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_38;
    local_38 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_38 == 0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_dataItem);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_38;
      local_38 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    if (local_38 == 0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf__dataItem);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_38;
      local_38 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    _WCRefineSetSkipFakeApplyOnReload(1);
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_initData_0269ec58);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_initData_0269ec58);
    }
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_initTableHeaderView_026a4fc0);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_initTableHeaderView_026a4fc0);
    }
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableView_0269dcb0);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableView_0269dcb0);
    }
    _WCRefineSetSkipFakeApplyOnReload(0);
    _objc_storeStrong(&local_38,0);
  }
  local_69 = 0;
  bVar2 = true;
  uVar1 = (local_29 & 1) != 0;
  if ((bool)uVar1) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 == 0;
    local_69 = uVar1;
    local_68 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_69;
  }
  local_69 = uVar1;
  if (!bVar2) {
    _objc_initWeak(auStack_78,local_28);
    dVar5 = _dispatch_time(0,220000000);
    puVar6 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_0158c8b0;
    local_88 = &DAT_0257be28;
    _objc_copyWeak(auStack_80,auStack_78);
    _dispatch_after(dVar5,puVar6,&local_a0);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  local_70 = (uint)bVar2;
  _objc_storeStrong(&local_28,0);
  return;
}

