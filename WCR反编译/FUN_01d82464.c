// FUN_01d82464 @ 01d82464

void FUN_01d82464(long param_1)

{
  undefined *puVar1;
  undefined *local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setPkcOldSettingsVC__026c4c00,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setPkcLetsGoVC__026c4c10,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_saveConfig_0269e5d0);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

