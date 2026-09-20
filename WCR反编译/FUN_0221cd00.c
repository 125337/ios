// FUN_0221cd00 @ 0221cd00

void FUN_0221cd00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar4 = (undefined8 *)(ulong)DAT_0233c54c;
  _swift_task_alloc();
  *(undefined8 **)(unaff_x22 + 0x18) = puVar4;
  *puVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar4[1] = FUN_0221cda0;
  FUN_0221806c(param_1,uVar1,uVar2,uVar3);
  return;
}

