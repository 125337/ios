// FUN_01851788 @ 01851788

void FUN_01851788(long param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  
  pcVar1 = &cf_onAddToContact;
  _NSSelectorFromString();
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar1);
  if ((uVar2 & 1) == 0) {
    pcVar1 = &cf_onSendVerifyMsg;
    _NSSelectorFromString();
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) == 0) {
      pcVar1 = &cf_onSayHello;
      _NSSelectorFromString();
      uVar2 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar1);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),pcVar1);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),pcVar1);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),pcVar1);
  }
  return;
}

