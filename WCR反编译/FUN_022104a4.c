// FUN_022104a4 @ 022104a4

void FUN_022104a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = uVar2;
  _swift_retain();
  FUN_02210414();
  _swift_release(uVar2);
  *param_1 = uVar1;
  return;
}

