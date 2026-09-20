// FUN_016f4894 @ 016f4894

void FUN_016f4894(long param_1,byte param_2)

{
  if ((param_2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x28),PTR_s_setOn__0269dc80,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setPluginsPageLockEnabled__026b35a8,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_showToggleMessage_enabled__026b3570,&cf_cNub,1)
    ;
  }
  return;
}

