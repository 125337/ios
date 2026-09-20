// FUN_01c5e81c @ 01c5e81c

void FUN_01c5e81c(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_38;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_38 = &cf__W_;
  }
  else {
    local_38 = local_20;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setTqqSeparatorOnlineText__026c1d58,local_38);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_saveSettings_026b9548)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_20,0);
  return;
}

