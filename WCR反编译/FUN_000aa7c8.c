// FUN_000aa7c8 @ 000aa7c8

void FUN_000aa7c8(long param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    pcVar1 = &cf_wcrefine_executeAction_;
    _NSSelectorFromString();
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),pcVar1,*(undefined8 *)(param_1 + 0x28));
    }
  }
  return;
}

