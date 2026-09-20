// FUN_01577bc4 @ 01577bc4

void FUN_01577bc4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_s_opEditRemarkName_026b06c8;
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_opEditRemarkName_026b06c8);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),puVar1);
  }
  return;
}

