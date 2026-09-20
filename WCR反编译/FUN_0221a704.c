// FUN_0221a704 @ 0221a704

void FUN_0221a704(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar5 = (undefined8 *)(ulong)DAT_0233be5c;
  _swift_task_alloc();
  *(undefined8 **)(unaff_x22 + 0x18) = puVar5;
  *puVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar5[1] = FUN_0221a7b0;
  FUN_02218f80(param_1,uVar1,uVar2,uVar3,uVar4);
  return;
}

