// FUN_000e6d48 @ 000e6d48

void FUN_000e6d48(long param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_000e6b68();
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    FUN_000e6c00(uVar1,"m_bLoading");
    if ((uVar1 & 1) == 0) {
      pcVar2 = &cf_getMoreData;
      _NSSelectorFromString();
      uVar1 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((uVar1 & 1) == 0) {
        return;
      }
      (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),pcVar2);
      return;
    }
  }
  _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),&DAT_028c839b,0,1);
  return;
}

