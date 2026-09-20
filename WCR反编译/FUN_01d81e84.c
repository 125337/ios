// FUN_01d81e84 @ 01d81e84

void FUN_01d81e84(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPkcOldSettingsVC__026c4c00,0);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_saveConfig_0269e5d0);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_reloadTableData_0269dca8);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_showFloatingCaptureButton_prompt_026c4c08,
             &cf_pkcOldSettingsVC,&cf_P);
  _objc_storeStrong(&local_20,0);
  return;
}

