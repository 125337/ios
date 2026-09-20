// FUN_0171cd8c @ 0171cd8c

void FUN_0171cd8c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setCodeText__026b3a28);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_performSelector_withObject__026ca7c0,
               PTR_s_setCodeText__026b3a28,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

