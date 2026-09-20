// FUN_017b0d5c @ 017b0d5c

void FUN_017b0d5c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_openLocalFrameSelector_026b4a40);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_performSelector__026ca7b8,
               PTR_s_openLocalFrameSelector_026b4a40);
  }
  return;
}

