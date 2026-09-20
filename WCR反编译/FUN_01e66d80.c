// FUN_01e66d80 @ 01e66d80

void FUN_01e66d80(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_s_selectedRange_026a43a0;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_scrollRangeToVisible__026aa0d8,uVar1,puVar2);
  return;
}

