// FUN_01c682d8 @ 01c682d8

void FUN_01c682d8(float param_1,long param_2)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_2;
  _objc_storeStrong();
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_floatValue_026a5b48);
  (*(code *)PTR__objc_msgSend_02578628)
            ((double)param_1,*(undefined8 *)(param_2 + 0x20),
             PTR_s_setNicknameVerticalOffset__026c1ec8);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_2 + 0x20),PTR_s_saveSettings_026b9548)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_20,0);
  return;
}

