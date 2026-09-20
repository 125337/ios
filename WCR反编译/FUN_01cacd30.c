// FUN_01cacd30 @ 01cacd30

void FUN_01cacd30(float param_1,long param_2)

{
  double dVar1;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_2;
  _objc_storeStrong(&local_20);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_floatValue_026a5b48);
  dVar1 = (double)param_1;
  if ((dVar1 < 0.0) || (1.0 < dVar1)) {
    if (dVar1 <= 1.0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (0,*(undefined8 *)(param_2 + 0x20),PTR_s_setAvatarCornerRadius__026b6150);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,*(undefined8 *)(param_2 + 0x20),
                 PTR_s_setAvatarCornerRadius__026b6150);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar1,*(undefined8 *)(param_2 + 0x20),PTR_s_setAvatarCornerRadius__026b6150);
  }
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_2 + 0x20),PTR_s_saveSettings_026b9548)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_20,0);
  return;
}

