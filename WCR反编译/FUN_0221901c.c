// FUN_0221901c @ 0221901c

void FUN_0221901c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  pcVar1 = *(code **)(unaff_x22 + 0x28);
  *(long *)(unaff_x22 + 0x20) = unaff_x22;
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  _swift_retain(uVar2);
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0221908c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x22 + 0x20) + 8))();
  return;
}

