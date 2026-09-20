// FUN_018954dc @ 018954dc

void FUN_018954dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long local_88;
  long local_70;
  long local_50;
  long local_48;
  int local_3c;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = param_1 + 0x40;
  local_30 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_3c = 1;
  }
  else {
    lVar1 = local_20;
    FUN_01895184();
    _objc_retainAutoreleasedReturnValue();
    local_70 = lVar1;
    if (lVar1 == 0) {
      local_70 = *(long *)(param_1 + 0x20);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_70;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_28;
    FUN_01895184();
    _objc_retainAutoreleasedReturnValue();
    local_88 = lVar1;
    if (lVar1 == 0) {
      local_88 = *(long *)(param_1 + 0x28);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_88;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_addObject__0269d180,local_48);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_addObject__0269d180,local_50);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  if (local_3c == 0) {
    local_3c = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

