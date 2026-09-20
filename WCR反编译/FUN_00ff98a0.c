// FUN_00ff98a0 @ 00ff98a0

void FUN_00ff98a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  FUN_00ff086c();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar2,uVar3,uVar4,*(undefined8 *)(param_1 + 0x20),PTR_s_setFrame__026ca960);
  return;
}

