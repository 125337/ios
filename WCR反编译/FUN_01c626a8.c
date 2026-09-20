// FUN_01c626a8 @ 01c626a8

void FUN_01c626a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setTqqOnlineIconFolderPath__026c1e20,*(undefined8 *)(param_1 + 0x20));
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_saveSettings_026b9548);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

