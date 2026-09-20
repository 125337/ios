// FUN_01e62244 @ 01e62244

void FUN_01e62244(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_50;
  undefined8 local_48;
  uint local_3c;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = param_1 + 0x28;
  local_30 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar1;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_colorFromHexString__026b30d8,local_20);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_colorFromHexString__026b30d8,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineConfig_026cdf58;
    local_50 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  local_3c = (uint)(lVar1 == 0);
  _objc_storeStrong(&local_38,0);
  if (local_3c == 0) {
    local_3c = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

