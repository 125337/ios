// FUN_016f4c18 @ 016f4c18

void FUN_016f4c18(long param_1,byte param_2)

{
  if ((param_2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x28),PTR_s_setOn__0269dc80,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setSettingsPageLockEnabled__026b35b0,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_showToggleMessage_enabled__026b3570,&cf_n_ub,1)
    ;
  }
  return;
}

