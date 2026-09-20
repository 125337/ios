// FUN_01c64060 @ 01c64060

void FUN_01c64060(float param_1,long param_2)

{
  double local_30;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_2;
  _objc_storeStrong(&local_20);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_floatValue_026a5b48);
  local_30 = (double)param_1;
  if (local_30 < -50.0) {
    local_30 = -50.0;
  }
  if (50.0 < local_30) {
    local_30 = 50.0;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,*(undefined8 *)(param_2 + 0x20),PTR_s_setTqqAvatarVerticalOffset__026c1de8);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_2 + 0x20),PTR_s_saveSettings_026b9548)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_20,0);
  return;
}

