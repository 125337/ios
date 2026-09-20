// FUN_0221c918 @ 0221c918

void FUN_0221c918(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  iVar1 = *param_2;
  puVar2 = (undefined8 *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(undefined8 **)(unaff_x22 + 0x18) = puVar2;
  *puVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar2[1] = FUN_0221c9a4;
                    /* WARNING: Could not recover jumptable at 0x0221c9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)param_2 + (long)iVar1))(param_1);
  return;
}

