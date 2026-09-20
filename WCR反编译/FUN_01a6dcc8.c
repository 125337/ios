// FUN_01a6dcc8 @ 01a6dcc8

void FUN_01a6dcc8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_boolValue_026ca540);
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_boolValue_026ca540);
      if ((uVar1 & 1) == 0) {
        return;
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_boolValue_026ca540);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_saveContactsSectionPackAvatarIma_026bd2f8,uVar4,uVar2);
  }
  return;
}

