// FUN_0221806c @ 0221806c

void FUN_0221806c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(long *)(unaff_x22 + 0x40) = unaff_x22;
  uVar1 = 0;
  *(long *)(unaff_x22 + 0x48) = 0;
  *(long *)(unaff_x22 + 0x48) = param_4 + 0x10;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  FUN_0221a654();
  __sScA15unownedExecutorScevgTj(uVar1,uVar2);
  _swift_task_switch(FUN_02218104,uVar1,uVar2);
  return;
}

