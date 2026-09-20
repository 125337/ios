// FUN_00ff992c @ 00ff992c

void FUN_00ff992c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_dismissing_026ad680);
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_dismissBubble_notifyCompletion__026ad860,
               *(undefined8 *)(param_1 + 0x20),1);
  }
  return;
}

