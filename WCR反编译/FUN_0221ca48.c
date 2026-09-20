// FUN_0221ca48 @ 0221ca48

void FUN_0221ca48(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(ulong)DAT_0233c534;
  _swift_task_alloc();
  *(undefined8 **)(unaff_x22 + 0x18) = puVar1;
  *puVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar1[1] = FUN_0221cb04;
  (*(code *)((long)&DAT_0233c530 + (long)DAT_0233c530))(param_1,uVar3,uVar4,uVar2);
  return;
}

