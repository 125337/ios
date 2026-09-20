// FUN_0078db10 @ 0078db10

void FUN_0078db10(long param_1)

{
  ulong uVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onEditMessage__026a4370,
             *(undefined8 *)(param_1 + 0x28));
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,
             PTR_s_trySetInputToolviewFirstResponde_026a4378);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_trySetInputToolviewFirstResponde_026a4378);
  }
  return;
}

