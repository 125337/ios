// FUN_016c7f2c @ 016c7f2c

void FUN_016c7f2c(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_privateHideToast_026a7f90);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_performSelector__026ca7b8,
                 PTR_s_privateHideToast_026a7f90);
    }
  }
  FUN_016c7fd0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}

