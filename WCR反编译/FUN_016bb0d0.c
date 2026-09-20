// FUN_016bb0d0 @ 016bb0d0

void FUN_016bb0d0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_016a9384();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    FUN_016bb04c();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_updateNodeStatus_0269f010);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_updateNodeStatus_0269f010);
      }
    }
  }
  return;
}

