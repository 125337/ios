// FUN_000b61a4 @ 000b61a4

void FUN_000b61a4(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  
  pcVar1 = &cf_scrollToTop;
  _NSSelectorFromString();
  pcVar2 = &cf_refreshHeadOnScrolltoTop;
  _NSSelectorFromString();
  uVar3 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar1);
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),pcVar2);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),pcVar1);
  }
  return;
}

