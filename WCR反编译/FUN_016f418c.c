// FUN_016f418c @ 016f418c

void FUN_016f418c(long param_1,byte param_2)

{
  if ((param_2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x28),PTR_s_setOn__0269dc80,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setTimelineMyPageLockEnabled__026b3598,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_showToggleMessage_enabled__026b3570,&cf_b_,1);
  }
  return;
}

