// FUN_01ca3090 @ 01ca3090

void FUN_01ca3090(long param_1)

{
  cfstringStruct *local_40;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadTableData_0269dca8);
  local_40 = *(cfstringStruct **)(param_1 + 0x28);
  if (local_40 == (cfstringStruct *)0x0) {
    local_40 = &cf_Mn__b_YcN;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_showSuccessAlert_message__026c2db8,&cf_b_YbR,
             local_40);
  return;
}

