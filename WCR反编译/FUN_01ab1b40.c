// FUN_01ab1b40 @ 01ab1b40

void FUN_01ab1b40(long param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  pcVar1 = &cf_beginMultiSelect;
  _NSSelectorFromString(&cf_beginMultiSelect);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = &cf_beginMultiSelect;
    _NSSelectorFromString(&cf_beginMultiSelect);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar1);
  }
  return;
}

