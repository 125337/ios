// FUN_02218f80 @ 02218f80

void FUN_02218f80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  *(long *)(unaff_x22 + 0x20) = unaff_x22;
  uVar1 = 0;
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  FUN_0221a654();
  __sScA15unownedExecutorScevgTj(uVar1,uVar2);
  _swift_task_switch(FUN_0221901c,uVar1,uVar2);
  return;
}

