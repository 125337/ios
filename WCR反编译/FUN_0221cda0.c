// FUN_0221cda0 @ 0221cda0

void FUN_0221cda0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long *)(lVar1 + 0x10) = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0221cdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x10) + 8))();
  return;
}

